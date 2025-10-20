using System.Collections;
using System.Collections.Generic;
using Unity.MLAgents;
using Unity.MLAgents.Actuators;
using Unity.MLAgents.Sensors;
using UnityEngine;

public class MyHumanoid : Agent
{
    [Header("Params")]
    [SerializeField] private float m_maxSpeed = 8f;

    [SerializeField][Range(0f, 45f)] private float m_spineUpDeflectionAngle = 30f;
    [SerializeField][Range(0f, 45f)] private float m_spineForwardDeflectionAngle = 30f;
    [SerializeField] private Transform m_orient;
    [SerializeField] private Transform m_root;

    [Header("Body")]
    [SerializeField] private MyMainBodyPart m_hips;
    [SerializeField] private MyJointPart m_spine;
    [SerializeField] private MyJointPart m_chest;
    [SerializeField] private MyJointPart m_head;
    [Header("Right Leg")]
    [SerializeField] private MyJointPart m_rLeg;
    [SerializeField] private MyJointPart m_rKnee;
    [SerializeField] private MyJointPart m_rFoot;
    [Header("Left Leg")]
    [SerializeField] private MyJointPart m_lLeg;
    [SerializeField] private MyJointPart m_lKnee;
    [SerializeField] private MyJointPart m_lFoot;
    [Header("Right Arm")]
    [SerializeField] private MyJointPart m_rArm;
    [SerializeField] private MyJointPart m_rElbow;
    [Header("Left Arm")]
    [SerializeField] private MyJointPart m_lArm;
    [SerializeField] private MyJointPart m_lElbow;

    [Header("Penalties")]
    [SerializeField] private float m_groundTouchPenalty = -0.01f;
    [SerializeField] private float m_groundHitPenalty = -1;
    [Header("Rewards")]
    [SerializeField] private float m_lookAtTargetReward = 2f;
    [SerializeField] private float m_bodyOrientReward = 0.03f;

    [Header("Joint Drive Settings")]
    [SerializeField] private float maxJointSpring;
    [SerializeField] private float jointDampen;
    [SerializeField] private float maxJointForceLimit;

    private Vector3 m_inputDirection;

    //The current target walking speed. Clamped because a value of zero will cause NaNs
    private float m_targetWalkingSpeed;

    private List<MyJointPart> m_joints = new List<MyJointPart>();

    public float targetWalkingSpeed
    {
        get { return m_targetWalkingSpeed * m_inputDirection.magnitude; }
        set { m_targetWalkingSpeed = Mathf.Clamp(value, .1f, m_maxSpeed); }
    }

    public Vector3 feetPos => (m_rFoot.position + m_lFoot.position) / 2;

    public float velocity => GetAvgVelocity().magnitude;
    public float maxSpeed => m_maxSpeed;

    protected override void Awake()
    {
        base.Awake();

        m_joints.Add(m_spine);
        m_joints.Add(m_chest);
        m_joints.Add(m_head);

        m_joints.Add(m_rLeg);
        m_joints.Add(m_rKnee);
        m_joints.Add(m_rFoot);

        m_joints.Add(m_lLeg);
        m_joints.Add(m_lKnee);
        m_joints.Add(m_lFoot);

        m_joints.Add(m_rArm);
        m_joints.Add(m_rElbow);

        m_joints.Add(m_lArm);
        m_joints.Add(m_lElbow);

        foreach (var joint in m_joints)
        {
            joint.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        }
    }

    protected override void OnEnable()
    {
        base.OnEnable();

        m_hips.GroundHitPenalty += GroundHitPenalty;

        foreach (var joint in m_joints) 
        {
            joint.GroundHitPenalty += GroundHitPenalty;
        }
    }

    protected override void OnDisable()
    {
        base.OnDisable();

        m_hips.GroundHitPenalty -= GroundHitPenalty;

        foreach (var joint in m_joints)
        {
            joint.GroundHitPenalty -= GroundHitPenalty;
        }
    }

    private void FixedUpdate()
    {

        Color rayColorForward = Color.red;
        Color rayColorUp = Color.red;

        Vector3 spineForward = (m_hips.forward + m_spine.forward + m_chest.forward + m_head.forward) / 4;
        Vector3 spineUp = (m_hips.up + m_spine.up + m_chest.up + m_head.up) / 4;

        m_root.position = feetPos;
        m_root.forward = spineForward;
        m_orient.position = feetPos;
        m_orient.forward = m_inputDirection != Vector3.zero ? m_inputDirection : Vector3.down;

        float matchSpeedReward = GetMatchingVelocityReward();
        //float lookAtTargetReward = 0;
        float lookAtTargetReward = (Vector3.Dot(m_inputDirection, spineForward) + 1) / 2;
        //var velocityForwardsReward = (Vector3.Dot(spineForward, GetAvgVelocity()) + 1) / 2;

        if (targetWalkingSpeed == 0 || Vector3.Angle(spineForward, m_inputDirection) <= m_spineForwardDeflectionAngle)
        {
            rayColorForward = Color.green;
            //lookAtTargetReward = (Vector3.Dot(m_inputDirection, spineForward) + 1) / 2 ;
        }

        if (spineUp.y >= Mathf.Cos(m_spineUpDeflectionAngle * Mathf.Deg2Rad))
        {
            //AddReward(m_bodyOrientReward);
            AddReward(m_lookAtTargetReward * lookAtTargetReward * matchSpeedReward);
            rayColorUp = Color.green;
        }

        //Debug.Log($"\t{lookAtTargetReward:f4} \t{matchSpeedReward:f4} \t{lookAtTargetReward * matchSpeedReward:f4}");

        Debug.DrawRay(m_hips.position, spineUp * 1.5f, rayColorUp);
        Debug.DrawRay(m_hips.position, spineForward * 1.5f, rayColorForward);
    }

    public float GetMatchingVelocityReward()
    {
        float velDeltaMagnitude = Vector3.Distance(m_inputDirection * targetWalkingSpeed, GetAvgVelocity());
        float clampedDelta = 0;
        float clampHighBorder = targetWalkingSpeed == 0 ? m_maxSpeed : targetWalkingSpeed;

        if (float.IsNaN(velDeltaMagnitude)) 
        {
            return 0;
        }

        clampedDelta = Mathf.Clamp(velDeltaMagnitude, 0, clampHighBorder * 2) / clampHighBorder;

        return Mathf.Tan(Mathf.PI / 4 * (1 - clampedDelta));

        return Mathf.Pow(1 - Mathf.Pow(clampedDelta, 2), 2);
    }

    private void GetGroundedPenalty()
    {
        bool isGrounded = m_hips.isGrounded;

        foreach (var joint in m_joints)
        {
            isGrounded |= joint.isGrounded & joint.doGroundHitPenalty;
        }

        AddReward(m_groundTouchPenalty * (isGrounded ? 1 : -1));
    }

    private void GroundHitPenalty(bool endEpisode)
    {
        AddReward(m_groundHitPenalty);
        if (endEpisode)
        {
            EndEpisode();
        }
    }

    private Vector3 GetAvgVelocity()
    {
        Vector3 sum = Vector3.zero;

        sum += m_hips.velocity;

        foreach (var joint in m_joints)
        {
            sum += joint.velocity;
        }

        return sum / (1 + m_joints.Count);
    }

    private void CollectObservationsJointPart(MyJointPart joint, VectorSensor sensor)
    {
        sensor.AddObservation(joint.isGrounded);
        if (joint.maxStrenth > 0)
        {
            sensor.AddObservation(joint.strenth / joint.maxStrenth);
        }
        else 
        {
            sensor.AddObservation(0f);
        }
    }

    public override void OnEpisodeBegin()
    {
        m_hips.ResetBody();

        foreach (var joint in m_joints)
        {
            joint.ResetBody();
        }

        Physics.SyncTransforms();

        targetWalkingSpeed = Random.Range(m_maxSpeed / 3 * 2, m_maxSpeed);
    }

    public override void CollectObservations(VectorSensor sensor)
    {
        var velGoal = m_inputDirection * targetWalkingSpeed;
        var avgVel = GetAvgVelocity();

        sensor.AddObservation(velGoal);
        sensor.AddObservation(avgVel);

        sensor.AddObservation(m_inputDirection); // 3
        sensor.AddObservation(m_hips.flatForward); // 3

        foreach (var joint in m_joints)
        {
            CollectObservationsJointPart(joint, sensor);
        }
    }

    public override void OnActionReceived(ActionBuffers actionsBuffer)
    {
        MyCountedEnumerator actions = new MyCountedEnumerator(actionsBuffer.ContinuousActions.GetEnumerator());

        foreach (var joint in m_joints)
        {
            joint.SetJointMove(actions);
        }

        if (actions.Count != actionsBuffer.ContinuousActions.Length)
        {
            Debug.Log($"Actions count does not match: {actions.Count} - getted, {actionsBuffer.ContinuousActions.Length} - buffer");
        }
    }

    public override void Heuristic(in ActionBuffers actionsOut)
    {

    }


    public void OnMove(Vector2 input)
    {
        m_inputDirection = input.x * Vector3.right + input.y * Vector3.forward;
    }
}
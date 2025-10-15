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

    [SerializeField][Range(0f, 1f)] private float m_spineNormal = 0.9f;
    [SerializeField] private Transform m_orient;

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

    public float TargetWalkingSpeed
    {
        get { return m_targetWalkingSpeed * m_inputDirection.magnitude; }
        set { m_targetWalkingSpeed = Mathf.Clamp(value, .1f, m_maxSpeed); }
    }

    public Vector3 FeetPos => (m_rFoot.Position + m_lFoot.Position) / 2;

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

        m_hips.Grounded += () => { GroundHitPenalty(true); };

        foreach (var joint in m_joints) 
        {
            joint.GroundHitPenalty += GroundHitPenalty;
        }
    }

    protected override void OnDisable()
    {
        base.OnDisable();

        m_hips.Grounded -= () => { GroundHitPenalty(true); };

        foreach (var joint in m_joints)
        {
            joint.GroundHitPenalty -= GroundHitPenalty;
        }
    }

    private void FixedUpdate()
    {
        m_orient.position = FeetPos;
        m_orient.forward = m_inputDirection;

        float matchSpeedReward = GetMatchingVelocityReward(m_inputDirection * TargetWalkingSpeed, GetAvgVelocity());

        var bodyOrientReward = Mathf.Clamp01(Vector3.Dot(m_spine.up, Vector3.up));
        var chestOrientReward = Mathf.Clamp01(Vector3.Dot(m_chest.up, Vector3.up));
        var headOrientReward = Mathf.Clamp01(Vector3.Dot(m_head.up, Vector3.up));

        if (m_spine.up.y < m_spineNormal || m_chest.up.y < m_spineNormal || m_head.up.y < m_spineNormal)
        {
            bodyOrientReward = 0;
        }

        var lookAtTargetReward = (Vector3.Dot(m_inputDirection, m_hips.forward) + 1) / 2;
        var velocityForwardsReward = (Vector3.Dot(m_hips.forward, GetAvgVelocity()) + 1) / 2;

        //AddReward(m_bodyOrientReward * velocityForwardsReward * bodyOrientReward * chestOrientReward * headOrientReward);

        Vector3 spineUp = (m_hips.up + m_spine.up + m_chest.up + m_head.up) / 4;
        Color rayColor = Color.red;

        if (spineUp.y >= m_spineNormal)
        {
            AddReward(m_lookAtTargetReward * lookAtTargetReward * matchSpeedReward);
            rayColor = Color.green;
        }

        Debug.DrawRay(m_hips.Position, spineUp * 1.5f, rayColor);
    }

    public float GetMatchingVelocityReward(Vector3 velocityGoal, Vector3 actualVelocity)
    {
        var velDeltaMagnitude = Mathf.Clamp(Vector3.Distance(actualVelocity, velocityGoal), 0, TargetWalkingSpeed);

        if (float.IsNaN(velDeltaMagnitude)) 
        {
            return 0;
        }
        if (TargetWalkingSpeed == 0)
        {
            return 0;
        }
        return Mathf.Pow(1 - Mathf.Pow(velDeltaMagnitude / TargetWalkingSpeed, 2), 2);
    }

    private void GetGroundedPenalty()
    {
        bool isGrounded = m_hips.IsGrounded;

        foreach (var joint in m_joints)
        {
            isGrounded |= joint.isGrounded & joint.DoGroundHitPenalty;
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

        return sum / 14;
    }

    private void CollectObservationsJointPart(MyJointPart joint, VectorSensor sensor)
    {
        sensor.AddObservation(joint.isGrounded);
        sensor.AddObservation(joint.strenth / joint.maxStrenth);
    }

    public override void OnEpisodeBegin()
    {
        Debug.Log($"[Episode Begins] - {CompletedEpisodes}");

        m_hips.ResetBody();

        foreach (var joint in m_joints)
        {
            joint.ResetJoint();
        }

        TargetWalkingSpeed = Random.Range(m_maxSpeed / 3 * 2, m_maxSpeed);
    }

    public override void CollectObservations(VectorSensor sensor)
    {
        var velGoal = m_inputDirection * TargetWalkingSpeed;
        var avgVel = GetAvgVelocity();

        sensor.AddObservation(velGoal);
        sensor.AddObservation(avgVel);

        sensor.AddObservation(m_inputDirection); // 3
        sensor.AddObservation(m_hips.forward); // 3

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
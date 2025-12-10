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
    //[SerializeField] private Transform m_root;

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
    [SerializeField] private float m_groundHitPenalty = -1;
    [Header("Rewards")]
    [SerializeField] private float m_lookAtTargetReward = 2f;
    [SerializeField] private float m_matchSpeedReward = 2f;

    [Header("Joint Drive Settings")]
    [SerializeField] private float maxJointSpring;
    [SerializeField] private float jointDampen;
    [SerializeField] private float maxJointForceLimit;

    private Vector3 m_inputDirection;

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

        /*m_root.position = m_hips.position;
        m_root.forward = new Vector3(spineForward.x, 0, spineForward.z);*/
        m_orient.position = m_hips.position;
        m_orient.forward = m_inputDirection != Vector3.zero ? m_inputDirection : Vector3.down;

        float matchSpeedReward = GetMatchingVelocityReward();
        //float lookAtTargetReward = (Vector3.Dot(m_inputDirection, spineForward) + 1) / 2;
        float lookAtTargetReward = Vector3.Dot(m_inputDirection, spineForward);
        //var velocityForwardsReward = (Vector3.Dot(spineForward, GetAvgVelocity()) + 1) / 2;
        //var velocityForwardsReward = (Vector3.Dot(spineForward, GetAvgVelocity()) + 1) / 2;

        if (targetWalkingSpeed == 0 || Vector3.Angle(spineForward, m_inputDirection) <= m_spineForwardDeflectionAngle)
        {
            rayColorForward = Color.green;
        }

            AddReward(m_lookAtTargetReward * lookAtTargetReward);
            AddReward(m_matchSpeedReward * matchSpeedReward);

            //AddReward(m_bodyOrientReward);
            AddReward(m_lookAtTargetReward * lookAtTargetReward * matchSpeedReward);
            rayColorUp = Color.green;
        //print($"l:\t{m_lookAtTargetReward * lookAtTargetReward:f4} | m:\t{m_matchSpeedReward * matchSpeedReward:f4}");

        //print($"l:\t{m_lookAtTargetReward * lookAtTargetReward:f4} | m:\t{m_matchSpeedReward * matchSpeedReward:f4}");

        Debug.DrawRay(m_hips.position, spineUp * 1.5f, rayColorUp);
        Debug.DrawRay(m_hips.position, spineForward * 1.5f, rayColorForward);
    }

    public float GetMatchingVelocityReward()
    {
        float velDeltaMagnitude = Vector3.Distance(m_inputDirection * targetWalkingSpeed, GetAvgVelocity());

        if (float.IsNaN(velDeltaMagnitude)) 
        {
            return 0;
        }

        float clampHighBorder = targetWalkingSpeed == 0 ? m_maxSpeed : targetWalkingSpeed;
        float clampedDelta = Mathf.Clamp01(Mathf.Clamp(velDeltaMagnitude, 0, clampHighBorder) / clampHighBorder);

        //return Mathf.Tan(Mathf.PI / 4 * (1 - clampedDelta));

        return Mathf.Pow(1 - Mathf.Pow(clampedDelta, 2), 2);
    }

    /*private void GetGroundedPenalty()
    {
        bool isGrounded = m_hips.isGrounded;

        foreach (var joint in m_joints)
        {
            isGrounded |= joint.isGrounded & joint.doGroundHitPenalty;
        AddReward(m_groundTouchPenalty * (isGrounded ? 0 : -1));
    }*/
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
        sensor.AddObservation(joint.isGrounded); // +1
        sensor.AddObservation(joint.maxStrenth > 0 ? joint.strenth / joint.maxStrenth : 0f); // +1

        //Get velocities in the context of our orientation cube's space
        //Note: You can get these velocities in world space as well but it may not train as well.
        sensor.AddObservation(m_orient.transform.InverseTransformDirection(joint.velocity));
        sensor.AddObservation(m_orient.transform.InverseTransformDirection(joint.angularVelocity));

        //Get position relative to hips in the context of our orientation cube's space
        sensor.AddObservation(m_orient.transform.InverseTransformDirection(joint.position - m_hips.position));

        sensor.AddObservation(joint.localRotation);
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

        float velNormalized = Vector3.Distance(velGoal, avgVel) / targetWalkingSpeed;

        if (float.IsNaN(velNormalized))
        {
            velNormalized = 0f;
        }

        sensor.AddObservation(velNormalized); // + 1

        sensor.AddObservation(m_orient.transform.InverseTransformDirection(avgVel));
        sensor.AddObservation(m_orient.transform.InverseTransformDirection(velGoal)); // + 6

        sensor.AddObservation(Quaternion.FromToRotation(m_hips.forward, m_orient.transform.forward));
        sensor.AddObservation(Quaternion.FromToRotation(m_spine.forward, m_orient.transform.forward));
        sensor.AddObservation(Quaternion.FromToRotation(m_chest.forward, m_orient.transform.forward));
        sensor.AddObservation(Quaternion.FromToRotation(m_head.forward, m_orient.transform.forward)); // + 16

        sensor.AddObservation(velGoal);
        sensor.AddObservation(avgVel); // +6

        sensor.AddObservation(m_inputDirection);
        sensor.AddObservation(m_hips.flatForward); // +6

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
            Debug.LogWarning($"Actions count does not match: {actions.Count} - getted, {actionsBuffer.ContinuousActions.Length} - buffer");
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
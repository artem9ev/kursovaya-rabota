using System.Collections.Generic;
using Unity.MLAgents;
using Unity.MLAgents.Actuators;
using Unity.MLAgents.Sensors;
using UnityEngine;

public class MyHumanoid : Agent
{
    [Header("Params")]
    [SerializeField] private float m_maxSpeed = 8f;
    [SerializeField][Range(0f, 45f)] private float m_spineUpDeflectionAngle = 35f;
    [SerializeField][Range(0f, 45f)] private float m_spineForwardDeflectionAngle = 15f;

    [Header("Penalties")]
    [SerializeField] private float m_groundHitPenalty = -1;
    [Header("Rewards")]
    [SerializeField] private float m_lookAtTargetReward = 2f;
    [SerializeField] private float m_matchSpeedReward = 2f;

    private HumanoidJointsDriver m_jointsDriver;

    private Vector3 m_inputDirection;

    private float m_targetWalkingSpeed;

    public Vector3 velocity => m_jointsDriver.velocity;

    public float targetWalkingSpeed
    {
        get { return m_targetWalkingSpeed * m_inputDirection.magnitude; }
        set { m_targetWalkingSpeed = Mathf.Clamp(value, .1f, m_maxSpeed); }
    }

    public float maxSpeed => m_maxSpeed;

    protected override void Awake()
    {
        base.Awake();

        m_jointsDriver = GetComponent<HumanoidJointsDriver>();
    }

    protected override void OnEnable()
    {
        base.OnEnable();

        m_jointsDriver.OnGroundHitPenalty += GroundHitPenalty;
    }

    protected override void OnDisable()
    {
        base.OnDisable();

        m_jointsDriver.OnGroundHitPenalty -= GroundHitPenalty;
    }

    private void FixedUpdate()
    {
        Color rayColorForward = Color.red;
        Color rayColorUp = Color.red;

        m_jointsDriver.orientForward = m_inputDirection != Vector3.zero ? m_inputDirection : m_jointsDriver.orientForward;

        float matchSpeedReward = GetMatchingVelocityReward();
        float lookAtTargetReward = Mathf.Clamp01(Vector3.Dot(m_inputDirection, m_jointsDriver.spineForward));

        if (targetWalkingSpeed == 0 || Vector3.Angle(m_jointsDriver.spineForward, m_inputDirection) <= m_spineForwardDeflectionAngle)
        {
            AddReward(m_matchSpeedReward * matchSpeedReward);

            rayColorForward = Color.green;
        }

        if (Vector3.Angle(m_jointsDriver.spineUp, Vector3.up) <= m_spineUpDeflectionAngle)
        {
            AddReward(m_lookAtTargetReward * lookAtTargetReward);

            rayColorUp = Color.green;
        }

        //print($"l:\t{m_lookAtTargetReward * lookAtTargetReward:f4} | m:\t{m_matchSpeedReward * matchSpeedReward:f4}");

        Debug.DrawRay(m_jointsDriver.hips.position, m_jointsDriver.spineUp * 1.5f, rayColorUp);
        Debug.DrawRay(m_jointsDriver.hips.position, m_jointsDriver.spineForward * 1.5f, rayColorForward);
    }

    public float GetMatchingVelocityReward()
    {
        float velDeltaMagnitude = Vector3.Distance(m_inputDirection * targetWalkingSpeed, m_jointsDriver.velocity);

        if (float.IsNaN(velDeltaMagnitude)) 
        {
            return 0;
        }

        float clampHighBorder = targetWalkingSpeed == 0 ? m_maxSpeed : targetWalkingSpeed;
        float clampedDelta = Mathf.Clamp01(Mathf.Clamp(velDeltaMagnitude, 0, clampHighBorder) / clampHighBorder);

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

    private void GroundHitPenalty(bool endEpisode)
    {
        AddReward(m_groundHitPenalty);

        if (endEpisode)
        {
            EndEpisode();
        }
    }

    public override void OnEpisodeBegin()
    {
        m_jointsDriver.ResetRagdoll();

        targetWalkingSpeed = Random.Range(m_maxSpeed / 3 * 2, m_maxSpeed);
    }

    private void CollectObservationsJointPart(MyJointPart joint, VectorSensor sensor)
    {
        sensor.AddObservation(joint.isGrounded); // +1
        sensor.AddObservation(joint.maxStrenth > 0 ? joint.strenth / joint.maxStrenth : 0f); // +1

        //Get velocities in the context of our orientation cube's space
        //Note: You can get these velocities in world space as well but it may not train as well.
        sensor.AddObservation(m_jointsDriver.GetRelativeDirection(joint.velocity));
        sensor.AddObservation(m_jointsDriver.GetRelativeDirection(joint.angularVelocity));

        //Get position relative to hips in the context of our orientation cube's space
        sensor.AddObservation(m_jointsDriver.GetRelativePosition(joint.position));

        //sensor.AddObservation(joint.localRotation);
        sensor.AddObservation(m_jointsDriver.GetRelativeRotation(joint.forward));
    }

    public override void CollectObservations(VectorSensor sensor)
    {
        var velGoal = m_inputDirection * targetWalkingSpeed;
        var avgVel = m_jointsDriver.velocity;

        float velNormalized = avgVel.magnitude / targetWalkingSpeed;

        if (float.IsNaN(velNormalized))
        {
            velNormalized = 0f;
        }

        sensor.AddObservation(velNormalized); // + 1

        sensor.AddObservation(m_jointsDriver.GetRelativeDirection(avgVel));
        sensor.AddObservation(m_jointsDriver.GetRelativeDirection(velGoal)); // + 6

        sensor.AddObservation(m_jointsDriver.GetRelativeRotation(m_jointsDriver.joints[0].forward));
        sensor.AddObservation(m_jointsDriver.GetRelativeRotation(m_jointsDriver.joints[1].forward));
        sensor.AddObservation(m_jointsDriver.GetRelativeRotation(m_jointsDriver.joints[2].forward));
        sensor.AddObservation(m_jointsDriver.GetRelativeRotation(m_jointsDriver.joints[3].forward)); // + 16

        //sensor.AddObservation(m_jointsDriver.orientForward);

        foreach (var joint in m_jointsDriver.joints)
        {
            CollectObservationsJointPart(joint, sensor);
        }
    }

    public override void OnActionReceived(ActionBuffers actionsBuffer)
    {
        MyCountedEnumerator actions = new MyCountedEnumerator(actionsBuffer.ContinuousActions.GetEnumerator());

        foreach (var joint in m_jointsDriver.joints)
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
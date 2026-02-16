using Unity.MLAgents;
using Unity.MLAgents.Actuators;
using Unity.MLAgents.Sensors;
using UnityEngine;

public class HumanoidWalkAgent : Agent
{
    [SerializeField] private HumanoidJointsDriver m_jointsDriver;
    [Header("Params")]
    [SerializeField] private float m_maxSpeed = 8f;
    [SerializeField][Range(0f, 45f)] private float m_spineUpDeflectionAngle = 35f;
    [SerializeField][Range(0f, 45f)] private float m_spineForwardDeflectionAngle = 15f;

    [Header("Penalties")]
    [SerializeField, Min(0f)] private float m_penalty = 1;

    private Vector3 m_inputDirection;

    private float m_targetWalkingSpeed;

    private int m_steps = 0;
    private float m_matchVelocityRewardSum = 0;
    private float m_lookAtTargetRewardSum = 0;
    private bool m_hasCalculatedRaward;

    public float targetWalkingSpeed
    {
        get { return m_targetWalkingSpeed * m_inputDirection.magnitude; }
        set { m_targetWalkingSpeed = Mathf.Clamp(value, .1f, m_maxSpeed); }
    }

    public float maxSpeed => m_maxSpeed;

    protected override void OnEnable()
    {
        base.OnEnable();

        m_jointsDriver.hips.GroundHitPenalty += GroundHitPenalty;

        foreach (var joint in m_jointsDriver.joints)
        {
            joint.GroundHitPenalty += GroundHitPenalty;
        }
    }

    protected override void OnDisable()
    {
        base.OnDisable();
        
        m_jointsDriver.hips.GroundHitPenalty -= GroundHitPenalty;

        foreach (var joint in m_jointsDriver.joints)
        {
            joint.SetJointStrength(0.002f);
            joint.GroundHitPenalty -= GroundHitPenalty;
        }
    }

    private void OnDrawGizmos()
    {
        Color rayColorForward = Color.red;
        Color rayColorUp = Color.red;

        if (targetWalkingSpeed == 0 || Vector3.Angle(m_jointsDriver.spineForward, m_inputDirection) <= m_spineForwardDeflectionAngle)
        {
            rayColorForward = Color.green;
        }

        if (Vector3.Angle(m_jointsDriver.spineUp, Vector3.up) <= m_spineUpDeflectionAngle)
        {
            rayColorUp = Color.green;
        }

        Gizmos.color = rayColorUp;
        Gizmos.DrawRay(m_jointsDriver.hips.position, m_jointsDriver.spineUp * 1.5f);

        Gizmos.color = rayColorForward;
        Gizmos.DrawRay(m_jointsDriver.hips.position, m_jointsDriver.spineForward * 1.5f);
    }

    private void UpdateRewards()
    {
        m_jointsDriver.orientForward = m_inputDirection != Vector3.zero ? m_inputDirection : m_jointsDriver.orientForward;

        float matchSpeedReward = GetMatchingVelocityReward();
        float lookAtTargetReward = Mathf.Clamp01(Vector3.Dot(m_inputDirection, m_jointsDriver.spineForward));

        if (Vector3.Angle(m_jointsDriver.spineUp, Vector3.up) <= m_spineUpDeflectionAngle)
        {
            m_matchVelocityRewardSum += matchSpeedReward;
            m_lookAtTargetRewardSum += lookAtTargetReward;
        }
    }

    private float GetMatchingVelocityReward()
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

    private void CalculateRewards()
    {
        if (m_hasCalculatedRaward)
        {
            Debug.LogWarning("Repeating call of calculate reward function");
            return;
        }

        AddReward((m_matchVelocityRewardSum + m_lookAtTargetRewardSum) / MaxStep * m_penalty);
    }

    private void GroundHitPenalty(bool endEpisode)
    {
        AddReward(-m_penalty);
        CalculateRewards();

        if (endEpisode)
        {
            EndEpisode();
        }
    }

    public override void OnEpisodeBegin()
    {
        m_jointsDriver.ResetRagdoll();

        targetWalkingSpeed = Random.Range(m_maxSpeed / 5, m_maxSpeed);

        m_hasCalculatedRaward = false;
    }

    public override void CollectObservations(VectorSensor sensor)
    {
        var velGoal = m_inputDirection * targetWalkingSpeed;
        var avgVel = m_jointsDriver.velocity;

        float velNormalized = avgVel.magnitude / targetWalkingSpeed;

        if (float.IsNaN(velNormalized) || float.IsInfinity(velNormalized))
        {
            velNormalized = 0f;
        }

        sensor.AddObservation(velNormalized); // + 1

        sensor.AddObservation(m_jointsDriver.GetRelativeDirection(avgVel));
        sensor.AddObservation(m_jointsDriver.GetRelativeDirection(velGoal)); // + 6

        foreach (var joint in m_jointsDriver.joints)
        {
            joint.GetObservations(sensor);
        }
    }

    public override void OnActionReceived(ActionBuffers actionsBuffer)
    {
        MyCountedEnumerator continuousActions = new MyCountedEnumerator(actionsBuffer.ContinuousActions.GetEnumerator());

        foreach (var joint in m_jointsDriver.joints)
        {
            joint.SetContinuousActios(continuousActions);
        }
        if (continuousActions.Count != actionsBuffer.ContinuousActions.Length)
        {
            Debug.LogWarning($"Continuous Actions count does not match: {continuousActions.Count} - getted, {actionsBuffer.ContinuousActions.Length} - buffer");
        }

        MyCountedEnumerator disctreteActions = new MyCountedEnumerator(actionsBuffer.DiscreteActions.GetEnumerator());

        foreach (var joint in m_jointsDriver.joints)
        {
            joint.SetDiscreteActios(disctreteActions);
        }
        if (disctreteActions.Count != actionsBuffer.DiscreteActions.Length)
        {
            Debug.LogWarning($"Discrete Actions count does not match: {disctreteActions.Count} - getted, {actionsBuffer.DiscreteActions.Length} - buffer");
        }

        UpdateRewards();

        if (m_steps >= MaxStep)
        {
            CalculateRewards();
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
using Unity.MLAgents;
using Unity.MLAgents.Actuators;
using Unity.MLAgents.Sensors;
using UnityEngine;
using UnityEngine.Events;

public class HumanoidWalkAgent : Agent
{
    [SerializeField] private HumanoidJointsDriver m_jointsDriver;
    [Header("Params")]
    [SerializeField] private float m_maxSpeed = 8f;

    [Header("Penalties")]
    [SerializeField, Min(0f)] private float m_penalty = 10f;

    private Vector3 m_inputDirection;

    private float m_targetWalkingSpeed;

    public UnityAction ActionReceived;
    public UnityAction EpisodeBegin;
    public UnityAction EpisodeEnd;

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

    private void FixedUpdate()
    {
        m_jointsDriver.orientForward = m_inputDirection != Vector3.zero ? m_inputDirection : m_jointsDriver.orientForward;
    }

    private void GroundHitPenalty(bool endEpisode)
    {
        AddReward(-m_penalty);

        if (endEpisode)
        {
            EndEpisode();
        }
    }

    public new void EndEpisode()
    {
        EpisodeEnd?.Invoke();

        base.EndEpisode();
    }

    public override void OnEpisodeBegin()
    {
        m_jointsDriver.ResetRagdoll();

        //targetWalkingSpeed = Random.Range(m_maxSpeed / 2, m_maxSpeed);
        targetWalkingSpeed = m_maxSpeed;

        EpisodeBegin?.Invoke();
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

        // Положение стоп относительно центра масс (в системе координат ориентации)
        sensor.AddObservation(m_jointsDriver.GetRelativePosition(m_jointsDriver.leftFoot.position));
        sensor.AddObservation(m_jointsDriver.GetRelativePosition(m_jointsDriver.rightFoot.position)); // +6

        // Скорости стоп
        sensor.AddObservation(m_jointsDriver.GetRelativeDirection(m_jointsDriver.leftFoot.velocity));
        sensor.AddObservation(m_jointsDriver.GetRelativeDirection(m_jointsDriver.rightFoot.velocity)); // +6

        foreach (var joint in m_jointsDriver.joints)
        {
            joint.GetObservations(sensor);
        }
    }

    public override void OnActionReceived(ActionBuffers actionsBuffer)
    {
        MyCountedEnumerator continuousActions = new MyCountedEnumerator(actionsBuffer.ContinuousActions.GetEnumerator());

        m_jointsDriver.hips.SetContinuousActios(continuousActions);

        foreach (var joint in m_jointsDriver.joints)
        {
            joint.SetContinuousActios(continuousActions);
        }
        if (continuousActions.Count != actionsBuffer.ContinuousActions.Length)
        {
            Debug.LogWarning($"Continuous Actions count does not match: {continuousActions.Count} - getted, {actionsBuffer.ContinuousActions.Length} - buffer");
        }

        MyCountedEnumerator disctreteActions = new MyCountedEnumerator(actionsBuffer.DiscreteActions.GetEnumerator());

        m_jointsDriver.hips.SetDiscreteActios(disctreteActions);

        foreach (var joint in m_jointsDriver.joints)
        {
            joint.SetDiscreteActios(disctreteActions);
        }
        if (disctreteActions.Count != actionsBuffer.DiscreteActions.Length)
        {
            Debug.LogWarning($"Discrete Actions count does not match: {disctreteActions.Count} - getted, {actionsBuffer.DiscreteActions.Length} - buffer");
        }

        ActionReceived?.Invoke();
    }

    public override void Heuristic(in ActionBuffers actionsOut)
    {

    }

    public void OnMove(Vector3 input)
    {
        m_inputDirection = input;
    }
}
using UnityEngine;
using Unity.MLAgents;
using Unity.MLAgents.Sensors;
using Unity.MLAgents.Actuators;

public class TwoLegAgent : Agent
{
    [Header("Params")]
    [SerializeField] private float m_maxSpeed = 8f;
    [SerializeField] private Transform m_orientationPoint;
    [Header("Body")]
    [SerializeField] private MyMainBodyPart m_mainBody;
    [SerializeField] private MyJointPart m_rRoot;
    [SerializeField] private MyJointPart m_rKnee;
    [SerializeField] private MyJointPart m_rFoot;
    [SerializeField] private MyJointPart m_lRoot;
    [SerializeField] private MyJointPart m_lKnee;
    [SerializeField] private MyJointPart m_lFoot;
    [Header("Target")]
    [SerializeField] private MyTarget m_target;
    [Header("Penalties")]
    [SerializeField] private float m_fixedTimePenalty = -0.01f;
    [SerializeField] private float m_groundHitPenalty = -1;

    [Header("Joint Drive Settings")]
    [SerializeField] private float maxJointSpring;
    [SerializeField] private float jointDampen;
    [SerializeField] private float maxJointForceLimit;

    private Vector3 m_targetDirection;

    //The current target walking speed. Clamped because a value of zero will cause NaNs

    private float m_targetWalkingSpeed;

    public float TargetWalkingSpeed
    {
        get { return m_targetWalkingSpeed; }
        set { m_targetWalkingSpeed = Mathf.Clamp(value, .1f, m_maxSpeed); }
    }

    private void Start()
    {
        m_rRoot.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_rKnee.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_rFoot.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);

        m_lRoot.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_lKnee.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_lFoot.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
    }

    protected override void OnEnable()
    {
        base.OnEnable();

        m_mainBody.Grounded += () => { GroundHitPenalty(true); };

        m_rRoot.GroundHitPenalty += GroundHitPenalty;
        m_rKnee.GroundHitPenalty += GroundHitPenalty;
        m_rFoot.GroundHitPenalty += GroundHitPenalty;
        m_lRoot.GroundHitPenalty += GroundHitPenalty;
        m_lKnee.GroundHitPenalty += GroundHitPenalty;
        m_lFoot.GroundHitPenalty += GroundHitPenalty;
    }

    protected override void OnDisable()
    {
        base.OnDisable();

        m_mainBody.Grounded -= () => { GroundHitPenalty(true); };

        m_rRoot.GroundHitPenalty -= GroundHitPenalty;
        m_rKnee.GroundHitPenalty -= GroundHitPenalty;
        m_rFoot.GroundHitPenalty -= GroundHitPenalty;
        m_lRoot.GroundHitPenalty -= GroundHitPenalty;
        m_lKnee.GroundHitPenalty -= GroundHitPenalty;
        m_lFoot.GroundHitPenalty -= GroundHitPenalty;
    }

    private void FixedUpdate()
    {
        AddReward(m_fixedTimePenalty);

        Vector3 feetPos = (m_rFoot.Position + m_lFoot.Position) / 2;

        m_orientationPoint.position = new Vector3(feetPos.x, 0.5f, feetPos.z);
        m_orientationPoint.forward = (m_mainBody.Forward + m_rRoot.Forward + m_rKnee.Forward + m_rFoot.Forward + m_lRoot.Forward + m_lKnee.Forward + m_lFoot.Forward) / 7;

        var matchSpeedReward = Mathf.Clamp01(Vector3.Dot(GetAvgVelocity(), m_mainBody.Forward * TargetWalkingSpeed));

        var lookAtTargetReward = Vector3.Dot(m_orientationPoint.forward, (m_target.Position - m_orientationPoint.position).normalized);
        var bodyOrientReward = Mathf.Clamp01((Vector3.Dot(m_mainBody.Up, Vector3.up)));
        var velocityForwardsReward = Mathf.Clamp01(Vector3.Dot(m_orientationPoint.forward, GetAvgVelocity()));

        AddReward(bodyOrientReward * matchSpeedReward * lookAtTargetReward * velocityForwardsReward);
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

        sum += m_mainBody.Velocity;
        sum += m_rRoot.Velocity;
        sum += m_rKnee.Velocity;
        sum += m_rFoot.Velocity;
        sum += m_lRoot.Velocity;
        sum += m_lKnee.Velocity;
        sum += m_lFoot.Velocity;

        return sum / 7;
    }

    private void CollectObservationsJointPart(MyJointPart joint, VectorSensor sensor)
    {
        sensor.AddObservation(joint.IsGrounded);
        sensor.AddObservation(joint.Strenth);

        sensor.AddObservation(joint.Rotation);
    }

    public float GetMatchingVelocityReward(Vector3 velocityGoal, Vector3 actualVelocity)
    {
        //distance between our actual velocity and goal velocity
        var velDeltaMagnitude = Mathf.Clamp(Vector3.Distance(actualVelocity, velocityGoal), 0, TargetWalkingSpeed);

        if (velDeltaMagnitude == 0) 
        {
            return 0f;
        }

        //return the value on a declining sigmoid shaped curve that decays from 1 to 0
        //This reward will approach 1 if it matches perfectly and approach zero as it deviates
        return Mathf.Pow(1 - Mathf.Pow(velDeltaMagnitude / TargetWalkingSpeed, 2), 2);
    }

    public override void OnEpisodeBegin()
    {
        m_mainBody.ResetBody();

        m_rRoot.ResetJoint();
        m_rKnee.ResetJoint();
        m_rFoot.ResetJoint();
        m_lRoot.ResetJoint();
        m_lKnee.ResetJoint();
        m_lFoot.ResetJoint();

        m_target.SetPosition();

        //Set our goal walking speed
        TargetWalkingSpeed = Random.Range(0.1f, m_maxSpeed);
    }

    public override void CollectObservations(VectorSensor sensor)
    {
        //velocity we want to match
        var velGoal = m_mainBody.Velocity * TargetWalkingSpeed;
        //ragdoll's avg vel
        var avgVel = GetAvgVelocity();

        //current ragdoll velocity. normalized
        sensor.AddObservation(Vector3.Distance(velGoal, avgVel)); // 1

        sensor.AddObservation(m_target.Position - m_mainBody.Position); // 3

        float maxRaycastDist = 10f;
        if (Physics.Raycast(m_mainBody.Position, Vector3.down, out RaycastHit hit, maxRaycastDist))
        {
            sensor.AddObservation(hit.distance / maxRaycastDist); // 1
        }
        else
        {
            sensor.AddObservation(0);
        }

        sensor.AddObservation(m_mainBody.Rotation); // 4
        sensor.AddObservation(m_mainBody.AngularVelocity); // 3

        CollectObservationsJointPart(m_rRoot, sensor); // 6
        CollectObservationsJointPart(m_rKnee, sensor);
        CollectObservationsJointPart(m_rFoot, sensor);
        CollectObservationsJointPart(m_lRoot, sensor);
        CollectObservationsJointPart(m_lKnee, sensor);
        CollectObservationsJointPart(m_lFoot, sensor);
    }

    public override void OnActionReceived(ActionBuffers actions)
    {
        int i = -1;
        var continuousActions = actions.ContinuousActions;

        m_rRoot.SetTargetRotation(continuousActions[++i], continuousActions[++i], continuousActions[++i]);
        m_rKnee.SetTargetRotation(continuousActions[++i], 0f, 0f);
        m_rFoot.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);

        m_lRoot.SetTargetRotation(continuousActions[++i], continuousActions[++i], continuousActions[++i]);
        m_lKnee.SetTargetRotation(continuousActions[++i], 0f, 0f);
        m_lFoot.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);

        m_rRoot.SetJointStrength(continuousActions[++i]);
        m_rKnee.SetJointStrength(continuousActions[++i]);
        m_rFoot.SetJointStrength(continuousActions[++i]);
        m_lRoot.SetJointStrength(continuousActions[++i]);
        m_lKnee.SetJointStrength(continuousActions[++i]);
        m_lFoot.SetJointStrength(continuousActions[++i]);
    }

    public override void Heuristic(in ActionBuffers actionsOut)
    {
        
    }

    public void OnTouchTarget()
    {
        AddReward(1f);
    }
}

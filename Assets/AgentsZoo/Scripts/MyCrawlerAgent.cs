using Unity.MLAgents;
using Unity.MLAgents.Actuators;
using Unity.MLAgents.Sensors;
using UnityEngine;

public class MyCrawlerAgent : Agent
{
    [Header("Params")]
    [SerializeField] private float m_maxSpeed = 3f;
    [SerializeField] private Transform m_orientationPoint;

    [Header("Body")]
    [SerializeField] private MyMainBodyPart m_mainBody;
    [Header("Right Leg")]
    [SerializeField] private MyJointPart m_rLeg;
    [SerializeField] private MyJointPart m_rKnee;
    [Header("Left Leg")]
    [SerializeField] private MyJointPart m_lLeg;
    [SerializeField] private MyJointPart m_lKnee;
    [Header("Right Arm")]
    [SerializeField] private MyJointPart m_rArm;
    [SerializeField] private MyJointPart m_rElbow;
    [Header("Left Arm")]
    [SerializeField] private MyJointPart m_lArm;
    [SerializeField] private MyJointPart m_lElbow;

    [Header("Target")]
    [SerializeField] private MyTarget m_target;
    [Header("Penalties")]
    [SerializeField] private float m_fixedTimePenalty = -0.01f;
    [SerializeField] private float m_groundHitPenalty = -1;

    [Header("Joint Drive Settings")]
    [SerializeField] private float maxJointSpring;
    [SerializeField] private float jointDampen;
    [SerializeField] private float maxJointForceLimit;

    //The current target walking speed. Clamped because a value of zero will cause NaNs
    private float m_targetWalkingSpeed;

    public float TargetWalkingSpeed
    {
        get { return m_targetWalkingSpeed; }
        set { m_targetWalkingSpeed = Mathf.Clamp(value, .1f, m_maxSpeed); }
    }

    protected void Start()
    {
        m_rLeg.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_rKnee.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);

        m_lLeg.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_lKnee.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);

        m_rArm.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_rElbow.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);

        m_lArm.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_lElbow.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
    }

    protected override void OnEnable()
    {
        base.OnEnable();

        m_mainBody.Grounded += () => { GroundHitPenalty(true); };

        m_rLeg.GroundHitPenalty += GroundHitPenalty;
        m_rKnee.GroundHitPenalty += GroundHitPenalty;

        m_lLeg.GroundHitPenalty += GroundHitPenalty;
        m_lKnee.GroundHitPenalty += GroundHitPenalty;

        m_rArm.GroundHitPenalty += GroundHitPenalty;
        m_rElbow.GroundHitPenalty += GroundHitPenalty;

        m_lArm.GroundHitPenalty += GroundHitPenalty;
        m_lElbow.GroundHitPenalty += GroundHitPenalty;
    }

    protected override void OnDisable()
    {
        base.OnDisable();

        m_mainBody.Grounded -= () => { GroundHitPenalty(true); };

        m_rLeg.GroundHitPenalty -= GroundHitPenalty;
        m_rKnee.GroundHitPenalty -= GroundHitPenalty;

        m_lLeg.GroundHitPenalty -= GroundHitPenalty;
        m_lKnee.GroundHitPenalty -= GroundHitPenalty;

        m_rArm.GroundHitPenalty -= GroundHitPenalty;
        m_rElbow.GroundHitPenalty -= GroundHitPenalty;

        m_lArm.GroundHitPenalty -= GroundHitPenalty;
        m_lElbow.GroundHitPenalty -= GroundHitPenalty;
    }

    private void FixedUpdate()
    {
        AddReward(m_fixedTimePenalty);

        Vector3 feetPos = (m_rKnee.Position + m_lKnee.Position + m_rElbow.Position + m_lElbow.Position) / 4;

        m_orientationPoint.position = new Vector3(feetPos.x, 0.5f, feetPos.z);
        m_orientationPoint.forward = (m_target.Position - m_mainBody.Position).x * Vector3.right + (m_target.Position - m_mainBody.Position).z * Vector3.forward;

        // Set reward for this step according to mixture of the following elements.
        // a. Match target speed
        //This reward will approach 1 if it matches perfectly and approach zero as it deviates
        //var matchSpeedReward = GetMatchingVelocityReward(m_mainBody.Forward * TargetWalkingSpeed, GetAvgVelocity());

        var matchSpeedReward = Mathf.Clamp01(Vector3.Dot(GetAvgVelocity(), m_orientationPoint.forward * TargetWalkingSpeed));

        // b. Rotation alignment with target direction.
        //This reward will approach 1 if it faces the target direction perfectly and approach zero as it deviates
        var lookAtTargetReward = Vector3.Dot(m_orientationPoint.forward, (m_target.Position - m_orientationPoint.position).normalized);
        var bodyOrientReward = Mathf.Clamp01((Vector3.Dot(m_mainBody.Up, Vector3.up)));
        var velocityForwardsReward = Mathf.Pow(Mathf.Clamp01(Vector3.Dot(m_orientationPoint.forward, GetAvgVelocity())), 3);

        AddReward(matchSpeedReward * lookAtTargetReward * velocityForwardsReward * bodyOrientReward);
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

        sum += m_rLeg.Velocity;
        sum += m_rKnee.Velocity;

        sum += m_lLeg.Velocity;
        sum += m_lKnee.Velocity;

        sum += m_rArm.Velocity;
        sum += m_rElbow.Velocity;

        sum += m_lArm.Velocity;
        sum += m_lElbow.Velocity;

        return sum / 9;
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

        m_rLeg.ResetJoint();
        m_rKnee.ResetJoint();

        m_lLeg.ResetJoint();
        m_lKnee.ResetJoint();

        m_rArm.ResetJoint();
        m_rElbow.ResetJoint();

        m_lArm.ResetJoint();
        m_lElbow.ResetJoint();

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


        CollectObservationsJointPart(m_rLeg, sensor); // 6
        CollectObservationsJointPart(m_rKnee, sensor);

        CollectObservationsJointPart(m_lLeg, sensor);
        CollectObservationsJointPart(m_lKnee, sensor);

        CollectObservationsJointPart(m_rArm, sensor);
        CollectObservationsJointPart(m_rElbow, sensor);

        CollectObservationsJointPart(m_lArm, sensor);
        CollectObservationsJointPart(m_lElbow, sensor);
    }

    public override void OnActionReceived(ActionBuffers actions)
    {
        int i = -1;
        var continuousActions = actions.ContinuousActions;

        m_rLeg.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_rKnee.SetTargetRotation(continuousActions[++i], 0f, 0f);

        m_lLeg.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_lKnee.SetTargetRotation(continuousActions[++i], 0f, 0f);

        m_rArm.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_rElbow.SetTargetRotation(continuousActions[++i], 0f, 0f);

        m_lArm.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_lElbow.SetTargetRotation(continuousActions[++i], 0f, 0f);

        m_rLeg.SetJointStrength(continuousActions[++i]);
        m_rKnee.SetJointStrength(continuousActions[++i]);

        m_lLeg.SetJointStrength(continuousActions[++i]);
        m_lKnee.SetJointStrength(continuousActions[++i]);

        m_rArm.SetJointStrength(continuousActions[++i]);
        m_rElbow.SetJointStrength(continuousActions[++i]);

        m_lArm.SetJointStrength(continuousActions[++i]);
        m_lElbow.SetJointStrength(continuousActions[++i]);
    }

    public override void Heuristic(in ActionBuffers actionsOut)
    {

    }
}

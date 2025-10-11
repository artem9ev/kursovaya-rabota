using Unity.MLAgents;
using Unity.MLAgents.Actuators;
using Unity.MLAgents.Sensors;
using UnityEngine;

public class MyHumanoid : Agent
{
    [Header("Params")]
    [SerializeField] private float m_maxSpeed = 8f;
    [SerializeField] private Transform m_orientationPoint;

    [Header("Body")]
    [SerializeField] private MyMainBodyPart m_mainBody;
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

    [Header("Target")]
    [SerializeField] private MyTarget m_target;
    [Header("Penalties")]
    [SerializeField] private float m_fixedTimePenalty = -0.01f;
    [SerializeField] private float m_groundHitPenalty = -1;
    [Header("Rewards")]
    [SerializeField] private float m_lookAtTargetReward = 2f;
    [SerializeField] private float m_bodyOrientReward = 0.03f;

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
        m_spine.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_chest.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_head.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);

        m_rLeg.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_rKnee.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_rFoot.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);

        m_lLeg.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_lKnee.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_lFoot.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);

        m_rArm.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_rElbow.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);

        m_lArm.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_lElbow.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
    }

    protected override void OnEnable()
    {
        base.OnEnable();

        m_mainBody.Grounded += () => { GroundHitPenalty(true); };

        m_spine.GroundHitPenalty += GroundHitPenalty;
        m_chest.GroundHitPenalty += GroundHitPenalty;
        m_head.GroundHitPenalty += GroundHitPenalty;

        m_rLeg.GroundHitPenalty += GroundHitPenalty;
        m_rKnee.GroundHitPenalty += GroundHitPenalty;
        m_rFoot.GroundHitPenalty += GroundHitPenalty;

        m_lLeg.GroundHitPenalty += GroundHitPenalty;
        m_lKnee.GroundHitPenalty += GroundHitPenalty;
        m_lFoot.GroundHitPenalty += GroundHitPenalty;

        m_rArm.GroundHitPenalty += GroundHitPenalty;
        m_rElbow.GroundHitPenalty += GroundHitPenalty;

        m_lArm.GroundHitPenalty += GroundHitPenalty;
        m_lElbow.GroundHitPenalty += GroundHitPenalty;
    }

    protected override void OnDisable()
    {
        base.OnDisable();

        m_mainBody.Grounded -= () => { GroundHitPenalty(true); };

        m_spine.GroundHitPenalty -= GroundHitPenalty;
        m_chest.GroundHitPenalty -= GroundHitPenalty;
        m_head.GroundHitPenalty -= GroundHitPenalty;

        m_rLeg.GroundHitPenalty -= GroundHitPenalty;
        m_rKnee.GroundHitPenalty -= GroundHitPenalty;
        m_rFoot.GroundHitPenalty -= GroundHitPenalty;

        m_lLeg.GroundHitPenalty -= GroundHitPenalty;
        m_lKnee.GroundHitPenalty -= GroundHitPenalty;
        m_lFoot.GroundHitPenalty -= GroundHitPenalty;

        m_rArm.GroundHitPenalty -= GroundHitPenalty;
        m_rElbow.GroundHitPenalty -= GroundHitPenalty;

        m_lArm.GroundHitPenalty -= GroundHitPenalty;
        m_lElbow.GroundHitPenalty -= GroundHitPenalty;
    }

    private void FixedUpdate()
    {
        AddReward(m_fixedTimePenalty);

        Vector3 feetPos = (m_rFoot.Position + m_lFoot.Position) / 2;

        m_orientationPoint.position = new Vector3(feetPos.x, 0.5f, feetPos.z);
        m_orientationPoint.forward = (m_target.Position - m_orientationPoint.position).normalized;

        var matchSpeedReward = Mathf.Clamp(GetAvgVelocity().magnitude, 0, TargetWalkingSpeed) / TargetWalkingSpeed;

        if (float.IsNaN(matchSpeedReward))
        {
            matchSpeedReward = 0;
        }
        var bodyOrientReward = Mathf.Clamp01((Vector3.Dot(m_spine.up, Vector3.up)));
        var chestOrientReward = Mathf.Clamp01((Vector3.Dot(m_chest.up, Vector3.up)));

        var lookAtTargetReward = (Vector3.Dot(m_orientationPoint.forward, m_mainBody.Forward) + 1) / 2;
        var velocityForwardsReward = (Vector3.Dot(m_mainBody.Forward, GetAvgVelocity()) + 1) / 2;

        AddReward(lookAtTargetReward * m_lookAtTargetReward * matchSpeedReward * velocityForwardsReward * bodyOrientReward);
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

        sum += m_spine.Velocity;
        sum += m_chest.Velocity;
        sum += m_head.Velocity;

        sum += m_rLeg.Velocity;
        sum += m_rKnee.Velocity;
        sum += m_rFoot.Velocity;

        sum += m_lLeg.Velocity;
        sum += m_lKnee.Velocity;
        sum += m_lFoot.Velocity;

        sum += m_rArm.Velocity;
        sum += m_rElbow.Velocity;

        sum += m_lArm.Velocity;
        sum += m_lElbow.Velocity;

        return sum / 14;
    }

    private void CollectObservationsJointPart(MyJointPart joint, VectorSensor sensor)
    {
        sensor.AddObservation(joint.IsGrounded);

        sensor.AddObservation(joint.Strenth / joint.MaxStrenth);
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

        m_spine.ResetJoint();
        m_chest.ResetJoint();
        m_head.ResetJoint();

        m_rLeg.ResetJoint();
        m_rKnee.ResetJoint();
        m_rFoot.ResetJoint();

        m_lLeg.ResetJoint();
        m_lKnee.ResetJoint();
        m_lFoot.ResetJoint();

        m_rArm.ResetJoint();
        m_rElbow.ResetJoint();

        m_lArm.ResetJoint();
        m_lElbow.ResetJoint();

        //Set our goal walking speed
        TargetWalkingSpeed = Random.Range(0.1f, m_maxSpeed);
    }

    public override void CollectObservations(VectorSensor sensor)
    {
        //velocity we want to match
        var velGoal = m_orientationPoint.forward * TargetWalkingSpeed;
        //ragdoll's avg vel
        var avgVel = GetAvgVelocity();

        //current ragdoll velocity. normalized
        sensor.AddObservation(Vector3.Distance(velGoal, avgVel)); // 1

        sensor.AddObservation(m_orientationPoint.forward); // 3
        sensor.AddObservation(m_mainBody.Forward); // 3

        CollectObservationsJointPart(m_spine, sensor);
        CollectObservationsJointPart(m_chest, sensor);
        CollectObservationsJointPart(m_head, sensor);

        CollectObservationsJointPart(m_rLeg, sensor); // 6
        CollectObservationsJointPart(m_rKnee, sensor);
        CollectObservationsJointPart(m_rFoot, sensor);

        CollectObservationsJointPart(m_lLeg, sensor);
        CollectObservationsJointPart(m_lKnee, sensor);
        CollectObservationsJointPart(m_lFoot, sensor);

        CollectObservationsJointPart(m_rArm, sensor);
        CollectObservationsJointPart(m_rElbow, sensor);

        CollectObservationsJointPart(m_lArm, sensor);
        CollectObservationsJointPart(m_lElbow, sensor);
    }

    public override void OnActionReceived(ActionBuffers actions)
    {
        int i = -1;
        var continuousActions = actions.ContinuousActions;

        m_spine.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_chest.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_head.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f); // 6

        m_rLeg.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_rKnee.SetTargetRotation(continuousActions[++i], 0f, 0f);
        m_rFoot.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f); // 5

        m_lLeg.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f); // 5
        m_lKnee.SetTargetRotation(continuousActions[++i], 0f, 0f);
        m_lFoot.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);

        m_rArm.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f); // 3
        m_rElbow.SetTargetRotation(continuousActions[++i], 0f, 0f);

        m_lArm.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f); // 3
        m_lElbow.SetTargetRotation(continuousActions[++i], 0f, 0f);

        m_spine.SetJointStrength(continuousActions[++i]); // 13
        m_chest.SetJointStrength(continuousActions[++i]);
        m_head.SetJointStrength(continuousActions[++i]);

        m_rLeg.SetJointStrength(continuousActions[++i]);
        m_rKnee.SetJointStrength(continuousActions[++i]);
        m_rFoot.SetJointStrength(continuousActions[++i]);

        m_lLeg.SetJointStrength(continuousActions[++i]);
        m_lKnee.SetJointStrength(continuousActions[++i]);
        m_lFoot.SetJointStrength(continuousActions[++i]);

        m_rArm.SetJointStrength(continuousActions[++i]);
        m_rElbow.SetJointStrength(continuousActions[++i]);

        m_lArm.SetJointStrength(continuousActions[++i]);
        m_lElbow.SetJointStrength(continuousActions[++i]);
    }

    public override void Heuristic(in ActionBuffers actionsOut)
    {

    }

    public void OnTouchTarget()
    {
        AddReward(1f);
    }
}
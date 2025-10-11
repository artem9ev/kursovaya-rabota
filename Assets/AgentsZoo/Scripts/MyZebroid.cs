using UnityEngine;
using Unity.MLAgents;
using Unity.MLAgents.Sensors;
using Unity.MLAgents.Actuators;

public class MyZebroid : Agent
{
    [Header("Params")]
    [SerializeField] private float m_maxSpeed = 8f;
    [SerializeField] private Transform m_orientationPoint;
    [SerializeField] private bool m_isInputControlled;

    [Header("Body")]
    [SerializeField] private MyMainBodyPart m_mainBody;
    [SerializeField] private MyJointPart m_palvis;
    [SerializeField] private MyJointPart m_chest;
    [SerializeField] private MyJointPart m_neck;
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
    [SerializeField] private MyJointPart m_rHand;
    [Header("Left Arm")]
    [SerializeField] private MyJointPart m_lArm;
    [SerializeField] private MyJointPart m_lElbow;
    [SerializeField] private MyJointPart m_lHand;
    [Header("Tail")]
    [SerializeField] private MyJointPart m_Tail0;
    [SerializeField] private MyJointPart m_Tail1;
    [SerializeField] private MyJointPart m_Tail2;

    [Header("Target")]
    [SerializeField] private MyTarget m_target;
    [Header("Penalties")]
    [SerializeField] private float m_fixedTimePenalty = -0.01f;
    [SerializeField] private float m_groundHitPenalty = -1;
    [Header("Rewards")]
    [SerializeField] private float m_limbSyncReward = 0.05f;
    [SerializeField] private float m_lookAtTargetReward = 2f;

    [Header("Joint Drive Settings")]
    [SerializeField] private float maxJointSpring;
    [SerializeField] private float jointDampen;
    [SerializeField] private float maxJointForceLimit;

    //The current target walking speed. Clamped because a value of zero will cause NaNs
    private float m_targetWalkingSpeed;

    private Vector3 m_inputDirection;

    private Vector3 MoveDirection
    {
        get
        {
            if (!m_isInputControlled)
            {
                return (m_target.Position - m_orientationPoint.position).normalized;
            }
            return m_inputDirection;
        }
    }

    public float TargetWalkingSpeed
    {
        get { return m_targetWalkingSpeed; }
        set { m_targetWalkingSpeed = Mathf.Clamp(value, .1f, m_maxSpeed); }
    }

    protected void Start()
    {
        m_palvis.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_chest.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_neck.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);

        m_rLeg.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_rKnee.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_rFoot.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);

        m_lLeg.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_lKnee.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_lFoot.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);

        m_rArm.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_rElbow.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_rHand.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);

        m_lArm.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_lElbow.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_lHand.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);

        m_Tail0.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_Tail1.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_Tail2.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
    }

    protected override void OnEnable()
    {
        base.OnEnable();

        m_mainBody.Grounded += () => { GroundHitPenalty(true); };

        m_palvis.GroundHitPenalty += GroundHitPenalty;
        m_chest.GroundHitPenalty += GroundHitPenalty;
        m_neck.GroundHitPenalty += GroundHitPenalty;

        m_rLeg.GroundHitPenalty += GroundHitPenalty;
        m_rKnee.GroundHitPenalty += GroundHitPenalty;
        m_rFoot.GroundHitPenalty += GroundHitPenalty;

        m_lLeg.GroundHitPenalty += GroundHitPenalty;
        m_lKnee.GroundHitPenalty += GroundHitPenalty;
        m_lFoot.GroundHitPenalty += GroundHitPenalty;

        m_rArm.GroundHitPenalty += GroundHitPenalty;
        m_rElbow.GroundHitPenalty += GroundHitPenalty;
        m_rHand.GroundHitPenalty += GroundHitPenalty;

        m_lArm.GroundHitPenalty += GroundHitPenalty;
        m_lElbow.GroundHitPenalty += GroundHitPenalty;
        m_lHand.GroundHitPenalty += GroundHitPenalty;

        m_Tail0.GroundHitPenalty += GroundHitPenalty;
        m_Tail1.GroundHitPenalty += GroundHitPenalty;
        m_Tail2.GroundHitPenalty += GroundHitPenalty;
    }

    protected override void OnDisable()
    {
        base.OnDisable();

        m_mainBody.Grounded -= () => { GroundHitPenalty(true); };

        m_palvis.GroundHitPenalty -= GroundHitPenalty;
        m_chest.GroundHitPenalty -= GroundHitPenalty;
        m_neck.GroundHitPenalty -= GroundHitPenalty;

        m_rLeg.GroundHitPenalty -= GroundHitPenalty;
        m_rKnee.GroundHitPenalty -= GroundHitPenalty;
        m_rFoot.GroundHitPenalty -= GroundHitPenalty;

        m_lLeg.GroundHitPenalty -= GroundHitPenalty;
        m_lKnee.GroundHitPenalty -= GroundHitPenalty;
        m_lFoot.GroundHitPenalty -= GroundHitPenalty;

        m_rArm.GroundHitPenalty -= GroundHitPenalty;
        m_rElbow.GroundHitPenalty -= GroundHitPenalty;
        m_rHand.GroundHitPenalty -= GroundHitPenalty;

        m_lArm.GroundHitPenalty -= GroundHitPenalty;
        m_lElbow.GroundHitPenalty -= GroundHitPenalty;
        m_lHand.GroundHitPenalty -= GroundHitPenalty;

        m_Tail0.GroundHitPenalty -= GroundHitPenalty;
        m_Tail1.GroundHitPenalty -= GroundHitPenalty;
        m_Tail2.GroundHitPenalty -= GroundHitPenalty;
    }

    private void FixedUpdate()
    {
        AddReward(m_fixedTimePenalty);

        Vector3 feetPos = (m_rHand.Position + m_lHand.Position + m_rFoot.Position + m_lFoot.Position) / 4;

        m_orientationPoint.position = new Vector3(feetPos.x, 0.5f, feetPos.z);
        m_orientationPoint.forward = MoveDirection;

        // Set reward for this step according to mixture of the following elements.
        // a. Match target speed
        //This reward will approach 1 if it matches perfectly and approach zero as it deviates
        //var matchSpeedReward = GetMatchingVelocityReward(m_mainBody.Forward * TargetWalkingSpeed, GetAvgVelocity());

        var matchSpeedReward = Mathf.Clamp(GetAvgVelocity().magnitude, 0, TargetWalkingSpeed) / TargetWalkingSpeed;

        if (float.IsNaN(matchSpeedReward))
        {
            matchSpeedReward = 0;
        }

        float limbsSyncReward1 = (Vector3.Dot(m_rHand.up, m_lFoot.up) + 1) / 2;
        float limbsSyncReward2 = (Vector3.Dot(m_lHand.up, m_rFoot.up) + 1) / 2;

        float limbsSyncRevard = limbsSyncReward1 * limbsSyncReward2 * m_limbSyncReward;

        var lookAtTargetReward = (Vector3.Dot(MoveDirection, m_mainBody.Forward) + 1) / 2;
        var velocityForwardsReward = (Vector3.Dot(m_mainBody.Forward, GetAvgVelocity()) + 1) / 2;

        AddReward(lookAtTargetReward * m_lookAtTargetReward * matchSpeedReward * velocityForwardsReward);
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

        sum += m_palvis.Velocity;
        sum += m_chest.Velocity;
        sum += m_neck.Velocity;

        sum += m_rLeg.Velocity;
        sum += m_rKnee.Velocity;
        sum += m_rFoot.Velocity;

        sum += m_lLeg.Velocity;
        sum += m_lKnee.Velocity;
        sum += m_lFoot.Velocity;

        sum += m_rArm.Velocity;
        sum += m_rElbow.Velocity;
        sum += m_rHand.Velocity;

        sum += m_lArm.Velocity;
        sum += m_lElbow.Velocity;
        sum += m_lHand.Velocity;

        sum += m_Tail0.Velocity;
        sum += m_Tail1.Velocity;
        sum += m_Tail2.Velocity;

        return sum / 19;
    }

    private void CollectObservationsJointPart(MyJointPart joint, VectorSensor sensor)
    {
        sensor.AddObservation(joint.IsGrounded);
        //sensor.AddObservation(joint.Strenth);

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

        m_palvis.ResetJoint();
        m_chest.ResetJoint();
        m_neck.ResetJoint();

        m_rLeg.ResetJoint();
        m_rKnee.ResetJoint();
        m_rFoot.ResetJoint();

        m_lLeg.ResetJoint();
        m_lKnee.ResetJoint();
        m_lFoot.ResetJoint();

        m_rArm.ResetJoint();
        m_rElbow.ResetJoint();
        m_rHand.ResetJoint();

        m_lArm.ResetJoint();
        m_lElbow.ResetJoint();
        m_lHand.ResetJoint();

        m_Tail0.ResetJoint();
        m_Tail1.ResetJoint();
        m_Tail2.ResetJoint();

        //Set our goal walking speed
        TargetWalkingSpeed = Random.Range(0.1f, m_maxSpeed);
    }

    public override void CollectObservations(VectorSensor sensor)
    {
        //velocity we want to match
        var velGoal = MoveDirection * TargetWalkingSpeed;
        //ragdoll's avg vel
        var avgVel = GetAvgVelocity();

        //current ragdoll velocity. normalized
        sensor.AddObservation(Vector3.Distance(velGoal, avgVel)); // 1

        sensor.AddObservation(MoveDirection); // 3
        sensor.AddObservation(m_mainBody.Forward); // 3

        float maxRaycastDist = 10f;
        if (Physics.Raycast(m_mainBody.Position, Vector3.down, out RaycastHit hit, maxRaycastDist, LayerMask.GetMask("default")))
        {
            sensor.AddObservation(hit.distance / maxRaycastDist); // 1
        }
        else
        {
            sensor.AddObservation(0);
        }

        CollectObservationsJointPart(m_palvis, sensor);
        CollectObservationsJointPart(m_chest, sensor);
        CollectObservationsJointPart(m_neck, sensor);

        CollectObservationsJointPart(m_rLeg, sensor); // 6
        CollectObservationsJointPart(m_rKnee, sensor);
        CollectObservationsJointPart(m_rFoot, sensor);

        CollectObservationsJointPart(m_lLeg, sensor);
        CollectObservationsJointPart(m_lKnee, sensor);
        CollectObservationsJointPart(m_lFoot, sensor);

        CollectObservationsJointPart(m_rArm, sensor);
        CollectObservationsJointPart(m_rElbow, sensor);
        CollectObservationsJointPart(m_rHand, sensor);

        CollectObservationsJointPart(m_lArm, sensor);
        CollectObservationsJointPart(m_lElbow, sensor);
        CollectObservationsJointPart(m_lHand, sensor);

        CollectObservationsJointPart(m_Tail0, sensor);
        CollectObservationsJointPart(m_Tail1, sensor);
        CollectObservationsJointPart(m_Tail2, sensor);
    }

    public override void OnActionReceived(ActionBuffers actions)
    {
        int i = -1;
        var continuousActions = actions.ContinuousActions;

        m_palvis.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_chest.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_neck.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f); // 6

        m_rLeg.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_rKnee.SetTargetRotation(continuousActions[++i], 0f, 0f);
        m_rFoot.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f); // 5

        m_lLeg.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_lKnee.SetTargetRotation(continuousActions[++i], 0f, 0f);
        m_lFoot.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);

        m_rArm.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_rElbow.SetTargetRotation(continuousActions[++i], 0f, 0f);
        m_rHand.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);

        m_lArm.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_lElbow.SetTargetRotation(continuousActions[++i], 0f, 0f);
        m_lHand.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);

        m_Tail0.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_Tail1.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f);
        m_Tail2.SetTargetRotation(continuousActions[++i], continuousActions[++i], 0f); //  6

        m_palvis.SetJointStrength(continuousActions[++i]); // 15
        m_chest.SetJointStrength(continuousActions[++i]);
        m_neck.SetJointStrength(continuousActions[++i]);

        m_rLeg.SetJointStrength(continuousActions[++i]);
        m_rKnee.SetJointStrength(continuousActions[++i]);
        m_rFoot.SetJointStrength(continuousActions[++i]);

        m_lLeg.SetJointStrength(continuousActions[++i]);
        m_lKnee.SetJointStrength(continuousActions[++i]);
        m_lFoot.SetJointStrength(continuousActions[++i]);

        m_rArm.SetJointStrength(continuousActions[++i]);
        m_rElbow.SetJointStrength(continuousActions[++i]);
        m_rHand.SetJointStrength(continuousActions[++i]);

        m_lArm.SetJointStrength(continuousActions[++i]);
        m_lElbow.SetJointStrength(continuousActions[++i]);
        m_lHand.SetJointStrength(continuousActions[++i]);

        m_Tail0.SetJointStrength(continuousActions[++i]);
        m_Tail1.SetJointStrength(continuousActions[++i]);
        m_Tail2.SetJointStrength(continuousActions[++i]);
    }

    public override void Heuristic(in ActionBuffers actionsOut)
    {
        
    }

    public void OnTouchTarget()
    {
        AddReward(1f);
    }

    public void OnMove(Vector2 input)
    {
        m_inputDirection = input.x * Vector3.right + input.y * Vector3.forward;
    }
}

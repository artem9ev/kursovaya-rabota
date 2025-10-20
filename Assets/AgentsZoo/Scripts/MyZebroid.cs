using UnityEngine;
using Unity.MLAgents;
using Unity.MLAgents.Sensors;
using Unity.MLAgents.Actuators;

public class MyZebroid : Agent
{
    [Header("Params")]
    [SerializeField] private float m_maxSpeed = 8f;
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
                Vector3 feetPos = (m_rHand.position + m_lHand.position + m_rFoot.position + m_lFoot.position) / 4;

                return (m_target.Position - new Vector3(feetPos.x, 0.5f, feetPos.z)).normalized;
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

        m_mainBody.GroundHitPenalty += GroundHitPenalty;

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

        m_mainBody.GroundHitPenalty -= GroundHitPenalty;

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

        
        //m_orientationPoint.forward = MoveDirection;

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

        var lookAtTargetReward = (Vector3.Dot(MoveDirection, m_mainBody.flatForward) + 1) / 2;
        var velocityForwardsReward = (Vector3.Dot(m_mainBody.flatForward, GetAvgVelocity()) + 1) / 2;

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

        sum += m_mainBody.velocity;

        sum += m_palvis.velocity;
        sum += m_chest.velocity;
        sum += m_neck.velocity;

        sum += m_rLeg.velocity;
        sum += m_rKnee.velocity;
        sum += m_rFoot.velocity;

        sum += m_lLeg.velocity;
        sum += m_lKnee.velocity;
        sum += m_lFoot.velocity;

        sum += m_rArm.velocity;
        sum += m_rElbow.velocity;
        sum += m_rHand.velocity;

        sum += m_lArm.velocity;
        sum += m_lElbow.velocity;
        sum += m_lHand.velocity;

        sum += m_Tail0.velocity;
        sum += m_Tail1.velocity;
        sum += m_Tail2.velocity;

        return sum / 19;
    }

    private void CollectObservationsJointPart(MyJointPart joint, VectorSensor sensor)
    {
        sensor.AddObservation(joint.isGrounded);
        sensor.AddObservation(joint.strenth / joint.maxStrenth);
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

        m_palvis.ResetBody();
        m_chest.ResetBody();
        m_neck.ResetBody();

        m_rLeg.ResetBody();
        m_rKnee.ResetBody();
        m_rFoot.ResetBody();

        m_lLeg.ResetBody();
        m_lKnee.ResetBody();
        m_lFoot.ResetBody();

        m_rArm.ResetBody();
        m_rElbow.ResetBody();
        m_rHand.ResetBody();

        m_lArm.ResetBody();
        m_lElbow.ResetBody();
        m_lHand.ResetBody();

        m_Tail0.ResetBody();
        m_Tail1.ResetBody();
        m_Tail2.ResetBody();

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
        sensor.AddObservation(m_mainBody.flatForward); // 3

        float maxRaycastDist = 10f;
        if (Physics.Raycast(m_mainBody.position, Vector3.down, out RaycastHit hit, maxRaycastDist, LayerMask.GetMask("default")))
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

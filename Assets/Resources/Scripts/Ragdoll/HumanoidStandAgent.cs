using Unity.MLAgents;
using Unity.MLAgents.Actuators;
using Unity.MLAgents.Sensors;
using UnityEngine;

public class HumanoidStandAgent : Agent
{
    [SerializeField] private HumanoidJointsDriver m_jointsDriver;
    [Header("Params")]
    [SerializeField][Range(0f, 45f)] private float m_spineUpDeflectionAngle = 35f;
    [SerializeField][Range(0f, 45f)] private float m_spineForwardDeflectionAngle = 15f;

    [Header("Penalties")]
    [SerializeField, Min(0f)] private float m_energyPenalty = 1f;
    [Header("Rewards")]
    [SerializeField, Min(0f)] private float m_lookAtTargetReward = 1f;
    [SerializeField, Min(0f)] private float m_bonesOrientReward = 1f;
    [SerializeField, Min(0f)] private float m_heightReward = 1f;
    [SerializeField, Min(0f)] private float m_flatPositionReward = 1f;

    private Vector3 m_startFlatPos;

    public Vector3 velocity => m_jointsDriver.velocity;
    public Vector3 flatVelocity => new Vector3(m_jointsDriver.velocity.x, 0, m_jointsDriver.velocity.z);
    public Vector3 hipsFlatPos => new Vector3(m_jointsDriver.hips.position.x, 0, m_jointsDriver.hips.position.z);

    private void FixedUpdate()
    {
        Color rayColorForward = Color.red;
        Color rayColorUp = Color.red;

        //m_jointsDriver.orientForward = m_inputDirection != Vector3.zero ? m_inputDirection : m_jointsDriver.orientForward;
        if (Vector3.Angle(m_jointsDriver.spineForward, m_jointsDriver.orientForward) <= m_spineForwardDeflectionAngle)
        {
            rayColorForward = Color.green;
        }

        if (Vector3.Angle(m_jointsDriver.spineUp, Vector3.up) <= m_spineUpDeflectionAngle)
        {
            rayColorUp = Color.green;
        }

        float dist = Vector3.Distance(m_startFlatPos, hipsFlatPos);

        if (dist > 4f)
        {
            SetReward(-1f);
            EndEpisode();
        }

        //print(flatPositionReward);
        //print($"\t{lookAtTargetReward:f4} | \t{matchSpeedReward:f4} | \t{headHeightReward:f4}");

        Debug.DrawRay(m_jointsDriver.hips.position, m_jointsDriver.spineUp * 1.5f, rayColorUp);
        Debug.DrawRay(m_jointsDriver.hips.position, m_jointsDriver.spineForward * 1.5f, rayColorForward);
        Debug.DrawRay(m_startFlatPos, Vector3.up * 2f, Color.blue);
    }

    private void GetReward()
    {
        float matchSpeedCoef = GetMatchingVelocityReward();
        float lookAtTargetCoef = Mathf.Clamp01(Vector3.Dot(m_jointsDriver.orientForward, m_jointsDriver.headForward));
        float headHeightCoef = (m_jointsDriver.headPosition.y - m_jointsDriver.hips.position.y);
        float hipsHeightCoef = (m_jointsDriver.hips.position.y - m_jointsDriver.feetPos.y);

        float dist = Vector3.Distance(m_startFlatPos, hipsFlatPos);
        float flatPositionCoef = 2 - 2 / (1 + Mathf.Exp(-dist));

        if (headHeightCoef < 0) headHeightCoef = 0;
        if (hipsHeightCoef < 0) hipsHeightCoef = 0f;

        float lookAtTargetReward = lookAtTargetCoef * m_lookAtTargetReward;
        float heightReward = headHeightCoef * hipsHeightCoef * m_heightReward;
        float flatPositionReward = flatPositionCoef * m_flatPositionReward;
        float boneOrientReward = Mathf.Clamp01(Vector3.Dot(m_jointsDriver.feetUp, Vector3.up));

        AddReward((lookAtTargetReward + flatPositionReward) * heightReward * boneOrientReward);
    }

    public float GetMatchingVelocityReward()
    {
        float velDeltaMagnitude = m_jointsDriver.GetRelativeDirection(flatVelocity).magnitude;

        if (float.IsNaN(velDeltaMagnitude))
        {
            return 0;
        }

        float clampHighBorder = 1f;
        float clampedDelta = Mathf.Clamp01(Mathf.Clamp(velDeltaMagnitude, 0, clampHighBorder) / clampHighBorder);

        return Mathf.Pow(1 - Mathf.Pow(clampedDelta, 2), 2);
    }

    public override void OnEpisodeBegin()
    {
        m_jointsDriver.RandomResetRagdoll();

        m_startFlatPos = hipsFlatPos;
        m_jointsDriver.orientForward = m_jointsDriver.hips.flatForward;
    }

    private void CollectObservationsJointPart(BodyJoint joint, VectorSensor sensor)
    {
        //sensor.AddObservation(joint.isGrounded); // +1
        sensor.AddObservation(joint.maxStrenth > 0 ? joint.strenth / joint.maxStrenth : 0f); // +1
    }

    public override void CollectObservations(VectorSensor sensor)
    {
        var avgVel = m_jointsDriver.velocity;

        sensor.AddObservation(m_jointsDriver.GetRelativeDirection(avgVel));

        sensor.AddObservation(m_startFlatPos);
        sensor.AddObservation(hipsFlatPos);
        sensor.AddObservation(Vector3.Distance(m_startFlatPos, hipsFlatPos));

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

        GetReward();
    }

    public override void Heuristic(in ActionBuffers actionsOut)
    {

    }
}

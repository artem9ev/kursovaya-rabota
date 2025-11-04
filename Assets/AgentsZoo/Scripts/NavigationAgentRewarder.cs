using Unity.MLAgents.Sensors;
using UnityEngine;

[RequireComponent(typeof(NavigationAgent))]
public class NavigationAgentRewarder : MonoBehaviour
{
    [Header("A")]
    [SerializeField] private RayPerceptionSensorComponent3D m_rayPerception;

    [Header("Penalties settings")]
    [SerializeField, Min(0)] private float m_wallAvoidRange = 0.2f;
    [SerializeField] private float m_finishEpisodeReward = -10f;
    [Header("Penalties values")]
    [SerializeField, Min(0)] private float m_fallOutPenalty = 5f;
    [SerializeField, Min(0)] private float m_wallHitPenalty = 0.05f;
    [SerializeField, Min(0)] private float m_timePenalty = 0.0005f;

    [Header("Rewards values")]
    [SerializeField, Min(0)] private float m_targetHitReward = 1f;
    [SerializeField, Min(0)] private float m_lookAtTargetReward = 0.005f;
    [SerializeField, Min(0)] private float m_moveToTargetReward = 0.005f;

    private NavigationAgent m_agent;
    private Transform m_transform;
    private CharacterMovement m_movement;

    private Transform m_detectedTarget;
    private float m_rangeToDetectedTarget;

    private void Awake()
    {
        m_transform = transform;
        m_agent = GetComponent<NavigationAgent>();
        m_movement = GetComponent<CharacterMovement>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("target"))
        {
            m_agent.AddReward(m_targetHitReward);
        }
    }

    private void OnControllerColliderHit(ControllerColliderHit hit)
    {
        if (hit.normal.y < Mathf.Sin(m_movement.maxMoveAngle * Mathf.Deg2Rad))
        {
            m_agent.AddReward(-m_wallHitPenalty);
        }
    }

    private void FixedUpdate()
    {
        if (m_detectedTarget != null && (m_transform.position - m_detectedTarget.position).magnitude < m_rangeToDetectedTarget)
        {
            m_agent.AddReward(m_moveToTargetReward);
        }

        RaycastHit hit;
        Vector3 rayPos = m_transform.position + m_movement.height / 2 * Vector3.up;

        for (int i = 0; i < 8; i++)
        {
            if (ShpereCastRayChecker(rayPos, Quaternion.Euler(0, i * 45, 0) * m_transform.forward, out hit, m_movement.radius, m_wallAvoidRange, "layout"))
            {
                m_agent.AddReward(-m_wallHitPenalty * hit.distance / m_wallAvoidRange);
            }
        }

        if (ShpereCastRayChecker(m_rayPerception.transform.position, m_rayPerception.transform.forward, out hit, m_rayPerception.SphereCastRadius, m_rayPerception.RayLength, "target"))
        {
            m_agent.AddReward(m_lookAtTargetReward * hit.distance / m_rayPerception.RayLength);

            m_detectedTarget = hit.transform;
            m_rangeToDetectedTarget = (m_transform.position - m_detectedTarget.position).magnitude;
        }

        m_agent.AddReward(-m_timePenalty);

        if (!Physics.SphereCast(m_transform.position + m_transform.up * m_movement.radius * 1.5f, m_movement.radius, Vector3.down * 20, out hit, 20))
        {
            m_agent.AddReward(-m_fallOutPenalty);
            m_agent.EndEpisode();
        }

        if (m_agent.GetCumulativeReward() < m_finishEpisodeReward)
        {
            m_agent.EndEpisode();
        }
    }

    private bool ShpereCastRayChecker(Vector3 pos, Vector3 dir, out RaycastHit hit, float radius, float range, string tag)
    {
        return Physics.SphereCast(pos, radius, dir, out hit, range) && hit.transform.CompareTag("layout");
    }
}

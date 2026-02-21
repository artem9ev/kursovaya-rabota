using System.Collections;
using Unity.MLAgents;
using UnityEngine;
using UnityEngine.Events;

public class HumanoidWalkAgentTrainer : MonoBehaviour
{
    [SerializeField] private UnityEvent<Vector2> m_onInput;
    [SerializeField] private DirectionalTarget m_target;
    [SerializeField] private HumanoidJointsDriver m_jointsDriver;
    [SerializeField] private HumanoidWalkAgent m_humanoid;

    [Header("Leg trainers")]
    [SerializeField] private float m_stepLength = 0.4f;
    [SerializeField] private Transform m_legTrainer;

    [SerializeField][Min(0f)] private float m_stayMinTime = 3f;
    [SerializeField] private float m_stayMaxTime = 8f;

    bool m_isStaing = false;

    private BodyLimb m_anchorLeg;
    private BodyLimb m_steppingLeg;
    private bool m_isLookingAtTargetDir = false;
    private bool m_isLeftLegAnchor = false;

    private float m_oldLegPosZ;

    private void OnValidate()
    {
        if (m_stayMaxTime < m_stayMinTime)
        {
            if (m_stayMaxTime < 0)
            {
                m_stayMaxTime = 0;
            }

            m_stayMinTime = m_stayMaxTime;
        }
    }

    private void OnEnable()
    {
        m_isStaing = false;

        m_humanoid.ActionReceived += OnHumanoidAction;
    }

    private void OnDisable()
    {
        m_humanoid.ActionReceived -= OnHumanoidAction;
    }

    private void OnDrawGizmos()
    {
        if (m_isLookingAtTargetDir && m_humanoid.isSpinePostureCorrect)
        {
            Gizmos.color = Color.cyan;
            Gizmos.DrawWireSphere(m_legTrainer.position, 0.2f);
            Gizmos.DrawLine(m_legTrainer.position, m_anchorLeg.position);
        }
    }

    private void FixedUpdate()
    {
        if (m_isStaing)
        {
            m_onInput?.Invoke(Vector2.zero);

            return;
        }

        Vector3 agentPos = m_jointsDriver.position;
        agentPos.y = 0.5f;

        Vector3 direction = (m_target.Position - agentPos).normalized;

        Vector2 input = new Vector2(direction.x, direction.z);

        m_onInput?.Invoke(input);
    }

    private void OnHumanoidAction()
    {
        if (!m_isLookingAtTargetDir && m_humanoid.isLookingAtTargetDirection)
        {
            float leftLegPosZ = m_jointsDriver.spine.transform.InverseTransformPoint(m_jointsDriver.leftFoot.position).z;
            float rightLegPosZ = m_jointsDriver.spine.transform.InverseTransformPoint(m_jointsDriver.rightFoot.position).z;

            m_isLeftLegAnchor = leftLegPosZ >= rightLegPosZ;

            m_isLookingAtTargetDir = true;

            if (m_isLeftLegAnchor)
            {
                SetAnchor(m_jointsDriver.leftFoot, m_jointsDriver.rightFoot);
            }
            else
            {
                SetAnchor(m_jointsDriver.rightFoot, m_jointsDriver.leftFoot);
            }

            m_legTrainer.position = m_anchorLeg.position;
        }
        else if (m_isLookingAtTargetDir && !m_humanoid.isLookingAtTargetDirection)
        { 
            m_isLookingAtTargetDir = false;
        }

        float reward = 0f;

        if (m_isLookingAtTargetDir && m_humanoid.isSpinePostureCorrect)
        {
            float anchorReward = 1 - Vector3.Distance(m_anchorLeg.position, m_legTrainer.position);

            float anchorPosZ = m_jointsDriver.spine.transform.InverseTransformPoint(m_anchorLeg.position).z;
            float stepPosZ = m_jointsDriver.spine.transform.InverseTransformPoint(m_steppingLeg.position).z;

            float stepReward = 0;

            if (m_oldLegPosZ < stepPosZ)
            {
                stepReward = stepPosZ - m_oldLegPosZ;
                m_oldLegPosZ = stepPosZ;
            }

            reward = stepReward * anchorReward;

            // смена ролей ног
            if (stepPosZ > m_stepLength / 2 || stepPosZ - anchorPosZ > m_stepLength)
            {
                SetAnchor(m_steppingLeg, m_anchorLeg);
            }

            Academy.Instance.StatsRecorder.Add("Environment/anchorReward", anchorReward, StatAggregationMethod.Sum);
            Academy.Instance.StatsRecorder.Add("Environment/steppingReward", stepReward, StatAggregationMethod.Sum);
        }

        m_humanoid.AddReward(reward);
    }

    private void SetAnchor(BodyLimb anchorLeg, BodyLimb steppingLeg)
    {
        m_anchorLeg = anchorLeg;
        m_steppingLeg = steppingLeg;
        Debug.Log($"[{m_humanoid.gameObject.name}] Anchor: {m_anchorLeg.name} | Stepping: {m_steppingLeg.name}");
        m_oldLegPosZ = m_jointsDriver.spine.transform.InverseTransformPoint(m_steppingLeg.position).z;
    }

    private void SwitchLegs()
    {
        BodyLimb temp = m_anchorLeg;
        m_anchorLeg = temp;
    }

    private IEnumerator StayRoutine()
    {
        m_isStaing = true;

        float waitTime = Random.Range(m_stayMinTime, m_stayMaxTime);

        yield return new WaitForSeconds(waitTime);

        m_isStaing = false;
    }

    public void OnTouchTarget()
    {
        StopAllCoroutines();
        StartCoroutine(StayRoutine());
    }
}

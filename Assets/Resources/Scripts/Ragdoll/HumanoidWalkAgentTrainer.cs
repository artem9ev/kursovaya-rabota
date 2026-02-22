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

    private void NewAnchor()
    {
        if (m_jointsDriver.leftFoot.isGrounded && !m_jointsDriver.rightFoot.isGrounded)
        {
            SetAnchor(m_jointsDriver.leftFoot, m_jointsDriver.rightFoot);
            return;
        }
        if (!m_jointsDriver.leftFoot.isGrounded && m_jointsDriver.rightFoot.isGrounded)
        {
            SetAnchor(m_jointsDriver.rightFoot, m_jointsDriver.leftFoot);
            return;
        }

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
    }

    private void OnHumanoidAction()
    {
        if (!m_isLookingAtTargetDir && m_humanoid.isLookingAtTargetDirection)
        {
            NewAnchor();

        }
        else if (m_isLookingAtTargetDir && !m_humanoid.isLookingAtTargetDirection)
        {
            m_isLookingAtTargetDir = false;
        }

        if (m_isLookingAtTargetDir && m_humanoid.isSpinePostureCorrect)
        {
            // Награда за фиксацию опорной ноги (чем меньше смещение, тем лучше)
            float anchorDist = Vector3.Distance(m_anchorLeg.position, m_legTrainer.position);
            float anchorReward = Mathf.Exp(-anchorDist * 5f); // плавное затухание

            // Награда за вынос шагающей ноги вперёд
            float stepPosZ = m_jointsDriver.spine.transform.InverseTransformPoint(m_steppingLeg.position).z;
            float stepDelta = stepPosZ - m_oldLegPosZ;
            float stepReward = 0f;
            if (stepDelta > 0.01f)
            {
                stepReward = Mathf.Clamp01(stepDelta / 0.1f);
                m_oldLegPosZ = stepPosZ;
            }

            // Дополнительно: награда за отрыв стопы от земли (чтобы не волочилась)
            float liftReward = m_steppingLeg.isGrounded ? 0f : 0.2f;

            float totalReward = anchorReward * (stepReward + liftReward) * 2f;
            m_humanoid.AddReward(totalReward);

            // Логирование
            Academy.Instance.StatsRecorder.Add("Trainer/AnchorReward", anchorReward);
            Academy.Instance.StatsRecorder.Add("Trainer/StepReward", stepReward);
            Academy.Instance.StatsRecorder.Add("Trainer/LiftReward", liftReward);

            // Смена ролей, если шагающая нога ушла достаточно далеко
            float anchorPosZ = m_jointsDriver.spine.transform.InverseTransformPoint(m_anchorLeg.position).z;
            if (stepPosZ - anchorPosZ > m_stepLength || stepPosZ > m_stepLength * 0.8f)
            {
                SetAnchor(m_steppingLeg, m_anchorLeg);
            }
        }
    }

    private void SetAnchor(BodyLimb anchorLeg, BodyLimb steppingLeg)
    {
        m_anchorLeg = anchorLeg;
        m_steppingLeg = steppingLeg;
        m_oldLegPosZ = m_jointsDriver.spine.transform.InverseTransformPoint(m_steppingLeg.position).z;
        m_legTrainer.position = m_anchorLeg.position;
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

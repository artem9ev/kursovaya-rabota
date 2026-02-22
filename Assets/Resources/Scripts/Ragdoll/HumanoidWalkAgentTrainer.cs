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
    [Header("Train params")]
    [SerializeField][Range(0f, 90f)] private float m_spineUpDeflectionAngle = 35f;
    [SerializeField][Range(0f, 90f)] private float m_spineForwardDeflectionAngle = 25f;
    [SerializeField][Min(0f)] private float m_stayMinTime = 3f;
    [SerializeField] private float m_stayMaxTime = 8f;
    [Header("Rewards")]
    [SerializeField] private float m_coefLookAtTarget = 0.2f;
    [SerializeField] private float m_coefMatchSpeed = 2f;
    [SerializeField] private float m_coefStep = 10f;
    [SerializeField] private float m_coefLiftLeg = 0.2f;

    private Vector3 m_inputDirection;

    private bool m_isStaing = false;

    private BodyLimb m_anchorLeg;
    private BodyLimb m_steppingLeg;
    private bool m_wasLookingAtTargetDir = false;
    private bool m_isLeftLegAnchor = false;

    private float m_oldLegPosZ;

    public float lookingAngle => Vector3.Angle(m_jointsDriver.spineForward, m_inputDirection);
    public bool isLookingAtTargetDirection => m_humanoid.targetWalkingSpeed == 0 || Vector3.Angle(m_jointsDriver.spineForward, m_inputDirection) <= m_spineForwardDeflectionAngle;
    public bool isSpinePostureCorrect => Vector3.Angle(m_jointsDriver.spineUp, Vector3.up) <= m_spineUpDeflectionAngle;

    private void OnValidate()
    {
        if (m_stayMaxTime < m_stayMinTime)
        {
            if (m_stayMaxTime < 0) m_stayMaxTime = 0;
            m_stayMinTime = m_stayMaxTime;
        }
    }

    private void OnEnable()
    {
        m_isStaing = false;

        m_humanoid.ActionReceived += OnHumanoidAction;
        m_humanoid.EpisodeBegin += OnEpisodeBegin;
        m_humanoid.EpisodeEnd += OnEpisodeEnd;
    }

    private void OnDisable()
    {
        m_humanoid.ActionReceived -= OnHumanoidAction;
        m_humanoid.EpisodeBegin -= OnEpisodeBegin;
        m_humanoid.EpisodeEnd -= OnEpisodeEnd;
    }

    private void OnDrawGizmos()
    {
        if (m_wasLookingAtTargetDir && isSpinePostureCorrect)
        {
            Gizmos.color = Color.cyan;
            Gizmos.DrawWireSphere(m_legTrainer.position, 0.2f);
            Gizmos.DrawLine(m_legTrainer.position, m_anchorLeg.position);
        }

        Color rayColorForward = isLookingAtTargetDirection ? Color.green : Color.red;
        Color rayColorUp = isSpinePostureCorrect ? Color.green : Color.red;

        Gizmos.color = rayColorUp;
        Gizmos.DrawRay(m_jointsDriver.hips.position, m_jointsDriver.spineUp * 1.5f);

        Gizmos.color = rayColorForward;
        Gizmos.DrawRay(m_jointsDriver.hips.position, m_jointsDriver.spineForward * 1.5f);
    }

    private void FixedUpdate()
    {
        if (m_isStaing)
        {
            m_inputDirection = Vector3.zero;
            m_onInput?.Invoke(Vector2.zero);
            return;
        }

        Vector3 agentPos = m_jointsDriver.position;
        agentPos.y = 0.5f;

        Vector3 direction = (m_target.Position - agentPos).normalized;

        Vector2 input = new Vector2(direction.x, direction.z);
        m_inputDirection = input.x * Vector3.right + input.y * Vector3.forward;
        m_onInput?.Invoke(input);
    }

    private void OnEpisodeBegin()
    {
        m_wasLookingAtTargetDir = false;
        m_anchorLeg = null;
        m_steppingLeg = null;
        m_oldLegPosZ = 0f;
    }

    private void OnEpisodeEnd()
    {
        
    }

    private void OnHumanoidAction()
    {
        if (!m_wasLookingAtTargetDir && isLookingAtTargetDirection)
        {
            NewAnchor();

        }
        else if (m_wasLookingAtTargetDir && !isLookingAtTargetDirection)
        {
            m_wasLookingAtTargetDir = false;
        }

        UpdateRewards();
    }

    private float GetProjection(BodyLimb leg)
    {
        return Vector3.Dot(leg.position - m_jointsDriver.hips.position, m_jointsDriver.spineForward);
    }

    private void SetAnchor(BodyLimb anchorLeg, BodyLimb steppingLeg)
    {
        m_anchorLeg = anchorLeg;
        m_steppingLeg = steppingLeg;
        m_oldLegPosZ = GetProjection(m_steppingLeg);
        m_legTrainer.position = anchorLeg.position;
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

        float leftLegPosZ = GetProjection(m_jointsDriver.leftFoot);
        float rightLegPosZ = GetProjection(m_jointsDriver.rightFoot);

        m_isLeftLegAnchor = leftLegPosZ < rightLegPosZ;

        m_wasLookingAtTargetDir = true;

        if (m_isLeftLegAnchor)
        {
            SetAnchor(m_jointsDriver.leftFoot, m_jointsDriver.rightFoot);
        }
        else
        {
            SetAnchor(m_jointsDriver.rightFoot, m_jointsDriver.leftFoot);
        }
    }

    private void UpdateRewards()
    {
        float anchorReward = 0f;
        float stepReward = 0f;
        float liftReward = 0f;
        float matchSpeedReward = GetMatchingVelocityReward() * m_coefMatchSpeed;
        float lookAtTargetReward = Mathf.Clamp01(Vector3.Dot(m_inputDirection, m_jointsDriver.spineForward)) * m_coefLookAtTarget;

        if (m_wasLookingAtTargetDir && isSpinePostureCorrect && m_steppingLeg != null && m_anchorLeg != null &&
            !m_steppingLeg.isGrounded && m_anchorLeg.isGrounded)
        {
            // Награда за фиксацию опорной ноги (чем меньше смещение, тем лучше)
            float anchorDist = Vector3.Distance(m_anchorLeg.position, m_legTrainer.position);
            anchorReward = Mathf.Exp(-anchorDist * 5f); // плавное затухание

            float stepPosZ = GetProjection(m_steppingLeg);
            float stepDelta = stepPosZ - m_oldLegPosZ;
            if (stepDelta > 0.01f && m_humanoid.targetWalkingSpeed > 0)
            {
                stepReward = Mathf.Clamp01(stepDelta / 0.1f) * m_coefStep;
                m_oldLegPosZ = stepPosZ;
            }

            liftReward = !m_steppingLeg.isGrounded ? m_coefLiftLeg : 0f;

            Academy.Instance.StatsRecorder.Add("Trainer/AnchorReward", anchorReward, StatAggregationMethod.Average);
            Academy.Instance.StatsRecorder.Add("Trainer/StepReward", stepReward, StatAggregationMethod.Average);
            Academy.Instance.StatsRecorder.Add("Trainer/LiftReward", liftReward, StatAggregationMethod.Average);

            // Смена ролей, если шагающая нога ушла достаточно далеко
            float anchorPosZ = GetProjection(m_anchorLeg);

            if (stepPosZ - anchorPosZ > m_stepLength)
            {
                SetAnchor(m_steppingLeg, m_anchorLeg);
            }
        }

        float totalReward = anchorReward * (stepReward + liftReward) + matchSpeedReward + lookAtTargetReward;
        m_humanoid.AddReward(totalReward);


        Academy.Instance.StatsRecorder.Add("Trainer/matchVelocityReward", matchSpeedReward, StatAggregationMethod.Average);
        Academy.Instance.StatsRecorder.Add("Trainer/lookAtTargetReward", lookAtTargetReward, StatAggregationMethod.Average);
    }

    private float GetMatchingVelocityReward()
    {
        float velDeltaMagnitude = Vector3.Distance(m_inputDirection * m_humanoid.targetWalkingSpeed, m_jointsDriver.velocity);

        if (float.IsNaN(velDeltaMagnitude))
        {
            return 0;
        }

        float clampHighBorder = m_humanoid.targetWalkingSpeed == 0 ? m_humanoid.maxSpeed : m_humanoid.targetWalkingSpeed;
        float clampedDelta = Mathf.Clamp01(Mathf.Clamp(velDeltaMagnitude, 0, clampHighBorder) / clampHighBorder);

        return Mathf.Pow(1 - Mathf.Pow(clampedDelta, 2), 2);
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

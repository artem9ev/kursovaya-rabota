using System.Collections;
using UnityEngine;
using UnityEngine.Events;

public class HumanoidWalkAgentTrainer : MonoBehaviour
{
    [SerializeField] UnityEvent<Vector2> m_onInput;
    [SerializeField] DirectionalTarget m_target;
    [SerializeField] HumanoidJointsDriver m_jointsDriver;

    [SerializeField][Min(0f)] private float m_stayMinTime = 3f;
    [SerializeField] private float m_stayMaxTime = 8f;

    bool m_isStaing = false;

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

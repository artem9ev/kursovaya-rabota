using System.Collections;
using UnityEngine;
using UnityEngine.Events;

public class MyAgentTrainer : MonoBehaviour
{
    [SerializeField] UnityEvent<Vector3> m_onInput;
    [SerializeField] MyTarget m_target;
    [SerializeField] MyHumanoid m_humanoid;
    [SerializeField] Transform m_orient;

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
            m_onInput?.Invoke(Vector3.zero);

            return;
        }

        Vector3 agentPos = m_humanoid.FeetPos;
        agentPos.y = 0.5f;

        Vector3 direction = (m_target.Position - agentPos).normalized;

        m_orient.position = agentPos;
        m_orient.forward = direction;

        m_onInput?.Invoke(direction);
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

using System.Collections.Generic;
using UnityEngine;

public class TargetsController : MonoBehaviour
{
    [SerializeField, Range(0, 1)] private float m_fill = 0.5f;

    [SerializeField] private NavigationAgent m_agent;

    private List<GameObject> m_targets = new List<GameObject>();
    private List<GameObject> m_active = new List<GameObject>();

    private Transform m_transform;

    private void Awake()
    {
        m_transform = transform;

        for (int i = 0; i < m_transform.childCount; i++)
        {
            m_targets.Add(m_transform.GetChild(i).gameObject);
            m_transform.GetChild(i).gameObject.SetActive(false);
        }
    }

    private void OnEnable()
    {
        m_agent.OnBegin += OnEpisodeBegin;
        m_agent.OnHitTarget += OnHitTarget;
    }

    private void OnDisable()
    {
        m_agent.OnBegin -= OnEpisodeBegin;
        m_agent.OnHitTarget -= OnHitTarget;
    }

    private void OnEpisodeBegin()
    {
        foreach (var t in m_targets)
        {
            t.SetActive(false);
        }

        m_active.Clear();

        while (m_active.Count < m_targets.Count * m_fill)
        {
            GameObject target = m_targets[Random.Range(0, m_targets.Count - 1)];

            if (m_active.Contains(target))
            {
                continue;
            }

            m_active.Add(target);
            target.SetActive(true);
        }
    }

    private void OnHitTarget()
    {
        while (m_active.Count < m_targets.Count * m_fill)
        {
            GameObject target = m_targets[Random.Range(0, m_targets.Count - 1)];

            if (m_active.Contains(target))
            {
                continue;
            }

            m_active.Add(target);
            target.SetActive(true);
        }
    }
}

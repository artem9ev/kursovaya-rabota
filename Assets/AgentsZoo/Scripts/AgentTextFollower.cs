using System.Collections.Generic;
using TMPro;
using UnityEditor;
using UnityEngine;

[RequireComponent(typeof(TextMeshPro))]
public class AgentTextFollower : MonoBehaviour
{
    [SerializeField] private MyHumanoid m_agent;
    [SerializeField] private Transform m_anchor;

    private Transform m_transform;
    private TextMeshPro m_textMeshPro;

    private bool m_isVisible;

    private List<float> m_velocities = new List<float>();

    private void Awake()
    {
        m_transform = transform;
        m_textMeshPro = GetComponent<TextMeshPro>();

        for (int i = 0; i < 1 / Time.fixedDeltaTime; i++)
        {
            m_velocities.Add(0);
        }
    }

    private void OnBecameVisible()
    {
        m_isVisible = true;
    }

    private void OnBecameInvisible()
    {
        m_isVisible = false;
    }

    private void Update()
    {
        if (!m_isVisible) 
        {
            return;
        }

        Camera camera = Camera.main;
        if (SceneView.currentDrawingSceneView != null)
        {
            camera = SceneView.currentDrawingSceneView.camera;
        }

        if (camera != null)
        {
            m_transform.position = m_anchor.position + Vector3.up;

            m_transform.LookAt(camera.transform.position);

            m_textMeshPro.text = $"{m_agent.velocity.magnitude:f2}\n{m_agent.targetWalkingSpeed:f2}";
        }

        DrawVelocityGraph();
    }

    private void FixedUpdate()
    {
        for (int i = 1; i < m_velocities.Count; i++)
        {
            m_velocities[i - 1] = m_velocities[i];
        }

        m_velocities[m_velocities.Count - 1] = m_agent.velocity.magnitude / m_agent.maxSpeed;
    }

    private void DrawVelocityGraph()
    {
        Vector3 step = m_transform.right * Time.fixedDeltaTime;

        Vector3 offset = m_transform.up / 2f;

        Vector3 start = m_transform.position - m_transform.right * 0.5f + offset;
        Vector3 end = Vector3.zero;

        Debug.DrawLine(start, start + m_transform.right);
        Debug.DrawLine(start + offset, start + offset + m_transform.right);
        Debug.DrawLine(start + m_transform.right, start + offset + m_transform.right);
        Debug.DrawLine(start, start + offset);

        for (int i = m_velocities.Count - 1; i > 0; i--)
        {
            end = start + step;

            Color color = m_velocities[i] >= m_velocities[i - 1] ? Color.green : Color.yellow;

            Debug.DrawLine(start + m_velocities[i] * offset, end + m_velocities[i - 1] * offset, color);

            start += step;
        }
    }
}

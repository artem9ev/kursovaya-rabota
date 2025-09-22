using UnityEngine;

public class CameraFollower : MonoBehaviour
{
    [SerializeField] private Transform m_target;
    [Header("Parameters")]
    [SerializeField] private float m_acceleration = 3f;
    [SerializeField] private float m_angle = 60f;
    [SerializeField] private float m_range = 50f;

    [SerializeField] private Vector3 m_offset = Vector3.zero;

    private Transform m_transform;

    private Vector3 m_velocity;
    private Vector3 m_pivot;

    private void Awake()
    {
        m_transform = transform;
        m_pivot = m_target.position + m_offset;
        SetPosition();
    }

    private void OnValidate()
    {
        m_transform = transform;
        m_pivot = m_target.position + m_offset;
        SetPosition();
    }

    private void Update()
    {
        Move();
        SetPosition();
    }

    private void Move()
    {
        m_velocity = (m_target.position - m_pivot) * m_acceleration * Time.deltaTime;
        m_pivot += m_velocity;
    }

    private void SetPosition()
    {
        m_transform.rotation = Quaternion.Euler(m_angle, 0f, 0f);
        m_transform.position = m_pivot + m_offset - transform.forward * m_range;
    }
}

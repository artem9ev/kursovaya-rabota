using UnityEngine;
using UnityEngine.Events;

public class MyMainBodyPart : MonoBehaviour
{
    public UnityAction Grounded;

    private Rigidbody m_rb;
    private Transform m_transform;

    private bool m_isGrounded;

    private Vector3 m_startPos;

    public Vector3 AngularVelocity => m_rb.angularVelocity;
    public Quaternion Rotation => m_rb.rotation;

    public Vector3 Velocity => m_rb.linearVelocity;
    public Vector3 Position => m_transform.position;

    public Vector3 Forward => (m_transform.forward.x * Vector3.right + m_transform.forward.z * Vector3.forward).normalized;
    public Vector3 Up => m_transform.up;

    public bool IsGrounded => m_isGrounded;

    private void Awake()
    {
        m_transform = transform;
        m_rb = GetComponent<Rigidbody>();

        m_startPos = m_transform.position;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.CompareTag("ground"))
        {
            Grounded?.Invoke();

            m_isGrounded = true;
        }
    }

    private void OnCollisionExit(Collision collision)
    {
        if (collision.collider.CompareTag("ground"))
        {
            m_isGrounded = false;
        }
    }

    public void ResetBody()
    {
        m_transform.position = m_startPos;
        m_transform.rotation = Quaternion.Euler(0f, Random.Range(0f, 360f), 0f);
        m_rb.linearVelocity = Vector3.zero;
        m_rb.angularVelocity = Vector3.zero;

        m_isGrounded = false;
    }
}

using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public abstract class AgentBodyPart : MonoBehaviour
{
    [Header("Penalty")]
    [SerializeField] protected bool m_groundHitPenalty;
    [SerializeField] protected bool m_endEpisodPenalty;

    public UnityAction<bool> GroundHitPenalty;

    protected Rigidbody m_rb;
    protected Transform m_transform;

    protected List<Collider> m_groundColliders = new List<Collider>();

    protected Vector3 m_startPos;
    protected Quaternion m_startRot;

    public Quaternion localRotation => m_transform.localRotation;
    public Vector3 velocity => m_rb.linearVelocity;
    public Vector3 angularVelocity => m_rb.angularVelocity;
    public Vector3 position => m_rb.position;
    public Vector3 forward => m_transform.forward;
    public Vector3 up => m_transform.up;
    public Vector3 flatForward => (m_transform.forward.x * Vector3.right + m_transform.forward.z * Vector3.forward).normalized;

    public bool isGrounded => m_groundColliders.Count > 0;
    public bool doGroundHitPenalty => m_groundHitPenalty;

    protected virtual void Awake()
    {
        m_transform = transform;
        m_rb = GetComponent<Rigidbody>();

        m_startPos = m_transform.localPosition;
        m_startRot = m_transform.localRotation;
    }

    protected virtual void OnCollisionEnter(Collision collision)
    {
        for (int i = 0; i < collision.contactCount; i++)
        {
            ContactPoint point = collision.GetContact(i);

            if (point.normal.y > Mathf.Sqrt(2) / 2)
            {
                m_groundColliders.Add(point.otherCollider);

                if (m_groundHitPenalty)
                {
                    GroundHitPenalty?.Invoke(m_endEpisodPenalty);
                }

                break;
            }
        }
    }

    protected virtual void OnCollisionExit(Collision collision)
    {
        if (m_groundColliders.Contains(collision.collider))
        {
            m_groundColliders.Remove(collision.collider);
        }
    }

    public virtual void ResetBody()
    {
        m_rb.linearVelocity = Vector3.zero;
        m_rb.angularVelocity = Vector3.zero;

        m_transform.localPosition = m_startPos;
        m_transform.localRotation = m_startRot;
    }
}

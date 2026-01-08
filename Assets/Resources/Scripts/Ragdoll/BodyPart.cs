using System.Collections;
using System.Collections.Generic;
using Unity.MLAgents.Sensors;
using UnityEngine;
using UnityEngine.Events;

public abstract class BodyPart : MonoBehaviour
{
    [Header("Penalty")]
    [SerializeField] protected bool m_groundHitPenalty;
    [SerializeField] protected bool m_endEpisodPenalty;

    public UnityAction<bool> GroundHitPenalty;

    protected Rigidbody m_rb;
    protected Collider m_collider;
    protected Transform m_transform;

    protected List<Collider> m_groundColliders = new List<Collider>();

    protected Vector3? m_startPos;

    public new Transform transform
    {  
        get 
        {
            m_transform = m_transform != null ? m_transform : base.transform;
            return m_transform; 
        } 
    }

    public Rigidbody rb 
    { 
        get 
        { 
            m_rb = m_rb != null ? m_rb : GetComponent<Rigidbody>();
            return m_rb; 
        } 
    }

    public new Collider collider
    {
        get
        {
            m_collider = m_collider != null ? m_collider : GetComponentInChildren<Collider>();
            return m_collider;
        }
    }

    public Quaternion localRotation 
    {
        get { return transform.localRotation; } 
        set { transform.localRotation = value;}
    }
    public Vector3 localPosition => m_startPos.Value;
    public Vector3 velocity => rb.linearVelocity;
    public Vector3 angularVelocity => rb.angularVelocity;
    public Vector3 position => rb.position;
    public Vector3 forward => transform.forward;
    public Vector3 up => transform.up;
    public Vector3 flatForward => (transform.forward.x * Vector3.right + transform.forward.z * Vector3.forward).normalized;

    public bool isGrounded => m_groundColliders.Count > 0;
    public bool doGroundHitPenalty => m_groundHitPenalty;


    protected virtual void Awake()
    {
        m_rb = GetComponent<Rigidbody>();
        
        m_startPos = transform.localPosition;
    }

    protected virtual void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.parent != null && collision.transform.parent.TryGetComponent(out BodyJoint joint))
        {
            return;
        }

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
        if (m_startPos == null)
        {
            m_startPos = transform.localPosition;
        }

        if (!rb.isKinematic)
        {
            rb.linearVelocity = Vector3.zero;
            rb.angularVelocity = Vector3.zero;
        }

        transform.localRotation = Quaternion.identity;
        transform.localPosition = m_startPos.Value;
    }

    public virtual void GetObservations(VectorSensor sensor)
    {
        sensor.AddObservation(isGrounded); // +1
    }

    public virtual void SetContinuousActios(IEnumerator actions)
    {

    }

    public virtual void SetDiscreteActios(IEnumerator actions)
    {

    }
}

using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(ConfigurableJoint))]
public class MyJointPart : MonoBehaviour
{
    [Header("Penalty")]
    [SerializeField] private bool m_groundHitPenalty;
    [SerializeField] private bool m_endEpisodPenalty;

    public UnityAction<bool> GroundHitPenalty;

    private ConfigurableJoint m_joint;
    private Rigidbody m_rb;
    private Transform m_transform;

    private Vector3 m_startPos;
    private Quaternion m_startRot;

    private float m_maxJointSpring;
    private float m_jointDampen;
    private float m_maxJointForceLimit;

    private bool m_isGrounded;

    public Vector3 Velocity => m_rb.linearVelocity;
    public Vector3 Position => m_rb.position;
    public Vector3 Forward => (m_transform.forward.x * Vector3.right + m_transform.forward.z * Vector3.forward).normalized;
    public Quaternion Rotation => m_rb.rotation;

    public Vector3 up => m_transform.up;

    public float Strenth => m_joint.slerpDrive.maximumForce;
    public float MaxStrenth => m_maxJointForceLimit;
    public bool IsGrounded => m_isGrounded;

    private void Awake()
    {
        m_transform = transform;
        m_rb = GetComponent<Rigidbody>();
        m_joint = GetComponent<ConfigurableJoint>();

        m_startPos = m_transform.localPosition;
        m_startRot = m_transform.localRotation;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.CompareTag("ground")) 
        {
            m_isGrounded = true;

            if (m_groundHitPenalty)
            {
                GroundHitPenalty?.Invoke(m_endEpisodPenalty);
            }
        }
    }

    private void OnCollisionExit(Collision collision)
    {
        if (collision.transform.CompareTag("ground"))
        {
            m_isGrounded = false;
        }
    }

    public void SetTargetRotation(float x, float y, float z)
    {
        x = (x + 1f) * 0.5f;
        y = (y + 1f) * 0.5f;
        z = (z + 1f) * 0.5f;

        float xRot = Mathf.Lerp(m_joint.lowAngularXLimit.limit, m_joint.highAngularXLimit.limit, x);
        float yRot = Mathf.Lerp(-m_joint.angularYLimit.limit, m_joint.angularYLimit.limit, y);
        float zRot = Mathf.Lerp(-m_joint.angularZLimit.limit, m_joint.angularZLimit.limit, z);

        m_joint.targetRotation = Quaternion.Euler(xRot, yRot, zRot);
    }

    public void SetJointStrength(float strength)
    {
        var rawVal = (strength + 1) / 2 * m_maxJointForceLimit;
        var jd = new JointDrive
        {
            positionSpring = m_maxJointSpring,
            positionDamper = m_jointDampen,
            maximumForce = rawVal
        };
        m_joint.slerpDrive = jd;
    }

    public void ResetJoint()
    {
        m_joint.slerpDrive = new JointDrive
        {
            positionSpring = 0,
            positionDamper = 0,
            maximumForce = 0
        };

        m_joint.targetRotation = Quaternion.Euler(0, 0, 0);

        m_rb.linearVelocity = Vector3.zero;
        m_rb.angularVelocity = Vector3.zero;

        m_transform.localPosition = m_startPos;
        m_transform.localRotation = m_startRot;

        Physics.SyncTransforms();

        m_isGrounded = false;

        m_joint.slerpDrive = new JointDrive
        {
            positionSpring = m_maxJointSpring,
            positionDamper = m_jointDampen,
            maximumForce = 0
        };
    }

    public void SetSlerpDrive(float spring, float dampen, float maxForce)
    {
        m_maxJointSpring = spring;
        m_jointDampen = dampen;
        m_maxJointForceLimit = maxForce;

        //m_joint.angularXLimitSpring = new SoftJointLimitSpring { spring = spring, damper = dampen };
        //m_joint.angularYZLimitSpring = new SoftJointLimitSpring { spring = spring, damper = dampen };
    }
}

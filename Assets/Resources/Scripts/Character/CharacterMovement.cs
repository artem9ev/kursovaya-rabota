using System.Runtime.CompilerServices;
using UnityEngine;

[RequireComponent(typeof(CharacterController))]
public class CharacterMovement : MonoBehaviour
{
    [SerializeField, Min(1f)] private float m_maxSpeed = 5f;
    [SerializeField, Min(1f)] private float m_accelerationValue = 3f;
    [SerializeField, Range(0f, 90f)] private float m_maxMoveAngle = 45f;
    [SerializeField, Min(1f)] private float m_mass = 80f;

    private Transform m_transform;
    private CharacterController m_controller;

    private ControllerColliderHit m_contact;

    private Vector2 m_rawInput;
    private Vector3 m_inputDirection;

    private Vector3 m_velocity;
    private Vector3 m_flatVelocity;
    private Vector3 m_gravity;
    private Vector3 m_acceleration;

    private Vector3 m_cameraRight;
    private Vector3 m_cameraForward;

    private Vector3 m_lastMoveDirection;

    private float m_contactAngle;

    private bool m_canMove;

    private LayerMask m_groundMask;

    public Vector3 Velocity => m_velocity;
    public Vector3 FlatVelocity => m_flatVelocity;
    public float MaxSpeed => m_maxSpeed;

    private void Awake()
    {
        m_transform = transform;
        m_controller = GetComponent<CharacterController>();
        m_groundMask = LayerMask.GetMask("Default");
    }

    private void Update()
    {
        Move();

        if (m_flatVelocity.magnitude > 0.15f)
        {
            m_transform.forward = m_flatVelocity.normalized;
        }

        Debug.DrawRay(m_transform.position, m_inputDirection, Color.blue);
    }

    private void OnDrawGizmos()
    {
        if (m_controller == null || m_contact == null)
        {
            return;
        }
        float displacementLength = Mathf.Sqrt(m_controller.radius * m_controller.radius + Mathf.Pow(Mathf.Tan(Mathf.Asin(m_lastMoveDirection.y)) * m_controller.radius, 2));
    }

    private void OnControllerColliderHit(ControllerColliderHit hit)
    {
        if (hit.point.y + m_controller.skinWidth > m_transform.position.y + m_controller.radius)
        {
            return;
        }

        m_contact = hit;
        m_contactAngle = Mathf.Asin(Mathf.Sqrt(1f - m_contact.normal.y * m_contact.normal.y)) * Mathf.Rad2Deg;
        Debug.DrawRay(hit.point + m_controller.skinWidth * Vector3.up, hit.normal * m_controller.radius, Color.magenta);
    }

    private bool PlayerShereCast(Vector3 displasment, out RaycastHit hit)
    {
        Vector3 headPosition = m_transform.position + (m_controller.height - m_controller.radius) * Vector3.up;
        Vector3 legsPosition = m_transform.position + m_controller.radius * Vector3.up;
        if (Physics.SphereCast(headPosition + displasment, m_controller.radius, Vector3.down, out hit, m_controller.height * 2f, m_groundMask))
        {
            float borderDisplacemet = 2.005f * Mathf.Tan(m_maxMoveAngle * Mathf.Deg2Rad) * m_controller.radius;
            Vector3 point = headPosition + displasment + (hit.distance - m_controller.skinWidth) * Vector3.down;

            Gizmos.color = Color.yellow;
            Gizmos.DrawRay(hit.point, Vector3.up);
            Gizmos.DrawSphere(point, 0.02f);
            Gizmos.DrawSphere(headPosition + displasment, 0.02f);

            Gizmos.DrawRay(point - Vector3.up * m_controller.radius, Vector3.up * m_controller.radius * 2f);
            Gizmos.DrawRay(point + (Vector3.right + Vector3.forward).normalized * m_controller.radius, -(Vector3.right + Vector3.forward).normalized * m_controller.radius * 2f);
            Gizmos.DrawRay(point + (Vector3.right - Vector3.forward).normalized * m_controller.radius, (Vector3.forward - Vector3.right).normalized * m_controller.radius * 2f);

            if (point.y > legsPosition.y - borderDisplacemet && point.y < legsPosition.y + borderDisplacemet)
            {
                Gizmos.color = Color.green * 0.5f;
            }
            else
            {
                Gizmos.color = Color.red * 0.5f;
            }

            Gizmos.DrawWireSphere(point, m_controller.radius);

            return point.y > legsPosition.y - borderDisplacemet && point.y < legsPosition.y + borderDisplacemet;
        }
        return false;
    }

    private void Move()
    {
        Fall();
        Slide();
        Acceleration();
        Press();

        m_controller.Move(m_velocity * Time.deltaTime + m_acceleration);

        m_acceleration *= 0f;

        if (m_controller.velocity.magnitude * Time.deltaTime >= 0.00001f)
        {
            m_velocity = new Vector3(m_controller.velocity.x, 0f, m_controller.velocity.z);
            m_lastMoveDirection = m_controller.velocity.normalized;
        }
        else
        {
            m_velocity = Vector3.zero;
        }
        m_flatVelocity = m_velocity;
    }

    private void Press()
    {
        if (m_controller.isGrounded)
        {
            Vector3 pressure = m_controller.radius * Vector3.down;
            m_acceleration += pressure;
        }
    }

    private void Fall()
    {
        if (!m_controller.isGrounded)
        {
            m_gravity += Physics.gravity * Time.deltaTime * Time.deltaTime;
            m_acceleration += m_gravity;
        }
        else
        {
            m_gravity *= 0f;
        }
    }

    private void Slide()
    {
        if (!m_controller.isGrounded || m_contact == null)
        {
            return;
        }

        if (m_contactAngle > m_maxMoveAngle)
        {
            Debug.Log("SLIDE");
            Vector3 projectedGravity = Vector3.ProjectOnPlane(Physics.gravity * Time.deltaTime * Time.deltaTime, m_contact.normal);
            m_acceleration += projectedGravity.x * Vector3.right + projectedGravity.z * Vector3.forward;
        }
    }

    private void Acceleration()
    {
        if (!m_controller.isGrounded && m_canMove)
        {
            return;
        }

        if (m_contactAngle <= m_maxMoveAngle)
        {
            m_acceleration += m_accelerationValue * Time.deltaTime * Time.deltaTime * (m_maxSpeed * m_inputDirection - m_flatVelocity);
        }
    }

    public void OnMove(Vector2 dir)
    {
        m_rawInput = dir;
        m_inputDirection = (dir.x * m_cameraRight + dir.y * m_cameraForward).normalized;
    }

    public void OnCameraRotate(Vector3 forward, Vector3 right)
    {
        m_cameraForward = forward;
        m_cameraRight = right;

        m_inputDirection = (m_rawInput.x * m_cameraRight + m_rawInput.y * m_cameraForward).normalized;
    }
}

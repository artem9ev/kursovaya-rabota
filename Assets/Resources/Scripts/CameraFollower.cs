using UnityEngine;

public class CameraFollower : MonoBehaviour
{
    [SerializeField] private Transform m_target;
    [Header("Parameters")]
    [SerializeField] private float m_sensetivityX = 1.0f;
    [SerializeField] private float m_sensetivityY = 1.0f;
    [SerializeField] private float m_acceleration = 3f;
    [SerializeField] private float m_angle = 60f;
    [SerializeField] private float m_range = 50f;

    [SerializeField] private Vector3 m_offset = Vector3.zero;

    private Transform m_transform;
    private CharacterMovement m_characterMovement;

    private Vector3 m_pivotRight;
    private Vector3 m_pivotForward;

    private Vector3 m_velocity;
    private Vector3 m_pivot;

    private float m_rotationX;
    private float m_rotationY;

    private void Awake()
    {
        m_transform = transform;
        m_pivot = m_target.position + m_offset;
        m_rotationX = m_angle;
        m_transform.rotation = Quaternion.Euler(m_rotationX, m_rotationY, 0);
        SetPosition();

        m_characterMovement = m_target.GetComponent<CharacterMovement>();

        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }

    private void OnValidate()
    {
        m_transform = transform;
        m_pivot = m_target.position + m_offset;
        m_rotationX = m_angle;
        m_transform.rotation = Quaternion.Euler(m_rotationX, m_rotationY, 0);
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
        m_transform.position = m_pivot + m_offset - transform.forward * m_range;
    }

    public void OnMouseLook(Vector2 delta)
    {
        m_rotationX = Mathf.Clamp(m_rotationX - m_sensetivityX / 10f * delta.y, -89, 89);
        m_rotationY += m_sensetivityY / 10f * delta.x;

        m_transform.eulerAngles = new Vector2(m_rotationX, m_rotationY);

        if (m_characterMovement != null)
        {
            m_characterMovement.OnCameraRotate(Quaternion.Euler(0, -90, 0) * m_transform.right, m_transform.right);
        }
    }
}

using UnityEngine;
using UnityEngine.Events;

public class MyTarget : MonoBehaviour
{
    [SerializeField] private float m_distance = 8f;

    [SerializeField] private Transform m_parent;
    [SerializeField] private UnityEvent m_onTargetTouch;

    private Transform m_transform;

    public Vector3 Position => m_transform.position;

    private void Awake()
    {
        m_transform = transform;
        SetPosition();
    }

    public void SetPosition()
    {
        float ang = Random.value * Mathf.PI * 2;
        m_transform.position = m_parent.position + m_distance * (Mathf.Sin(ang) * Vector3.forward + Mathf.Cos(ang) * Vector3.right);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("agent"))
        {
            m_onTargetTouch?.Invoke();
            SetPosition();
        }
    }
}

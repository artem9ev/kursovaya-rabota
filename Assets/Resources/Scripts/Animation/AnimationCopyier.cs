using UnityEngine;

public class AnimationCopyier : MonoBehaviour
{
    [SerializeField, Range(0f, 1f)] private float t = 0;

    private Transform m_transform;
    private Animator m_animator;

    int m_hashName;

    private void OnValidate()
    {
        m_animator = GetComponent<Animator>();

        m_hashName = Animator.StringToHash("Base Layer.stand up");

        m_animator.Play(m_hashName, 0, t);
    }

    private void Awake()
    {
        m_transform = transform;
        m_animator = GetComponent<Animator>();

        m_hashName = Animator.StringToHash("Base Layer.stand up");

        m_animator.Play(m_hashName, 0, t);


        /*AnimatorClipInfo[] info = m_animator.GetCurrentAnimatorClipInfo(0);

        if (info.Length > 0)
        {
            info[0].clip.frameRate = 0;
        }
        else
        {
            Debug.Log("NO AIMATIONS?!?!");
        }*/
    }

    private void OnDrawGizmos()
    {
        m_transform = m_transform != null ? m_transform : transform;
        Draw(m_transform);
    }

    private void Update()
    {
        
    }

    private void Draw(Transform parent)
    {
        for (int i = 0; i < parent.childCount; i++)
        {
            Gizmos.color = Color.white;
            Gizmos.DrawLine(parent.position, parent.GetChild(i).position);

            Draw(parent.GetChild(i));
        }
    }
}

using UnityEngine;

public class AnimationClipCopier : MonoBehaviour
{
    private Transform m_transform;
    private Animator m_animator;

    private AnimatorClipInfo[] m_clipsInfo;

    private void Start()
    {
        m_transform = transform;
        m_animator = GetComponent<Animator>();

        m_clipsInfo = m_animator.GetCurrentAnimatorClipInfo(0);
    }

    private void OnDrawGizmos()
    {
        DrawSkeleton(transform);
    }

    private void DrawSkeleton(Transform transform, Transform parent = null)
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            DrawSkeleton(transform.GetChild(i), transform);
        }

        if (parent == null)
        {
            return;
        }
        Gizmos.color = Color.white;

        Gizmos.DrawLine(transform.position, parent.position);
    }
}

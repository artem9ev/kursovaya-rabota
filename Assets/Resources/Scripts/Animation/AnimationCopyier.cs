using System.Collections.Generic;
using UnityEngine;

public class AnimationCopyier : MonoBehaviour
{
    [SerializeField] HumanoidJointsDriver m_jointsDriver;
    [SerializeField, Range(0f, 1f)] private float t = 0;

    [Header("Body")]
    [SerializeField] private Transform m_hips;
    [SerializeField] private Transform m_spine;
    [SerializeField] private Transform m_chest;
    [SerializeField] private Transform m_head;
    [Header("Right Leg")]
    [SerializeField] private Transform m_rLeg;
    [SerializeField] private Transform m_rKnee;
    [SerializeField] private Transform m_rFoot;
    [Header("Left Leg")]
    [SerializeField] private Transform m_lLeg;
    [SerializeField] private Transform m_lKnee;
    [SerializeField] private Transform m_lFoot;
    [Header("Right Arm")]
    [SerializeField] private Transform m_rArm;
    [SerializeField] private Transform m_rElbow;
    [SerializeField] private Transform m_rHand;
    [Header("Left Arm")]
    [SerializeField] private Transform m_lArm;
    [SerializeField] private Transform m_lElbow;
    [SerializeField] private Transform m_lHand;

    private Transform m_transform;
    private Animator m_animator;

    private List<Transform> m_bodyParts = new List<Transform>();

    int m_hashName;

    private void OnValidate()
    {
        if (!Application.isPlaying)
        {
            return;
        }

        SetJoints();

        m_animator = GetComponent<Animator>();

        m_hashName = Animator.StringToHash("Base Layer.stand up");

        m_animator.Play(m_hashName, 0, t);

        m_jointsDriver.SetBodyPartsPos(m_bodyParts);
    }

    private void Start()
    {
        SetJoints();

        m_transform = transform;
        m_animator = GetComponent<Animator>();

        m_hashName = Animator.StringToHash("Base Layer.stand up");

        m_animator.Play(m_hashName, 0, t);

        m_jointsDriver.SetBodyPartsPos(m_bodyParts);
    }

    private void SetJoints()
    {
        m_bodyParts.Clear();

        m_bodyParts.Add(m_hips);
        m_bodyParts.Add(m_spine);
        m_bodyParts.Add(m_chest);
        m_bodyParts.Add(m_head);

        m_bodyParts.Add(m_rLeg);
        m_bodyParts.Add(m_rKnee);
        m_bodyParts.Add(m_rFoot);

        m_bodyParts.Add(m_lLeg);
        m_bodyParts.Add(m_lKnee);
        m_bodyParts.Add(m_lFoot);

        m_bodyParts.Add(m_rArm);
        m_bodyParts.Add(m_rElbow);
        m_bodyParts.Add(m_rHand);

        m_bodyParts.Add(m_lArm);
        m_bodyParts.Add(m_lElbow);
        m_bodyParts.Add(m_lHand);
    }

    private void OnDrawGizmos()
    {
        m_transform = m_transform != null ? m_transform : transform;
        Draw(m_transform);
    }

    private void Update()
    {
        m_jointsDriver.SetBodyPartsPos(m_bodyParts);
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

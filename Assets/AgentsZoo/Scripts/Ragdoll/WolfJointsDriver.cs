using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class WolfJointsDriver : MonoBehaviour
{
    [SerializeField] private Transform m_orient;

    [Header("Body")]
    [SerializeField] private MyJointPart m_hips;
    [SerializeField] private MyJointPart m_spine_0;
    [SerializeField] private MyJointPart m_spine_1;
    [SerializeField] private MyJointPart m_spine_2;
    [SerializeField] private MyJointPart m_chest;
    [SerializeField] private MyJointPart m_head;
    [Header("Front Right Leg")]
    [SerializeField] private MyJointPart m_frLeg;
    [SerializeField] private MyJointPart m_frKnee;
    [SerializeField] private MyJointPart m_frFoot;
    [Header("Front Left Leg")]
    [SerializeField] private MyJointPart m_flLeg;
    [SerializeField] private MyJointPart m_flKnee;
    [SerializeField] private MyJointPart m_flFoot;
    [Header("Back Right Leg")]
    [SerializeField] private MyJointPart m_brLeg;
    [SerializeField] private MyJointPart m_brKnee;
    [SerializeField] private MyJointPart m_brFoot;
    [Header("Back Left Leg")]
    [SerializeField] private MyJointPart m_blLeg;
    [SerializeField] private MyJointPart m_blKnee;
    [SerializeField] private MyJointPart m_blFoot;

    [Header("Joint Drive Settings")]
    [SerializeField] private float maxJointSpring;
    [SerializeField] private float jointDampen;
    [SerializeField] private float maxJointForceLimit;

    [SerializeField, Min(0f)] private float m_projectionAngle = 2f;
    [SerializeField, Min(0f)] private float m_projectionDistance = 0.1f;

    private List<MyJointPart> m_joints = new List<MyJointPart>();
    public UnityAction<bool> OnGroundHitPenalty;

    public MyJointPart hips => m_hips;
    public Vector3 velocity => GetAvgVelocity();
    //public Vector3 feetPos => (m_rFoot.position + m_lFoot.position) / 2;

    public Vector3 spineForward => (m_hips.forward + m_spine_0.forward + m_spine_1.forward + m_spine_2.forward + m_chest.forward + m_head.forward) / 6;
    public Vector3 spineUp => (m_hips.up + m_spine_0.up + m_spine_1.up + m_spine_2.up + m_chest.up + m_head.up) / 6;
    public Vector3 spinePosition => (m_hips.position + m_spine_0.position + m_spine_1.position + m_spine_2.position + m_chest.position + m_head.position) / 6;

    public Vector3 orientForward
    {
        get { return m_orient.forward; }
        set { m_orient.forward = value; }
    }

    public Vector3 position => m_hips.position;

    public List<MyJointPart> joints => m_joints;

    private void OnValidate()
    {
        SetJoints();

        foreach (var joint in m_joints)
        {
            joint.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
            joint.SetProjectionSettings(m_projectionAngle, m_projectionDistance);
        }
    }

    private void Awake()
    {
        SetJoints();
    }

    private void OnEnable()
    {
        m_hips.GroundHitPenalty += GroundHitPenalty;

        foreach (var joint in m_joints)
        {
            joint.GroundHitPenalty += GroundHitPenalty;
        }
    }

    private void OnDisable()
    {
        m_hips.GroundHitPenalty -= GroundHitPenalty;

        foreach (var joint in m_joints)
        {
            joint.GroundHitPenalty -= GroundHitPenalty;
        }
    }

    private void FixedUpdate()
    {
        m_orient.position = m_hips.position;
    }

    private void SetJoints()
    {
        m_joints.Clear();

        m_joints.Add(m_hips);
        m_joints.Add(m_spine_0);
        m_joints.Add(m_spine_1);
        m_joints.Add(m_spine_2);
        m_joints.Add(m_chest);
        m_joints.Add(m_head);

        m_joints.Add(m_frLeg);
        m_joints.Add(m_frKnee);
        m_joints.Add(m_frFoot);

        m_joints.Add(m_flLeg);
        m_joints.Add(m_flKnee);
        m_joints.Add(m_flFoot);

        m_joints.Add(m_brLeg);
        m_joints.Add(m_brKnee);
        m_joints.Add(m_brFoot);

        m_joints.Add(m_blLeg);
        m_joints.Add(m_blKnee);
        m_joints.Add(m_blFoot);
    }

    private void GroundHitPenalty(bool endEpisode)
    {
        OnGroundHitPenalty?.Invoke(endEpisode);
    }

    private Vector3 GetAvgVelocity()
    {
        Vector3 sum = Vector3.zero;

        sum += m_hips.velocity;

        foreach (var joint in m_joints)
        {
            sum += joint.velocity;
        }

        return sum / (1 + m_joints.Count);
    }

    public Vector3 GetRelativeDirection(Vector3 direction)
    {
        return m_orient.InverseTransformDirection(direction);
    }
    public Vector3 GetRelativePosition(Vector3 position)
    {
        return m_orient.InverseTransformPoint(position);
    }

    public Quaternion GetRelativeRotation(Vector3 forward)
    {
        return Quaternion.FromToRotation(forward, m_orient.forward);
    }

    public void ResetRagdoll()
    {
        m_hips.ResetBody(true);

        foreach (var joint in m_joints)
        {
            if (joint == m_hips)
            {
                continue;
            }
            joint.ResetBody();
        }

        Physics.SyncTransforms();
    }
}

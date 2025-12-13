using System.Collections;
using System.Collections.Generic;
using Unity.MLAgents.Sensors;
using UnityEngine;
using UnityEngine.Events;

public class HumanoidJointsDriver : MonoBehaviour
{
    [SerializeField] private Transform m_orient;

    [Header("Body")]
    [SerializeField] private MyJointPart m_hips;
    [SerializeField] private MyJointPart m_spine;
    [SerializeField] private MyJointPart m_chest;
    [SerializeField] private MyJointPart m_head;
    [Header("Right Leg")]
    [SerializeField] private MyJointPart m_rLeg;
    [SerializeField] private MyJointPart m_rKnee;
    [SerializeField] private MyJointPart m_rFoot;
    [Header("Left Leg")]
    [SerializeField] private MyJointPart m_lLeg;
    [SerializeField] private MyJointPart m_lKnee;
    [SerializeField] private MyJointPart m_lFoot;
    [Header("Right Arm")]
    [SerializeField] private MyJointPart m_rArm;
    [SerializeField] private MyJointPart m_rElbow;
    [Header("Left Arm")]
    [SerializeField] private MyJointPart m_lArm;
    [SerializeField] private MyJointPart m_lElbow;

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
    public Vector3 feetPos => (m_rFoot.position + m_lFoot.position) / 2;

    public Vector3 spineForward => (m_hips.forward + m_spine.forward + m_chest.forward + m_head.forward) / 4;
    public Vector3 spineUp => (m_hips.up + m_spine.up + m_chest.up + m_head.up) / 4;

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
        m_joints.Add(m_spine);
        m_joints.Add(m_chest);
        m_joints.Add(m_head);

        m_joints.Add(m_rLeg);
        m_joints.Add(m_rKnee);
        m_joints.Add(m_rFoot);

        m_joints.Add(m_lLeg);
        m_joints.Add(m_lKnee);
        m_joints.Add(m_lFoot);

        m_joints.Add(m_rArm);
        m_joints.Add(m_rElbow);

        m_joints.Add(m_lArm);
        m_joints.Add(m_lElbow);
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
        m_hips.ResetBody();

        foreach (var joint in m_joints)
        {
            joint.ResetBody();
        }

        Physics.SyncTransforms();
    }
}

using System.Collections.Generic;
using UnityEngine;

public class HumanoidJointsDriver : MonoBehaviour
{
    [SerializeField] private Transform m_orient;

    [Header("Body")]
    [SerializeField] private BodyHips m_hips;
    [SerializeField] private BodyJoint m_spine;
    [SerializeField] private BodyJoint m_chest;
    [SerializeField] private BodyJoint m_head;
    [Header("Right Leg")]
    [SerializeField] private BodyJoint m_rLeg;
    [SerializeField] private BodyJoint m_rKnee;
    [SerializeField] private BodyJoint m_rFoot;
    [Header("Left Leg")]
    [SerializeField] private BodyJoint m_lLeg;
    [SerializeField] private BodyJoint m_lKnee;
    [SerializeField] private BodyJoint m_lFoot;
    [Header("Right Arm")]
    [SerializeField] private BodyJoint m_rArm;
    [SerializeField] private BodyJoint m_rElbow;
    [Header("Left Arm")]
    [SerializeField] private BodyJoint m_lArm;
    [SerializeField] private BodyJoint m_lElbow;

    [Header("Joint Drive Settings")]
    [SerializeField] private float maxJointSpring;
    [SerializeField] private float jointDampen;
    [SerializeField] private float maxJointForceLimit;

    [SerializeField, Min(0f)] private float m_projectionAngle = 2f;
    [SerializeField, Min(0f)] private float m_projectionDistance = 0.1f;

    private List<BodyJoint> m_joints = new List<BodyJoint>();

    public BodyHips hips => m_hips;
    public Vector3 velocity => GetAvgVelocity();
    public Vector3 feetPos => (m_rFoot.position + m_lFoot.position) / 2;
    public Vector3 feetUp => (m_rFoot.up + m_lFoot.up) / 2;

    public Vector3 spineForward => (m_hips.forward + m_spine.forward + m_chest.forward + m_head.forward) / 4;
    public Vector3 headForward => m_head.forward;
    public Vector3 headPosition => m_head.position;
    public Vector3 spineUp => (m_hips.up + m_spine.up + m_chest.up + m_head.up) / 4;

    public Vector3 orientForward
    {
        get { return m_orient.forward; }
        set { m_orient.forward = value; }
    }

    public Vector3 position => m_hips.position;

    public List<BodyJoint> joints => m_joints;

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

    private void FixedUpdate()
    {
        m_orient.position = m_hips.position;
    }

    private void SetJoints()
    {
        m_joints.Clear();

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

    public void RandomResetRagdoll()
    {
        m_hips.ResetBody();
        m_hips.RandomRotate();

        foreach (var joint in m_joints)
        {
            joint.ResetBody();
        }

        Physics.SyncTransforms();
    }
}

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
    [SerializeField] private BodyLimb m_rFoot;
    [Header("Left Leg")]
    [SerializeField] private BodyJoint m_lLeg;
    [SerializeField] private BodyJoint m_lKnee;
    [SerializeField] private BodyLimb m_lFoot;
    [Header("Right Arm")]
    [SerializeField] private BodyJoint m_rArm;
    [SerializeField] private BodyJoint m_rElbow;
    [SerializeField] private BodyLimb m_rHand;
    [Header("Left Arm")]
    [SerializeField] private BodyJoint m_lArm;
    [SerializeField] private BodyJoint m_lElbow;
    [SerializeField] private BodyLimb m_lHand;

    [Header("Joint Drive Settings")]
    [SerializeField] private float maxJointSpring;
    [SerializeField] private float jointDampen;
    [SerializeField] private float maxJointForceLimit;

    [SerializeField, Min(0f)] private float m_projectionAngle = 2f;
    [SerializeField, Min(0f)] private float m_projectionDistance = 0.1f;

    private List<BodyJoint> m_bodyParts = new List<BodyJoint>();

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

    public List<BodyJoint> joints => m_bodyParts;

    private void OnValidate()
    {
        SetJoints();

        foreach (var joint in m_bodyParts)
        {
            if (joint == null) continue;
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
        m_bodyParts.Clear();

        //m_bodyParts.Add(m_hips);
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

    private Vector3 GetAvgVelocity()
    {
        Vector3 sum = Vector3.zero;

        sum += m_hips.velocity;

        foreach (var joint in m_bodyParts)
        {
            sum += joint.velocity;
        }

        return sum / (1 + m_bodyParts.Count);
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
        m_hips.RandomRotateY();

        foreach (var joint in m_bodyParts)
        {
            joint.ResetBody();
        }

        Physics.SyncTransforms();
    }

    public void RandomResetRagdoll()
    {
        m_hips.ResetBody();
        m_hips.RandomRotate();

        foreach (var joint in m_bodyParts)
        {
            joint.ResetBody();
        }

        Physics.SyncTransforms();
    }
}

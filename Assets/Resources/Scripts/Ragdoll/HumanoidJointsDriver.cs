using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

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

    private Coroutine m_setBodyRoutine;

    public UnityAction<bool> OnBodyActive;

    public BodyHips hips => m_hips;
    public BodyJoint spine => m_spine;
    public BodyLimb leftFoot => m_lFoot;
    public BodyLimb rightFoot => m_rFoot;

    public Vector3 velocity => GetAvgVelocity();
    public Vector3 flatVelocity => new Vector3(velocity.x, 0, velocity.z);

    public Vector3 feetPos => (m_rFoot.position + m_lFoot.position) / 2;
    public Vector3 feetUp => (m_rFoot.up + m_lFoot.up) / 2;

    public Vector3 spineForward => (m_hips.flatForward + m_chest.flatForward).normalized;
    public Vector3 headForward => m_head.forward;
    public Vector3 headPosition => m_head.position;
    public Vector3 spineUp => (m_hips.up + m_spine.up + m_chest.up + m_head.up).normalized;

    public Vector3 orientForward
    {
        get { return m_orient.forward; }
        set { m_orient.forward = value; }
    }

    public Vector3 position => m_hips.position;

    public List<BodyJoint> joints => m_bodyParts;

    private void OnDrawGizmos()
    {
        Gizmos.DrawSphere(new Vector3(m_hips.transform.position.x, GetLowestPosOnY(), m_hips.transform.position.z), 0.1f);
    }

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

        foreach (var joint in m_bodyParts)
        {
            if (joint == null) continue;
            joint.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
            joint.SetProjectionSettings(m_projectionAngle, m_projectionDistance);
        }

        for (int j = 0; j < m_bodyParts.Count; j++)
        {
            Physics.IgnoreCollision(m_hips.collider, m_bodyParts[j].collider);
        }
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

        return sum / (m_bodyParts.Count + 1);
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

        float diff = m_hips.transform.position.y - GetLowestPosOnY();
        m_hips.transform.position = new Vector3(m_hips.transform.position.x, diff, m_hips.transform.position.z);

        if (Application.isPlaying)
        {
            m_hips.RandomRotateY();
        }

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

        float diff = m_hips.transform.position.y - GetLowestPosOnY();
        m_hips.transform.position = new Vector3(m_hips.transform.position.x, diff, m_hips.transform.position.z);

        foreach (var joint in m_bodyParts)
        {
            joint.ResetBody();
        }

        Physics.SyncTransforms();
    }

    public void SetBodyPartsPos(List<Transform> transforms)
    {
        if (m_bodyParts.Count + 1 < transforms.Count || !Application.isPlaying || m_setBodyRoutine != null)
        {
            return;
        }

        //m_setBodyRoutine = StartCoroutine(SetBodyRoutine(transforms));
    }

    private IEnumerator SetBodyRoutine(List<Transform> transforms)
    {
        OnBodyActive?.Invoke(false);

        m_hips.rb.angularVelocity *= 0;
        m_hips.rb.linearVelocity *= 0;
        m_hips.rb.Sleep();

        /*m_hips.rb.useGravity = false;
        m_hips.rb.isKinematic = true;*/
        foreach (var joint in m_bodyParts)
        {
            joint.SetJointStrength(0);

            joint.rb.angularVelocity *= 0;
            joint.rb.linearVelocity *= 0;
            joint.rb.Sleep();

            /*joint.rb.useGravity = false;
            joint.rb.isKinematic = true;*/
        }

        //yield return new WaitForFixedUpdate();

        int i = 0;

        m_orient.forward = Vector3.forward;

        m_hips.ResetBody();
        m_hips.transform.rotation = transforms[0].localRotation/* * Quaternion.Euler(0f, Random.Range(0f, 360f), 0f)*/;

        Physics.SyncTransforms();

        float diff = m_hips.transform.position.y - GetLowestPosOnY();
        m_hips.transform.position = new Vector3(m_hips.transform.position.x, diff, m_hips.transform.position.z);

        Physics.SyncTransforms();

        foreach (var joint in m_bodyParts)
        {
            i++;
            Vector3 d = (transforms[i].GetChild(0).position - transforms[i].position).normalized;
            Quaternion r = Quaternion.FromToRotation(joint.thirdAxis, joint.transform.parent.InverseTransformDirection(d));

            joint.transform.rotation = joint.transform.parent.rotation * r;
            joint.transform.localPosition = joint.localPosition;
            joint.SetTargetRotation(r);

            Physics.SyncTransforms();
        }

        yield return new WaitForFixedUpdate();

        m_hips.rb.useGravity = true;
        m_hips.rb.isKinematic = false;
        foreach (var joint in m_bodyParts)
        {
            joint.rb.useGravity = true;
            joint.rb.isKinematic = false;
        }

        m_setBodyRoutine = null;

        OnBodyActive?.Invoke(true);
    }

    private float GetLowestPosOnY()
    {
        float y = m_hips.collider.bounds.min.y;

        foreach (var joint in m_bodyParts)
        {
            y = Mathf.Min(joint.collider.bounds.min.y, y);
        }

        return y;
    }
}

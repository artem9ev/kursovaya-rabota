using System.Collections;
using UnityEngine;

[RequireComponent(typeof(ConfigurableJoint))]
public class MyJointPart : AgentBodyPart
{
    private ConfigurableJoint m_joint;

    private float m_maxJointSpring;
    private float m_jointDampen;
    private float m_maxJointForceLimit;

    public float strenth => m_joint.slerpDrive.maximumForce;
    public float maxStrenth => m_maxJointForceLimit;

    protected override void Awake()
    {
        base.Awake();

        m_joint = GetComponent<ConfigurableJoint>();
    }

    private void SetJointStrength(float strength)
    {
        var rawVal = (strength + 1) / 2 * m_maxJointForceLimit;
        var jd = new JointDrive
        {
            positionSpring = m_maxJointSpring,
            positionDamper = m_jointDampen,
            maximumForce = rawVal
        };
        m_joint.slerpDrive = jd;
    }

    private float TrySetMotion(IEnumerator actions, ConfigurableJointMotion motion)
    {
        float res = 0;
        if (motion == ConfigurableJointMotion.Limited && actions.MoveNext())
        {
            res = ((float)actions.Current + 1f) * 0.5f;
        }
        return res;
    }

    public void SetJointMove(IEnumerator actions)
    {
        float x = TrySetMotion(actions, m_joint.angularXMotion);
        float y = TrySetMotion(actions, m_joint.angularYMotion);
        float z = TrySetMotion(actions, m_joint.angularZMotion);

        float xRot = Mathf.Lerp(m_joint.lowAngularXLimit.limit, m_joint.highAngularXLimit.limit, x);
        float yRot = Mathf.Lerp(-m_joint.angularYLimit.limit, m_joint.angularYLimit.limit, y);
        float zRot = Mathf.Lerp(-m_joint.angularZLimit.limit, m_joint.angularZLimit.limit, z);

        m_joint.targetRotation = Quaternion.Euler(xRot, yRot, zRot);

        if (actions.MoveNext()) 
        {
            SetJointStrength((float)actions.Current);
        }
    }

    public void ResetBody(bool randRotation = false)
    {
        m_joint.slerpDrive = new JointDrive
        {
            positionSpring = 0,
            positionDamper = 0,
            maximumForce = 0
        };

        m_joint.targetRotation = Quaternion.Euler(0, 0, 0);

        base.ResetBody();

        if (randRotation) 
        {
            m_transform.localRotation = Quaternion.Euler(0, Random.value * 360f, 0);
        }

        m_joint.slerpDrive = new JointDrive
        {
            positionSpring = m_maxJointSpring,
            positionDamper = m_jointDampen,
            maximumForce = 0
        };
    }

    public void SetSlerpDrive(float spring, float dampen, float maxForce)
    {
        m_maxJointSpring = spring;
        m_jointDampen = dampen;
        m_maxJointForceLimit = maxForce;
    }

    public void SetProjectionSettings(float angle, float distance)
    {
        m_joint = m_joint != null ? m_joint : GetComponent<ConfigurableJoint>();

        m_joint.projectionAngle = angle;
        m_joint.projectionDistance = distance;
    }
}

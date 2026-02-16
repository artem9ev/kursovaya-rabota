using System.Collections;
using Unity.MLAgents.Sensors;
using UnityEngine;

[RequireComponent(typeof(ConfigurableJoint))]
public class BodyJoint : BodyPart
{
    protected ConfigurableJoint m_joint;

    private float m_boneLenght;

    Vector3 m_thirdAxis, m_targetForward;

    private float m_maxJointSpring;
    private float m_jointDampen;
    private float m_maxJointForceLimit;

    public float boneLength => m_boneLenght;

    public float strenth => m_joint.slerpDrive.maximumForce;
    public float maxStrenth => m_maxJointForceLimit;

    public Vector3 thirdAxis => m_thirdAxis;
    public Vector3 targetForward => m_targetForward;    

    protected override void Awake()
    {
        base.Awake();

        m_joint = GetComponent<ConfigurableJoint>();
        m_thirdAxis = Vector3.Cross(m_joint.axis, m_joint.secondaryAxis).normalized;
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.yellow;

        //Gizmos.DrawRay(transform.position, transform.parent.TransformDirection(m_joint.targetRotation * m_thirdAxis) * 0.5f);
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

    public void SetJointStrength(float strength)
    {
        var rawVal = Mathf.Clamp01(strength) * m_maxJointForceLimit;
        var jd = new JointDrive
        {
            positionSpring = m_maxJointSpring,
            positionDamper = m_jointDampen,
            maximumForce = rawVal
        };
        m_joint.slerpDrive = jd;
    }

    public override void SetContinuousActios(IEnumerator actions)
    {
        float x = TrySetMotion(actions, m_joint.angularXMotion);
        float y = TrySetMotion(actions, m_joint.angularYMotion);
        float z = TrySetMotion(actions, m_joint.angularZMotion);

        float xRot = Mathf.Lerp(m_joint.lowAngularXLimit.limit, m_joint.highAngularXLimit.limit, x);
        float yRot = Mathf.Lerp(-m_joint.angularYLimit.limit, m_joint.angularYLimit.limit, y);
        float zRot = Mathf.Lerp(-m_joint.angularZLimit.limit, m_joint.angularZLimit.limit, z);

        m_joint.targetRotation = Quaternion.Euler(xRot, yRot, zRot);

        m_targetForward = m_transform.TransformDirection(m_joint.targetRotation * m_thirdAxis);

        if (actions.MoveNext()) 
        {
            float strength = ((float)actions.Current + 1) / 2;
            SetJointStrength(strength);
        }
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

    public void SetTargetRotation(Quaternion rotation)
    {
        m_joint.targetRotation = rotation;
    }

    public virtual new void GetObservations(VectorSensor sensor)
    {
        base.GetObservations(sensor);

        sensor.AddObservation(maxStrenth > 0 ? strenth / maxStrenth : 0f); // +1
    }
}

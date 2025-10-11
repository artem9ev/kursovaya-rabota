using UnityEngine;

public class BoneTest : MonoBehaviour
{
    [Header("Params")]
    [SerializeField][Range(-1, 1)] private float m_thighX = 0f;
    [SerializeField][Range(-1, 1)] private float m_thighY = 0f;
    [SerializeField][Range(-1, 1)] private float m_knee = 0f;
    [Header("Right Leg")]
    [SerializeField] private MyJointPart m_rLeg;
    [SerializeField] private MyJointPart m_rKnee;
    [SerializeField] private MyJointPart m_rFoot;
    [Header("Left Leg")]
    [SerializeField] private MyJointPart m_lLeg;
    [SerializeField] private MyJointPart m_lKnee;
    [SerializeField] private MyJointPart m_lFoot;
    [Header("Joint Drive Settings")]
    [SerializeField] private float maxJointSpring;
    [SerializeField] private float jointDampen;
    [SerializeField] private float maxJointForceLimit;

    private void OnValidate()
    {
        //ConfigSlerpDrive();
    }

    private void Awake()
    {
        //ConfigSlerpDrive();
    }

    private void FixedUpdate()
    {
        ConfigSlerpDrive();

        Debug.Log(m_knee);

        m_rLeg.SetTargetRotation(m_thighX, m_thighY, 0);
        m_lLeg.SetTargetRotation(m_thighX, m_thighY, 0);

        m_rKnee.SetTargetRotation(m_knee, 0, 0);
        m_lKnee.SetTargetRotation(m_knee, 0, 0);
    }

    private void ConfigSlerpDrive()
    {
        m_rLeg.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_rKnee.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_rFoot.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);

        m_lLeg.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_lKnee.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
        m_lFoot.SetSlerpDrive(maxJointSpring, jointDampen, maxJointForceLimit);
    }
}

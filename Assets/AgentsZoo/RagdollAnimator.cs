using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RagdollAnimator : MonoBehaviour
{
    [SerializeField] HumanoidRig m_target;
    [Header("Joint Drive Settings")]
    [SerializeField] private float jointSpring;
    [SerializeField] private float jointDampen;
    [SerializeField] private float maxForce;
    [SerializeField] private bool m_useGravity = false;

    private HumanoidRig m_ragdoll;

    private List<Transform> m_targets = new List<Transform>();
    private List<ConfigurableJoint> m_joints = new List<ConfigurableJoint>();

    private void Awake()
    {
        m_ragdoll = GetComponent<HumanoidRig>();

        m_joints.Add(m_ragdoll.spine.GetComponent<ConfigurableJoint>());
        m_joints.Add(m_ragdoll.chest.GetComponent<ConfigurableJoint>());
        m_joints.Add(m_ragdoll.head.GetComponent<ConfigurableJoint>());

        m_joints.Add(m_ragdoll.rightLeg.GetComponent<ConfigurableJoint>());
        m_joints.Add(m_ragdoll.rightKnee.GetComponent<ConfigurableJoint>());
        m_joints.Add(m_ragdoll.rightFoot.GetComponent<ConfigurableJoint>());

        m_joints.Add(m_ragdoll.leftLeg.GetComponent<ConfigurableJoint>());
        m_joints.Add(m_ragdoll.leftKnee.GetComponent<ConfigurableJoint>());
        m_joints.Add(m_ragdoll.leftFoot.GetComponent<ConfigurableJoint>());

        m_joints.Add(m_ragdoll.rightArm.GetComponent<ConfigurableJoint>());
        m_joints.Add(m_ragdoll.rightElbow.GetComponent<ConfigurableJoint>());

        m_joints.Add(m_ragdoll.leftArm.GetComponent<ConfigurableJoint>());
        m_joints.Add(m_ragdoll.leftElbow.GetComponent<ConfigurableJoint>());

        m_targets.Add(m_target.spine);
        m_targets.Add(m_target.chest);
        m_targets.Add(m_target.head);

        m_targets.Add(m_target.rightLeg);
        m_targets.Add(m_target.rightKnee);
        m_targets.Add(m_target.rightFoot);

        m_targets.Add(m_target.leftLeg);
        m_targets.Add(m_target.leftKnee);
        m_targets.Add(m_target.leftFoot);

        m_targets.Add(m_target.rightArm);
        m_targets.Add(m_target.rightElbow);

        m_targets.Add(m_target.leftArm);
        m_targets.Add(m_target.leftElbow);

        foreach (ConfigurableJoint joint in m_joints)
        {
            joint.GetComponent<Rigidbody>().useGravity = m_useGravity;

            JointDrive drive = new JointDrive()
            {
                positionSpring = jointSpring,
                positionDamper = jointDampen,
                maximumForce = maxForce
            };

            joint.slerpDrive = drive;
        }
    }

    private void Start()
    {
        
    }

    private void Update()
    {
        IEnumerator targets = m_targets.GetEnumerator();
        IEnumerator joints = m_joints.GetEnumerator();

        while (targets.MoveNext() && joints.MoveNext()) 
        {
            Transform target = (Transform)targets.Current;
            ConfigurableJoint joint = (ConfigurableJoint)joints.Current;

            float xRot = target.eulerAngles.y;

            joint.targetRotation = Quaternion.Euler(xRot, 0, 0);
        }
    }
}

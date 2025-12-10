using UnityEngine;

public class HumanoidRig : MonoBehaviour
{
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
    [Header("Left Arm")]
    [SerializeField] private Transform m_lArm;
    [SerializeField] private Transform m_lElbow;

    public Transform hips => m_hips;
    public Transform spine => m_spine;
    public Transform chest => m_chest;
    public Transform head => m_head;
    public Transform rightLeg => m_rLeg;
    public Transform rightKnee => m_rKnee;
    public Transform rightFoot => m_rFoot;
    public Transform leftLeg => m_lLeg;
    public Transform leftKnee => m_lKnee;
    public Transform leftFoot => m_lFoot;
    public Transform rightArm => m_rArm;
    public Transform rightElbow => m_rElbow;
    public Transform leftArm => m_lArm;
    public Transform leftElbow => m_lElbow;
}

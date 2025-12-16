using System.Collections.Generic;
using Unity.MLAgents;
using Unity.MLAgents.Actuators;
using Unity.MLAgents.Sensors;
using UnityEngine;
using UnityEngine.Events;

public class NavigationAgent : Agent
{
    [Header("Params")]
    [SerializeField] private Transform m_head;
    [SerializeField] private float m_turnAngX = 45f;
    [SerializeField] private float m_turnAngY = 90f;

    [Header("Penalties")]
    [SerializeField, Min(0)] private float m_fallOutPenalty = 5f;
    [SerializeField, Min(0)] private float m_wallHitPenalty = 0.01f;

    [Header("Rewards")]
    [SerializeField, Min(0)] private float m_timeReward = 0.01f;
    [SerializeField, Min(0)] private float m_targetHitReward = 1f;

    private Transform m_transform;
    private CharacterMovement m_movement;

    private List<Collider> m_hittedTargets = new List<Collider>();

    private Vector3 m_startPos;
    private Quaternion m_headRot;

    private bool m_isWallHitted;
    private bool m_isTargetHitted;

    public UnityAction OnBegin;

    protected override void Awake()
    {
        base.Awake();

        m_transform = transform;
        m_movement = GetComponent<CharacterMovement>();
    
        m_startPos = m_transform.position;

        m_headRot = m_head.localRotation;
    }

    protected override void OnEnable()
    {
        base.OnEnable();
    }

    protected override void OnDisable()
    {
        base.OnDisable();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("target"))
        {
            m_hittedTargets.Add(other);

            other.gameObject.SetActive(false);

            AddReward(m_targetHitReward);

            m_isTargetHitted = true;
        }
    }

    private void OnControllerColliderHit(ControllerColliderHit hit)
    {
        if (hit.normal.y < Mathf.Sin(m_movement.maxMoveAngle * Mathf.Deg2Rad))
        {
            AddReward(-m_wallHitPenalty);
            m_isWallHitted = true;
        }
    }

    private void FixedUpdate()
    {
        AddReward(m_timeReward);

        if (!Physics.SphereCast(m_transform.position + m_transform.up * m_movement.radius * 1.5f, m_movement.radius, Vector3.down * 20, out RaycastHit hit, 20))
        {
            AddReward(-m_fallOutPenalty);

            EndEpisode();
        }
    }

    public override void OnEpisodeBegin()
    {
        foreach (var target in m_hittedTargets)
        {
            target.gameObject.SetActive(true);
        }
        m_hittedTargets.Clear();

        m_transform.position = m_startPos;
        m_transform.rotation = Quaternion.Euler(0, Random.Range(0, 360), 0);

        OnBegin?.Invoke();
    }

    public override void CollectObservations(VectorSensor sensor)
    {
        sensor.AddObservation(m_movement.velocity);
        sensor.AddObservation(m_transform.position);

        sensor.AddObservation(m_transform.rotation);
        sensor.AddObservation(m_head.localRotation);

        sensor.AddObservation(m_movement.isGrounded);
        sensor.AddObservation(m_isWallHitted);
        sensor.AddObservation(m_isTargetHitted);

        m_isWallHitted = false;
        m_isTargetHitted = false;
    }

    public override void OnActionReceived(ActionBuffers actionsBuffer)
    {
        ActionSegment<float> continuous = actionsBuffer.ContinuousActions;

        /*Vector2 input = new Vector2(continuous[0], continuous[1]);

        m_movement.OnMove(input.magnitude > 0.4f ? input : Vector2.zero);

        float rotation = continuous[2];

        m_movement.OnRotate(Mathf.Abs(rotation) > 0.5f ? rotation * 2 - 1 : 0);

        m_head.localRotation = m_headRot * Quaternion.Euler(m_turnAngX * continuous[3], m_turnAngY * continuous[4], 0);*/

        ActionSegment<int> descrete = actionsBuffer.DiscreteActions;

        Vector2 input = Vector2.zero;

        switch ((DescreteInput)descrete[1])
        {
            case DescreteInput.Positive:
                input += Vector2.up;
                break;
            case DescreteInput.Negative:
                input -= Vector2.up;
                break;
            default:
                break;
        }
        switch ((DescreteInput)descrete[2])
        {
            case DescreteInput.Positive:
                input += Vector2.right;
                break;
            case DescreteInput.Negative:
                input -= Vector2.right;
                break;
            default:
                break;
        }

        m_movement.OnMove(input);

        float rotation = 0;

        switch ((DescreteInput)descrete[2])
        {
            case DescreteInput.Positive:
                rotation = 1;
                break;
            case DescreteInput.Negative:
                rotation = -1;
                break;
            default:
                break;
        }

        m_movement.OnRotate(Mathf.Abs(rotation) > 0.5f ? rotation * 2 - 1 : 0);

        m_head.localRotation = m_headRot * Quaternion.Euler(m_turnAngX * continuous[0], m_turnAngY * continuous[1], 0);
    }

    public enum DescreteInput
    {
        Positive,
        Negative,
        Zero
    }

    public override void Heuristic(in ActionBuffers actionsOut)
    {

    }
}

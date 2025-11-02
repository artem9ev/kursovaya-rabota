using System.Collections;
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
    [SerializeField] private float m_headRotationSpeed = 360f;

    [SerializeField] private RayPerceptionSensorComponent3D m_rayPerception;

    [Header("Penalties")]
    [SerializeField, Min(0)] private float m_fallOutPenalty = 5f;
    [SerializeField, Min(0)] private float m_wallHitPenalty = 0.01f;
    [SerializeField, Min(0)] private float m_turnPenalty = 0.005f;

    [Header("Rewards")]
    [SerializeField, Min(0)] private float m_timeReward = 0.01f;
    [SerializeField, Min(0)] private float m_targetHitReward = 1f;
    [SerializeField, Min(0)] private float m_lookAtReward = 0.005f;

    private Transform m_transform;
    private CharacterMovement m_movement;

    private Vector3 m_startPos;
    private Quaternion m_headStartLocalRotation;
    private Quaternion m_headTargetRotation;

    private bool m_isWallHitted;
    private bool m_isTargetHitted;
    private bool m_isEpisodeBegin;

    private Coroutine m_resetPositionRoutine;

    public UnityAction OnBegin;
    public UnityAction OnHitTarget;

    protected override void Awake()
    {
        base.Awake();

        m_transform = transform;
        m_movement = GetComponent<CharacterMovement>();
    
        m_startPos = m_transform.position;

        m_headStartLocalRotation = m_head.localRotation;
    }

    protected override void OnEnable()
    {
        base.OnEnable();
    }

    protected override void OnDisable()
    {
        base.OnDisable();

        StopAllCoroutines();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("target"))
        {
            other.gameObject.SetActive(false);

            AddReward(m_targetHitReward);

            m_isTargetHitted = true;
        }
    }

    private void OnControllerColliderHit(ControllerColliderHit hit)
    {
        if (m_isEpisodeBegin && hit.normal.y < Mathf.Sin(m_movement.maxMoveAngle * Mathf.Deg2Rad))
        {
            m_isEpisodeBegin = false;
            AddReward(-m_wallHitPenalty);
            m_isWallHitted = true;
            EndEpisode();
        }
    }

    private void FixedUpdate()
    {
        RaycastHit hit;
        if (Physics.SphereCast(m_rayPerception.transform.position, m_rayPerception.SphereCastRadius, m_rayPerception.transform.forward, out hit, m_rayPerception.RayLength))
        {
            if (hit.transform.CompareTag("target"))
            {
                AddReward(m_lookAtReward * hit.distance / m_rayPerception.RayLength);
            }
        }

        AddReward(m_timeReward);

        if (!Physics.SphereCast(m_transform.position + m_transform.up * m_movement.radius * 1.5f, m_movement.radius, Vector3.down * 20, out hit, 20))
        {
            AddReward(-m_fallOutPenalty);
            EndEpisode();
        }
    }

    private void Update()
    {
        float ang = Quaternion.Angle(m_head.localRotation, m_headTargetRotation);
        float t = 1;
        if (ang > m_headRotationSpeed * Time.deltaTime) 
        {
            t = m_headRotationSpeed * Time.deltaTime / ang;
        }

        m_head.localRotation = Quaternion.Lerp(m_head.localRotation, m_headTargetRotation, t);
    }

    private new void EndEpisode()
    {
        if (m_resetPositionRoutine == null) 
        {
            m_resetPositionRoutine = StartCoroutine(ResetPositionRoutine());
        }
    }

    private IEnumerator ResetPositionRoutine()
    {
        m_movement.ResetVelocity();
        m_movement.controllerEnabled = false;
        yield return null;
        m_transform.position = m_startPos;
        m_transform.rotation = Quaternion.Euler(0, Random.Range(0, 360), 0);
        yield return null;
        m_movement.controllerEnabled = true;

        m_resetPositionRoutine = null;

        base.EndEpisode();
    }

    public override void OnEpisodeBegin()
    {

        m_isEpisodeBegin = true;
        m_isWallHitted = false;
        m_isTargetHitted = false;

        OnBegin?.Invoke();
    }

    public override void CollectObservations(VectorSensor sensor)
    {
        sensor.AddObservation(m_movement.velocity); // 3
        sensor.AddObservation(m_transform.position); // 3

        sensor.AddObservation(m_transform.rotation); // 4
        sensor.AddObservation(m_head.localRotation); // 4

        sensor.AddObservation(m_movement.isGrounded); // 1
        //sensor.AddObservation(m_isWallHitted);
        //sensor.AddObservation(m_isTargetHitted);

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
        float rotPenalty = m_turnPenalty;

        switch ((DescreteInput)descrete[2])
        {
            case DescreteInput.Positive:
                rotation = 1;
                break;
            case DescreteInput.Negative:
                rotation = -1;
                break;
            default:
                rotPenalty = 0;
                break;
        }

        AddReward(rotPenalty);

        m_movement.OnRotate(Mathf.Abs(rotation) > 0.5f ? rotation * 2 - 1 : 0);

        m_headTargetRotation = m_headStartLocalRotation * Quaternion.Euler(m_turnAngX * continuous[0], m_turnAngY * continuous[1], 0);
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

using System.Collections;
using System.Collections.Generic;
using Unity.MLAgents;
using Unity.MLAgents.Actuators;
using Unity.MLAgents.Policies;
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
    [SerializeField, Min(0)] private int m_actionsMemorySize = 3;

    private Transform m_transform;
    private CharacterMovement m_movement;

    private Vector3 m_startPos;
    private Quaternion m_headStartLocalRotation;
    private Quaternion m_headTargetRotation;

    private Coroutine m_resetPositionRoutine;

    public UnityAction OnBegin;
    public UnityAction OnHitTarget;

    private List<float> m_continuousActions;
    private List<int> m_descreteActions;

    private List<float> continuousActions
    {
        get 
        {
            if (m_continuousActions == null)
            {
                BehaviorParameters beh = GetComponent<BehaviorParameters>();
                m_continuousActions = new List<float>();
                for (int i = 0; i < m_actionsMemorySize * beh.BrainParameters.ActionSpec.NumContinuousActions; i++)
                {
                    m_continuousActions.Add(0f);
                }
            }
            return m_continuousActions;
        }
    }

    private List<int> descreteActions
    {
        get
        {
            if (m_descreteActions == null)
            {
                BehaviorParameters beh = GetComponent<BehaviorParameters>();
                m_descreteActions = new List<int>();
                for (int i = 0; i < m_actionsMemorySize * beh.BrainParameters.ActionSpec.NumDiscreteActions; i++)
                {
                    m_descreteActions.Add(0);
                }
            }
            return m_descreteActions;
        }
    }

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

            OnHitTarget?.Invoke();
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

    public new void EndEpisode()
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
        OnBegin?.Invoke();
    }

    public override void CollectObservations(VectorSensor sensor)
    {
        sensor.AddObservation(m_movement.velocity); // 3
        sensor.AddObservation(m_transform.position); // 3

        sensor.AddObservation(m_transform.rotation); // 4
        sensor.AddObservation(m_head.localRotation); // 4

        sensor.AddObservation(m_movement.isGrounded); // 1

        foreach (var continuousAction in continuousActions)
        {
            sensor.AddObservation(continuousAction);
        }
        foreach (var descreteAction in descreteActions)
        {
            sensor.AddObservation(descreteAction);
        }
    }

    public override void OnActionReceived(ActionBuffers actionsBuffer)
    {
        ActionSegment<float> continuous = actionsBuffer.ContinuousActions;

        m_headTargetRotation = m_headStartLocalRotation * Quaternion.Euler(m_turnAngX * continuous[0], m_turnAngY * continuous[1], 0);

        /*Vector2 input = new Vector2(continuous[0], continuous[1]);

        m_movement.OnMove(input.magnitude > 0.4f ? input : Vector2.zero);

        float rotation = continuous[2];

        m_movement.OnRotate(Mathf.Abs(rotation) > 0.5f ? rotation * 2 - 1 : 0);

        m_head.localRotation = m_headRot * Quaternion.Euler(m_turnAngX * continuous[3], m_turnAngY * continuous[4], 0);*/

        ActionSegment<int> descrete = actionsBuffer.DiscreteActions;

        Vector2 input = Vector2.zero;

        if (descrete[0] == 1)
        {
            input += Vector2.up;
        }
        else if (descrete[0] == 2)
        {
            input -= Vector2.up;
        }

        if (descrete[1] == 1)
        {
            input += Vector2.right;
        }
        else if (descrete[1] == 2)
        {
            input -= Vector2.right;
        }

        m_movement.OnMove(input);

        float rotation = 0;

        if (descrete[2] == 1)
        {
            rotation = 1;
        }
        else if (descrete[2] == 2)
        {
            rotation = -1;
        }

        m_movement.OnRotate(Mathf.Abs(rotation) > 0.5f ? rotation * 2 - 1 : 0);

        // --------------------
        foreach (float action in continuous)
        {
            continuousActions.RemoveAt(0);
            continuousActions.Add(action);
        }

        foreach (int action in descrete) 
        {
            descreteActions.RemoveAt(0);
            descreteActions.Add(action);
        }
    }

    public override void Heuristic(in ActionBuffers actionsOut)
    {

    }
}

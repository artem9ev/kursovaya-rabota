using System.Collections;
using Unity.MLAgents.Sensors;
using UnityEngine;

public class BodyLimb : BodyJoint
{
    public enum Connection
    {
        None = 0,
        Fixed = 1
    }

    [SerializeField] private bool m_haveToFixPos;

    //private Connection m_connection;
    private Vector3? m_fixedPosition;

    private new void OnCollisionExit(Collision collision)
    {
        base.OnCollisionExit(collision);

        if (!isGrounded)
        {
            m_haveToFixPos = false;
        }
    }

    private void FixedUpdate()
    {
        if (m_haveToFixPos)
        {
            if (m_fixedPosition == null)
            {
                m_fixedPosition = m_rb.position;
            }

            Vector3 posDifference = m_fixedPosition.Value - m_rb.position;
            //m_rb.AddForceAtPosition(posDifference * m_stabilizationAcceleration / Time.fixedDeltaTime - m_rb.GetPointVelocity(m_rb.position), m_rb.position, ForceMode.VelocityChange);

            Rigidbody connectedRB = m_joint.connectedBody;

            connectedRB.AddForceAtPosition(posDifference / Time.fixedDeltaTime - connectedRB.GetPointVelocity(m_rb.position), m_rb.position, ForceMode.VelocityChange);

            Debug.DrawRay(m_fixedPosition.Value, Vector3.up, Color.cyan);
            Debug.DrawLine(m_fixedPosition.Value, m_rb.position, Color.cyan);
        }

        if (!m_haveToFixPos && m_fixedPosition != null)
        {
            m_fixedPosition = null;
            m_joint.targetPosition = Vector3.zero;
        }
    }

    public override void ResetBody()
    {
        if (m_fixedPosition != null)
        {
            m_fixedPosition = null;
        }

        base.ResetBody();
    }

    public override void SetDiscreteActios(IEnumerator actions)
    {
        /*if (actions.MoveNext())
        {
            if (isGrounded)
            {
                m_haveToFixPos = (Connection)actions.Current == Connection.Fixed;
            }
        }*/
    }

    public virtual new void GetObservations(VectorSensor sensor)
    {
        base.GetObservations(sensor);

        //sensor.AddObservation(m_haveToFixPos); // +1
    }
}

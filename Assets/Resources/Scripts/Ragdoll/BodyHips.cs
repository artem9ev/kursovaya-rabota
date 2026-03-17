using System.Collections;
using UnityEngine;

public class BodyHips : BodyPart
{
    [SerializeField] private Vector3 m_torqueForces = new Vector3(300f, 400f, 400f);

    private Vector3 m_torqueAction;

    private void FixedUpdate()
    {
        m_rb.AddRelativeTorque(m_torqueAction * Time.fixedDeltaTime);
    }

    public override void SetContinuousActios(IEnumerator actions)
    {
        base.SetContinuousActios(actions);

        if (actions.MoveNext())
        {
            m_torqueAction.x = (float)actions.Current * m_torqueForces.x;
        }
        if (actions.MoveNext())
        {
            m_torqueAction.y = (float)actions.Current * m_torqueForces.y;
        }
        if (actions.MoveNext())
        {
            m_torqueAction.z = (float)actions.Current * m_torqueForces.z;
        }
    }

    public void RandomRotateY()
    {
        transform.localRotation = Quaternion.Euler(0f, Random.Range(0f, 360f), 0f);
    }

    public void RandomRotate()
    {
        transform.localRotation = Quaternion.Euler(Random.Range(0f, 360f), Random.Range(0f, 360f), Random.Range(0f, 360f));
    }
}

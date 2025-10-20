using UnityEngine;
using UnityEngine.Events;

public class MyMainBodyPart : AgentBodyPart
{
    public override void ResetBody()
    {
        base.ResetBody();

        m_transform.localRotation = Quaternion.Euler(0f, Random.Range(0f, 360f), 0f);
    }
}

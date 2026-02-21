using System.Collections.Generic;
using UnityEngine;

public class CollisionsDisabler : MonoBehaviour
{
    [SerializeField] private List<HumanoidJointsDriver> m_jointDrivers;

    void Start()
    {
        for (int i = 0; i < m_jointDrivers.Count; ++i) 
        {
            for (int j = i + 1; j < m_jointDrivers.Count; j++) 
            {
                MakeIgnore(m_jointDrivers[i], m_jointDrivers[j]);
            }
        }
    }

    private void MakeIgnore(HumanoidJointsDriver driver1, HumanoidJointsDriver driver2)
    {
        Physics.IgnoreCollision(driver1.hips.collider, driver2.hips.collider);

        for (int i = 0; i < driver2.joints.Count; i++) 
        {
            Physics.IgnoreCollision(driver1.hips.collider, driver2.joints[i].collider);
        }

        for (int i = 0; i < driver1.joints.Count; i++)
        {
            Physics.IgnoreCollision(driver2.hips.collider, driver1.joints[i].collider);
        }

        for (int i = 0; i < driver1.joints.Count; i++)
        {
            for (int j = 0; j < driver2.joints.Count; j++)
            {
                Physics.IgnoreCollision(driver1.joints[i].collider, driver2.joints[j].collider);
            }
        }
    }
}

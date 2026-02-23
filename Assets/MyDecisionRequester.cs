using Unity.MLAgents;
using UnityEngine;

public class MyDecisionRequester : DecisionRequester
{
    private static int m_counter = 0;

    private void Start()
    {
        m_counter = ++m_counter % DecisionPeriod;

        DecisionStep = m_counter;
    }
}

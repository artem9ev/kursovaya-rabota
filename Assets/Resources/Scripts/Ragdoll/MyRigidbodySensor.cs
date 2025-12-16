using Unity.MLAgents.Sensors;
using UnityEngine;

public class MyRigidbodySensor : SensorComponent
{
    [SerializeField] private RigidBodySensorComponent m_sensor;

    public override ISensor[] CreateSensors()
    {
        return m_sensor.CreateSensors();
    }
}

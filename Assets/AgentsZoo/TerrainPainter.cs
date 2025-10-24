using UnityEngine;

[ExecuteInEditMode]
public class TerrainPainter : MonoBehaviour
{
    [SerializeField, Range(0, 90)] private float m_angel = 45f;

    public float normal => Mathf.Sin(m_angel * Mathf.Deg2Rad);
}

using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(TerrainPainter))]
public class MyTerrainEditor : Editor
{
    private Terrain m_terrain;
    private TerrainPainter m_painter;

    private void OnEnable()
    {
        if (targets.Length == 0)
        {
            return;
        }
        m_painter = (TerrainPainter)target;

        m_terrain = m_painter.GetComponent<Terrain>();

        EditorApplication.update += Update;
    }

    private void OnDisable()
    {
        EditorApplication.update -= Update;
    }

    private void Update()
    {
        if (Application.isPlaying || m_painter == null) return;

        Draw();
    }

    public void Draw()
    {
        TerrainData data = m_terrain.terrainData;

        float[,,] alphamaps = data.GetAlphamaps(0, 0, data.alphamapWidth, data.alphamapHeight);

        float alphaRes = data.alphamapResolution;

        for (int x = 0; x < alphaRes; x++)
        {
            for (int y = 0; y < alphaRes; y++)
            {
                if (data.GetInterpolatedNormal(y / alphaRes, x / alphaRes).y > m_painter.normal)
                {
                    alphamaps[x, y, 0] = 1f;
                    alphamaps[x, y, 1] = 0f;
                }
                else
                {
                    alphamaps[x, y, 0] = 0f;
                    alphamaps[x, y, 1] = 1f;
                }
            }
        }

        data.SetAlphamaps(0, 0, alphamaps);
    }
}

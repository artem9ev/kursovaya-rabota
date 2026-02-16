using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(HumanoidJointsDriver))]
public class HumanoidJointsDriverEditor : Editor
{
    public override void OnInspectorGUI()
    {
        HumanoidJointsDriver jointsDriver = (HumanoidJointsDriver)target;

        base.OnInspectorGUI();

        int group = Undo.GetCurrentGroup();

        Undo.RecordObject(jointsDriver.hips, "hips change");

        foreach (var joint in jointsDriver.joints)
        {
            Undo.RecordObject(joint, $"joint {joint.name} change");
        }

        if (GUILayout.Button("Reset"))
        {
            jointsDriver.ResetRagdoll();
        }

        EditorUtility.SetDirty(jointsDriver);
        EditorUtility.SetDirty(jointsDriver.hips);

        foreach (var joint in jointsDriver.joints)
        {
            EditorUtility.SetDirty(joint);
        }

        Undo.SetCurrentGroupName("Reset Ragdoll");
        Undo.IncrementCurrentGroup();
    }
}

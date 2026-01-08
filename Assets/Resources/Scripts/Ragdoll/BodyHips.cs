using UnityEngine;

public class BodyHips : BodyPart
{
    public void RandomRotateY()
    {
        transform.localRotation = Quaternion.Euler(0f, Random.Range(0f, 360f), 0f);
    }

    public void RandomRotate()
    {
        transform.localRotation = Quaternion.Euler(Random.Range(0f, 360f), Random.Range(0f, 360f), Random.Range(0f, 360f));
    }
}

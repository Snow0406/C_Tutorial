using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    public Transform target;
    private float offset = -10f;

    public float moveSpeed = 0.1f;
    // Start is called before the first frame update
    private void LateUpdate()
    {
        Vector3 aPos = target.position;
        aPos.z = offset;
            
        Vector3 pos = Vector3.Lerp(transform.position, aPos, moveSpeed);
        transform.position = pos;
    }
}

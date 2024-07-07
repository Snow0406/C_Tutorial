using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Timeline;

public class EnemyController : MonoBehaviour
{
    [SerializeField] private Transform target;
    [SerializeField] private float hp;
    [SerializeField] private float atk;

    [SerializeField] private float attackCool7 = 2f;
    [SerializeField] private float lastAttack;
    [SerializeField] private bool isLife;
    
   
    // Start is called before the first frame update
    void Start()
    {
        hp = 100f;
        atk = 10f;
        isLife = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (!isLife) return;
        if (!target) return;

        float distance = Vector2.Distance(transform.position, target.position);

        if (distance < 1f)
        {      
            if(Time.time > lastAttack + attackCool7) Attack();
            return;
        }
        
            Vector2 direction = target.position - transform.position;

            direction.Normalize();

            Vector2 newPos = (Vector2)transform.position + direction * 3 * Time.deltaTime;
            transform.position = newPos;
        
    }
    void Attack()
    {
        //Debug.Log(atk);
        rPlayerController.Instanse.SubHp(atk);
        lastAttack = Time.time;
    }
    
    public void SubHp(float num)
    {
        hp -= num;
        Debug.Log("enemy hp : " + hp);

        if (hp > 0) return;
        
        Debug.Log("enemy die");
        isLife = false;
        rPlayerController.Instanse.killCount++;
        //UnityEditor.EditorApplication.isPlaying = false;

    }
}


using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Timeline;

public class rPlayerController : MonoBehaviour
{
    [SerializeField] private Rigidbody2D _rigidbody2D;
    private Vector2 movement;
    [SerializeField] private LayerMask enemyLayer;

    [SerializeField] private float hp;
    [SerializeField] private float moveSpeed = 10f;

    [SerializeField] private float atk;

    public static rPlayerController Instanse;
    
    [SerializeField] private float attackCool7 = 1f;
    [SerializeField] private float lastAttack;

    [SerializeField] public int killCount;
    // Start is called before the first frame update
    void Start()
    {
        Instanse = this;
        _rigidbody2D = GetComponent<Rigidbody2D>();
        hp = 100f;
        atk = 50f;
        killCount = 0;
    }

    private void Update()
    {
        Move();
        if (Input.GetKeyDown(KeyCode.Space) && Time.time > lastAttack + attackCool7) Attack();

        if (killCount == 3)
        {
            Debug.LogError("Game Win");
            UnityEditor.EditorApplication.isPlaying = false;
        }
    }
    
    void FixedUpdate()
    {
        _rigidbody2D.MovePosition(_rigidbody2D.position + (moveSpeed * Time.fixedDeltaTime * movement));
    }
    
    
    private void Move()
    {
        movement.x = Input.GetAxisRaw("Horizontal");
        movement.y = Input.GetAxisRaw("Vertical");
    }
    
    private void Attack()
    {
        Debug.Log("Attack !");
        
        Collider2D enemy = Physics2D.OverlapCircle(transform.position, 3f, enemyLayer);
        if (enemy != null)
        {
            enemy.GetComponent<EnemyController>().SubHp(atk);
        }

        lastAttack = Time.time;
    }

    public void SubHp(float num)
    {
        hp -= num;
        Debug.Log("player hp : " + hp);

        if (hp > 0) return;
        
        Debug.Log("player die");
        UnityEditor.EditorApplication.isPlaying = false;
    }
}

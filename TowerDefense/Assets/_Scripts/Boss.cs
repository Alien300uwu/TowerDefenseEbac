using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
public class Boss : MonoBehaviour
{
    public GameObject Objetivo;
    public int vida = 100;

    public Animator Anim;

    // Start is called before the first frame update
    void Start()
    {
        GetComponent<NavMeshAgent>().SetDestination(Objetivo.transform.position);
        Anim = GetComponent<Animator>();
        Anim.SetBool("IsMoving",true);
    }

    private void OnEnable()
    {
        Objetivo = GameObject.Find("Objetivo");
    }
    private void OnDisable()
    {

    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.tag == "Objetivo")
        {
            Anim.SetBool("IsMoving", false);
            Anim.SetTrigger("OnObjectiveReached");
            Danar();
        }
    }

    public void Danar()
    {
        Objetivo?.GetComponent<Objetivo>().RecibirDano(40);
    }

    public void RecibirDano(int dano = 5)
    {
        vida -= dano;
    }
}

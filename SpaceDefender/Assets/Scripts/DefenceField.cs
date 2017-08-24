using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DefenceField : MonoBehaviour {

    private int health;

	// Use this for initialization
	void Start () {
        health = 5;
	}
	
    void OnTriggerEnter2D(Collider2D other){

        if(other.CompareTag("Asteroid")){

            DamageField();
            Destroy(other.gameObject);

        }

    }

    public void DamageField(){
        health--;
        // GameOver
        if(health <= 0){



        }
    }
}

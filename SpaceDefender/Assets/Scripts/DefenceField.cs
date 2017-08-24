using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DefenceField : MonoBehaviour {

    private int health;
    public GameObject[] hp;
    private bool isDamagable = true;

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
        switch (health){



            case 5:
                hp[4].SetActive(true);
                break;
            case 4:
                hp[4].SetActive(false);
                hp[3].SetActive(true);
                break;
            case 3:
                hp[3].SetActive(false);
                hp[2].SetActive(true);
                break;
            case 2:
                hp[2].SetActive(false);
                hp[1].SetActive(true);
                break;
            case 1:
                hp[1].SetActive(false);
                hp[0].SetActive(true);
                break;
            case 0: 

                // GAME OVER
                break;
        }
    }

    IEnumerator timer(){
        isDamagable = false;
        yield return new WaitForSeconds(1.5);
        isDamagable = true;
    }
}

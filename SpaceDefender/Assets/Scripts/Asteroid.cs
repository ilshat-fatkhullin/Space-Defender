using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Asteroid : MonoBehaviour {

    public int reward = 50;
    public int hitPoints = 1;




    // для тестов на пк
   /* void OnMouseDown(){
        

        Hit();
    } */




    public void Hit(){

        hitPoints--;
        if(hitPoints <= 0){
            GameObject.FindObjectOfType<PlayerScore>().GetComponent<PlayerScore>().addScore(reward);
            Destroy(this.gameObject);
        }

            
    } 


}

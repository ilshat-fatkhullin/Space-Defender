using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerScore : MonoBehaviour {

    private int score;

    void Start(){
        score = 0;
    }


    public int getScore(){
        return score;
    }

    public void addScore(int num){
        score += num;

    }


}

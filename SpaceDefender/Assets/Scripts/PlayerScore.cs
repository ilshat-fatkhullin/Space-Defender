using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerScore : MonoBehaviour {

    private int score;
    public Text scoreText;

    void Start(){
        score = 0;
        scoreText.text = score.ToString();
    }


    public int getScore(){
        return score;
    }

    public void addScore(int num){
        score += num;
        scoreText.text = score.ToString();

    }


}

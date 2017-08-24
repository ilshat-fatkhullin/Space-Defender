using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour {


    const float GRAVITY_MODIFER = 0.1f;
    const float SPAWN_DELAY_DELTA = 2.5f;
    Vector2 upperLeftBound = new Vector2(-3, 8), upperRightBound = new Vector2(3, 8);
    float spawnDelayTime = 2;
    int level = 0;

	// Use this for initialization
	void Start () {
        StartCoroutine(SpawnAsteroids());
	}

    IEnumerator SpawnAsteroids()
    {
        while (true)
        {



           
                GameObject asteroid = GameObject.Instantiate(Resources.Load("Asteroid1")) as GameObject;
                if(level < 11) level =(int) GetComponent<PlayerScore>().getScore() / 1000 ;
                asteroid.GetComponent<Rigidbody2D>().gravityScale = level * GRAVITY_MODIFER + GRAVITY_MODIFER;
                asteroid.transform.position = new Vector3(GetRandomPointX(), upperLeftBound.y, 0); 
                yield return new WaitForSeconds(0.5f);


            spawnDelayTime = Random.Range(spawnDelayTime - SPAWN_DELAY_DELTA , spawnDelayTime);
            yield return new WaitForSeconds(spawnDelayTime);
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    float GetRandomPointX()
    {
        return Random.Range(upperRightBound.x, upperLeftBound.x);
    }
}

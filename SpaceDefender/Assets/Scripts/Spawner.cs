using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour {

    Vector2 upperLeftBound = new Vector2(-3, 8), upperRightBound = new Vector2(3, 8);
    float spawnDelayTime = 3;

	// Use this for initialization
	void Start () {
        StartCoroutine(SpawnAsteroids());
	}

    IEnumerator SpawnAsteroids()
    {
        while (true)
        {
            GameObject asteroid = GameObject.Instantiate(Resources.Load("Asteroid1")) as GameObject;
            asteroid.transform.position = new Vector3(GetRandomPointX(), upperLeftBound.y, 0);
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

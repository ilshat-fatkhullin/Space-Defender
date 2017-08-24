using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchSystem : MonoBehaviour {

    Vector3 touchPos;

	// Use this for initialization
	void Start () {
    


	}
	
	// Update is called once per frame
	void Update () {


        // detecting touch
        if(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended){


            // get touch position
            touchPos = Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position);
            Vector2 touchPos2D = new Vector2(touchPos.x , touchPos.y);

            // find touched objects
            RaycastHit2D hit = Physics2D.Raycast(touchPos2D, Camera.main.transform.forward);

            if(hit != null){
                GameObject touchObject = hit.transform.gameObject;

                if(touchObject.CompareTag("Asteroid")){
                    touchObject.GetComponent<Asteroid>().Hit();
                }

            }



        }
		
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour {

    bool isPause = false;
    float defaultTimeScale;
    GameObject pauseMenu;

	// Use this for initialization
	void Start () {
        defaultTimeScale = Time.timeScale;
        pauseMenu = GameObject.Find("PauseMenu");
        pauseMenu.SetActive(false);
	}

    public void OnPauseButtonClick()
    {
        isPause = !isPause;
        pauseMenu.SetActive(isPause);

        if (isPause)
        {
            Time.timeScale = 0;
        }
        else
        {
            Time.timeScale = defaultTimeScale;
        }
    }

    public void OnContinueButtonClick()
    {
        OnPauseButtonClick();
    }

    public void OnStartAgainButtonClick()
    {
        OnPauseButtonClick();
        SceneManager.LoadScene(1);
    }

    public void OnExitButtonClick()
    {
        SceneManager.LoadScene(0);
    }
}

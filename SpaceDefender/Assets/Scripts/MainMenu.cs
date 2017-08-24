using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour {

    GameObject mainTab, optionsTab;
    Slider musicVolumeSlider, effectsVolumeSlider;

	// Use this for initialization
	void Start () {
        mainTab = GameObject.Find("MainTab");
        optionsTab = GameObject.Find("OptionsTab");

        musicVolumeSlider = GameObject.Find("MusicVolumeSlider").GetComponent<Slider>();
        effectsVolumeSlider = GameObject.Find("EffectsVolumeSlider").GetComponent<Slider>();

        musicVolumeSlider.value = PlayerPrefs.GetFloat("Music volume", 1);
        effectsVolumeSlider.value = PlayerPrefs.GetFloat("Effects volume", 1);

        optionsTab.SetActive(false);


	}

    public void OnPlayButtonClick()
    {
        SceneManager.LoadScene(1);
    }

    public void OnOptionsButtonClick()
    {
        mainTab.SetActive(false);
        optionsTab.SetActive(true);
    }

    public void OnExitButtonClick()
    {
        Application.Quit();
    }

    public void OnEnterButtonClick()
    {
        PlayerPrefs.SetFloat("Music volume", musicVolumeSlider.value);
        PlayerPrefs.SetFloat("Effects volume", effectsVolumeSlider.value);
        OnBackButtonClick();
    }

    public void OnBackButtonClick()
    {
        musicVolumeSlider.value = PlayerPrefs.GetFloat("Music volume", 1);
        effectsVolumeSlider.value = PlayerPrefs.GetFloat("Effects volume", 1);

        optionsTab.SetActive(false);
        mainTab.SetActive(true);
    }
}

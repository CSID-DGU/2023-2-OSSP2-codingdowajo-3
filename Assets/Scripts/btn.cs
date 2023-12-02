using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class btn : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject tutorial_startscene;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void ReviewStart()
    {
        SceneManager.LoadScene("ReviewScene");
    }

    public void StoryStart()
    {
        SceneManager.LoadScene("StoryScene");
    }

    public void MainStart()
    {
        SceneManager.LoadScene("MainScene");
    }

    public void GameStart()
    {
        if (!PlayerPrefs.HasKey("FirstRun"))
        {
            Debug.Log("first run");
            tutorial_startscene.SetActive(true);
            PlayerPrefs.SetInt("FirstRun", 1);
        }
        else
        {
            MainStart();
        }
    }
}
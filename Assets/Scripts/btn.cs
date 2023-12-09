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
            Debug.Log("first run; start scene");
            tutorial_startscene.SetActive(true);
        }
        else
        {
            MainStart();

            //엔딩씬 테스트********************************************
            //for (int i = 0; i < PLAYER_CONSTANT.NumOf_BlackHistoryCharacter; i++)
            //{
            //    Player_Character.Have_BlackHistoryCharacter[i] = true;
            //}
            //Player_Character.UserChar_Level = 20;
            //***************************************************
            //결과 : 성공
        }
    }

    public void EndingStart()
    {
        SceneManager.LoadScene("EndingScene");
    }

}
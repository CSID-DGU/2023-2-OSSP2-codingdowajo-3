using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoEnging : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        bool check_GetAllCharacter = true;

        //흑역사 캐릭터 다 모았는지 확인
        for (int i = 0; i < PLAYER_CONSTANT.NumOf_BlackHistoryCharacter; i++)
        {
            if (Player_Character.Have_BlackHistoryCharacter[i] == false) {
                check_GetAllCharacter = false; break;
            }
        }

        if (!PlayerPrefs.HasKey("FirstEnding") && check_GetAllCharacter && Player_Character.UserChar_Level == 20)
        {
            Debug.Log("first Ending");
            SceneManager.LoadScene("EndingScene");
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

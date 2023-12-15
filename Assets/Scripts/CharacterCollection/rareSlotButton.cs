using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rareSlotButton : MonoBehaviour
{
    public GameObject GoStoryPanel;
    public int CharacterIndex;
    
    public void ButtonClick()
    {
        //캐릭터 가지고있고, 슬롯 클릭하면 GoStoryPanel을 연다
        if (Player_Character.Have_BlackHistoryCharacter[CharacterIndex] == true)
        {
            GoStoryPanel_script.Variables.showingStoryIndex = CharacterIndex; // 열어야할 스토리 페널 종류를 지정한다.
            GoStoryPanel.SetActive(true);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

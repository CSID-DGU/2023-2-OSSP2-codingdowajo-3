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
        //ĳ���� �������ְ�, ���� Ŭ���ϸ� GoStoryPanel�� ����
        if (Player_Character.Have_BlackHistoryCharacter[CharacterIndex] == true)
        {
            GoStoryPanel_script.Variables.showingStoryIndex = CharacterIndex; // ������� ���丮 ��� ������ �����Ѵ�.
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

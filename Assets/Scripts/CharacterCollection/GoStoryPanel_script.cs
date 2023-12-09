using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GoStoryPanel_script : MonoBehaviour
{
    public static class Variables
    {
        public static int showingStoryIndex;
    }

    public Text text_askGoStory;
    public GameObject GoStoryPanel;
    List<string> textlist = new List<string>()
    {
        "���� ������",
        "���� ��",
        "����",
        "�ٴٰź�",
        "�� ����"
    };

    public void ClickYes()
    {
        int storyIndex = Variables.showingStoryIndex + 1;
        SetStory.Variables.storynum = storyIndex;
        SceneManager.LoadScene("StoryScene");
    }

    public void ClickNo()
    {
        GoStoryPanel.SetActive(false);
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void OnEnable()
    {
        text_askGoStory.text = textlist[Variables.showingStoryIndex] + "�� �̾߱⸦ ���ðڽ��ϱ�?";
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

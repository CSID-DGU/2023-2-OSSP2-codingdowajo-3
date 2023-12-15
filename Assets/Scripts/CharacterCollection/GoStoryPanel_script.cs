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
        "늑대 리바이",
        "물개 밍",
        "문어",
        "바다거북",
        "고래 리버"
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
        text_askGoStory.text = textlist[Variables.showingStoryIndex] + "의 이야기를 보시겠습니까?";
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

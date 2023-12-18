using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class onclick_getpaterbtn : MonoBehaviour
{

    private bool buttonEnabled = false;
    private DateTime lastClickTime;

    Button btn;
    public Text timeRemainingText; // Reference to the UI Text component

    void getpaper()
    {

        lastClickTime = Player_Character.lastclicktime_getpaperbutton;

        TimeSpan timePassed = DateTime.Now - lastClickTime;

        //if 24hours passed, enable the button
        if (timePassed.TotalHours >= 24)
        {
            buttonEnabled = true;
        }

        if (buttonEnabled)
        { // button is enabled
            buttonEnabled = false;
            lastClickTime = DateTime.Now;
            Player_Character.lastclicktime_getpaperbutton = lastClickTime;
            Player_Character.get_paper(1);
            Debug.Log(Player_Character.BlackHistoryPaper);
        }
        else
        {
            TimeSpan totalDuration = TimeSpan.FromHours(24);
            TimeSpan remainingTime = totalDuration - timePassed; // 남은 시간 계산
            string remainingTimeMessage = string.Format("{0}시간 {1}분 {2}초 뒤에 받을 수 있습니다!", remainingTime.Hours, remainingTime.Minutes, remainingTime.Seconds);
            Debug.Log(string.Format("{0}시간 {1}분 {2}초 뒤에 받을 수 있습니다!", remainingTime.Hours, remainingTime.Minutes, remainingTime.Seconds));
            timeRemainingText.text = remainingTimeMessage;
            ShowText();
            Invoke("HideText", 2f);

        }
    }
    void Start()
    {
        btn = this.transform.GetComponent<Button>();
        timeRemainingText.text = "";

        if (btn != null)
        {
            lastClickTime = Player_Character.lastclicktime_getpaperbutton;
            btn.onClick.AddListener(getpaper);
        }
    }
    void ShowText()
    {
        timeRemainingText.enabled = true;
    }

    void HideText()
    {
        timeRemainingText.enabled = false;
    }
}


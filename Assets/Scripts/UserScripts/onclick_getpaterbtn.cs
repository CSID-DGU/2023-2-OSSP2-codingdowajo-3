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
    
    void getpaper(){

        lastClickTime = Player_Character.lastclicktime_getpaperbutton;
        
        TimeSpan timePassed = DateTime.Now - lastClickTime;

        //if 24hours passed, enable the button
        if (timePassed.TotalHours >= 24) {
            buttonEnabled = true;
        }

        if(buttonEnabled) { // button is enabled
            buttonEnabled = false;
            lastClickTime = DateTime.Now;
            Player_Character.lastclicktime_getpaperbutton = lastClickTime;
            Player_Character.get_paper(1);
            Debug.Log(Player_Character.BlackHistoryPaper);
        }
        else {
            TimeSpan totalDuration = TimeSpan.FromHours(24);
            TimeSpan remainingTime = totalDuration - timePassed; // ���� �ð� ���
            Debug.Log(string.Format("{0}�ð� {1}�� {2}�� �ڿ� ���� �� �ֽ��ϴ�!", remainingTime.Hours, remainingTime.Minutes, remainingTime.Seconds));
        }
    }
    void Start()
    {
        btn = this.transform.GetComponent<Button>();
        if( btn!= null){
            lastClickTime = Player_Character.lastclicktime_getpaperbutton;
            btn.onClick.AddListener(getpaper);
        }
    }
}

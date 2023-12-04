using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class onclick_getpaterbtn : MonoBehaviour
{

    private bool buttonEnabled = true;
    private DateTime lastClickTime;
    
    Button btn;
    
    void getpaper(){
        //if 24hours passed, enable the button
         TimeSpan timePassed = DateTime.Now - lastClickTime;
            if (timePassed.TotalHours >= 24) {
                buttonEnabled = true;
            }

        if(buttonEnabled) { // button is enabled
            Player_Character.BlackHistoryPaper++;
            Debug.Log(Player_Character.BlackHistoryPaper);
            buttonEnabled = false;
            lastClickTime = DateTime.Now;
        }
        else Debug.Log("not passed 24hours");
    }
    void Start()
    {
        btn = this.transform.GetComponent<Button>();
        if( btn!= null){
            btn.onClick.AddListener(getpaper);
            lastClickTime = DateTime.Now;
        }
    }
}

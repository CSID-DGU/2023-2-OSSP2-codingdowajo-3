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
    // Start is called before the first frame update
    
    void getpaper(){
        if(buttonEnabled) {
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

    // Update is called once per frame
    void Update()
    {   if(buttonEnabled) return;

        else{
            TimeSpan timePassed = DateTime.Now - lastClickTime;
            if (timePassed.TotalHours >= 24) {
                buttonEnabled = true;
            }
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Exp_Bar_Width : MonoBehaviour
{   RectTransform rectTran;
    void width_update(){
        if(Player_Character.UserChar_Level == 20){
            rectTran.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, 
            200);return;
        }
        rectTran.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, 
        2*Player_Character.UserChar_Exp);
    }
    // Start is called before the first frame update
    void Start()
    {
      rectTran = gameObject.GetComponent<RectTransform>();
    }

    // Update is called once per frame
    void Update()
    {   //경험치 값이 바뀌었을때만 호출되도록 플래그 생성
        width_update();   
    }
}

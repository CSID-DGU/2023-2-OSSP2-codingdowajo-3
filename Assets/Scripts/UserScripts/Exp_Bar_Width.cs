using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Exp_Bar_Width : MonoBehaviour
{   public static RectTransform rectTran;
    public static void width_update(){
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
}

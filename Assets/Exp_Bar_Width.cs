using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Exp_Bar_Width : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
      
    }

    // Update is called once per frame
    void Update()
    {
        RectTransform rectTran = gameObject.GetComponent<RectTransform>();
        if(Player_Character.UserChar_Level == 20){
            rectTran.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, 
            200);return;
        }
        rectTran.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, 
        2*Player_Character.UserChar_Exp);
    }
}

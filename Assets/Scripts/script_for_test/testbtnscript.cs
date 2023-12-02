using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class testbtnscript : MonoBehaviour
{
    public void get70btn()
{
    Player_Character.UserChar_Exp +=70;
}

 public void transbtn()
{
    if(Player_Character.gender == 1) Player_Character.gender = 0;
    else Player_Character.gender = 1;
}

 public void setzerobtn()
{
    Player_Character.UserChar_Level = 1;
     Player_Character.UserChar_Exp = 0;
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

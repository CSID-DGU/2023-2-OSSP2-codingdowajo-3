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
    Player_Character.update_appearance();
}

 public void setzerobtn()
{
    Player_Character.UserChar_Level = 1;
     Player_Character.UserChar_Exp = 0;
     Player_Character.evolution_1 = false;
     Player_Character.evolution_2 = false;
}
}

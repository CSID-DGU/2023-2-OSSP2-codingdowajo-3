using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
public class CurrentLevel : MonoBehaviour
{
    public static Text lv_text;

    //진화, 레벨, 경험치바 업데이트
    public static void level_and_evolution_update(){
        
        if(Player_Character.UserChar_Exp >= 100){
             Player_Character.UserChar_Exp -= 100;
            Player_Character.UserChar_Level += 1;
        }

        if(Player_Character.UserChar_Level >= 20){
             Player_Character.evolution_2 = true;
             Player_Character.UserChar_Level = 20;
             Player_Character.UserChar_Exp = 0;
        }
        else if(Player_Character.UserChar_Level >= 10) {
            Player_Character.evolution_2 = false;
            Player_Character.evolution_1 = true;
        }

        else {
            Player_Character.evolution_2 = false;
            Player_Character.evolution_1 = false;
        }

        lv_text.text = Player_Character.UserChar_Level.ToString();
        Player_Character.update_appearance();
        Exp_Bar_Width.width_update();
         
         return;
    }
    // Start is called before the first frame update
    void Awake()
    {
       lv_text = GetComponent<Text>();
    }
}

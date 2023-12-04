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
        
        //level 20 and 2nd evolution => return
        if(Player_Character.UserChar_Level == 20 && 
        Player_Character.evolution_2 == true) { 
             lv_text.text = Player_Character.UserChar_Level.ToString();
             Exp_Bar_Width.width_update();
             return;
             }

        //level up
        if(Player_Character.UserChar_Exp >= 100) {
            Player_Character.UserChar_Exp -= 100;
            Player_Character.UserChar_Level += 1;
            Exp_Bar_Width.width_update();
            lv_text.text = Player_Character.UserChar_Level.ToString();
        }
        //reached level 20 but not 2nd evolved => 2nd evolution
        if(Player_Character.UserChar_Level == 20 && 
            Player_Character.evolution_2 != true){
            Player_Character.evolution_2 = true;
            Player_Character.update_appearance();
             lv_text.text = Player_Character.UserChar_Level.ToString();
             Exp_Bar_Width.width_update();
            return;
        }

        //reached level 10 but not 1st evolved => 1st evolution
        if(Player_Character.UserChar_Level >= 10 && 
            Player_Character.evolution_1 != true)
            Player_Character.evolution_1 = true;
        
        lv_text.text = Player_Character.UserChar_Level.ToString();
        Player_Character.update_appearance();
         Exp_Bar_Width.width_update();
    }
    // Start is called before the first frame update
    void Awake()
    {
       lv_text = GetComponent<Text>();
    }
}

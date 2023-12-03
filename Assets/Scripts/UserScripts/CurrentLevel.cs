using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CurrentLevel : MonoBehaviour
{
    public static Text lv_text;

    public static void level_and_evolution_update(){
        //get level
         lv_text.text = Player_Character.UserChar_Level.ToString();
        
        //level 20 and 2nd evolution => return
        if(Player_Character.UserChar_Level == 20 && 
        Player_Character.evolution_2 == true) { return;}

        //level up
        if(Player_Character.UserChar_Exp >= 100) {
            Player_Character.UserChar_Exp -= 100;
            Player_Character.UserChar_Level += 1;
            Player_Character.update_appearance();
        }
        //reached level 20 but not 2nd evolved => 2nd evolution
        if(Player_Character.UserChar_Level == 20 && 
        Player_Character.evolution_2 != true){
            Player_Character.evolution_2 = true;
            Player_Character.update_appearance();
            return;
        }

        //reached level 10 but not 1st evolved => 1st evolution
        if(Player_Character.UserChar_Level >= 10 && 
        Player_Character.evolution_1 != true)
            Player_Character.evolution_1 = true;
            Player_Character.update_appearance();
    }
    // Start is called before the first frame update
    void Start()
    {
       lv_text = GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {   //경험치를 얻었을 때에만 실행하도록 플래그를 추가하는 게 좋을듯.
        level_and_evolution_update();
        Exp_Bar_Width.width_update();
    }
}

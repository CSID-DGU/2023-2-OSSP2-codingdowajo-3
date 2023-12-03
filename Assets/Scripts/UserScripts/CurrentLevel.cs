using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CurrentLevel : MonoBehaviour
{
    public Text lv_text;

    void level_and_evolution_update(){
         lv_text.text = Player_Character.UserChar_Level.ToString();
        
        if(Player_Character.UserChar_Level == 20 && 
        Player_Character.evolution_2 == true) {
            return;}
        else if(Player_Character.UserChar_Level == 20 && 
        Player_Character.evolution_2 != true){
            Player_Character.evolution_2 = true;
            return;
        }
        else if(Player_Character.UserChar_Exp >= 100) {
            Player_Character.UserChar_Exp -= 100;
            Player_Character.UserChar_Level += 1;
            Player_Character.levelup = true;
        }
        if(Player_Character.UserChar_Level >= 10 && 
        Player_Character.evolution_1 != true)
            Player_Character.evolution_1 = true;
        
    }
    // Start is called before the first frame update
    void Start()
    {
       lv_text = GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {   //경험치를 얻었을 때에만 실행하도록 플래그를 추가해야 됨.
        level_and_evolution_update();
    }
}

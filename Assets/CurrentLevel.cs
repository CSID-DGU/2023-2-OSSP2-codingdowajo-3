using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CurrentLevel : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        if(Player_Character.UserChar_Level == 20 && 
        Player_Character.evolution_2 == true) {
        GetComponent<Text>().text = Player_Character.UserChar_Level.ToString();
            return;}
        else if(Player_Character.UserChar_Level == 20 && 
        Player_Character.evolution_2 != true){
            Player_Character.evolution_2 = true;
            return;
        }
        else if(Player_Character.UserChar_Exp >= 100) {
            Player_Character.UserChar_Exp -= 100;
            Player_Character.UserChar_Level += 1;
            GetComponent<Text>().text = Player_Character.UserChar_Level.ToString();
        }
        if(Player_Character.UserChar_Level >= 10 && 
        Player_Character.evolution_1 != true)
            Player_Character.evolution_1 = true;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Player_Item_Equipped : MonoBehaviour
{   //메인 화면에서 플레이어 캐릭터가 끼는 아이템을 할당해주는 스크립트

    public static Image char_item;
    public static void update_item() {
        switch(Player_Character.state_of_player_char) {
            case -1: char_item.sprite = Player_Character.char_img.sprite; break;
            case 0: char_item.sprite = Resources.Load<Sprite>("1_hat_1");break;
            case 1: char_item.sprite = Resources.Load<Sprite>("2_hat_2");break;
            case 2: char_item.sprite = Resources.Load<Sprite>("3_hat_3");break;
            case 3: char_item.sprite = Resources.Load<Sprite>("4_glasses_1");break;
            case 4: char_item.sprite = Resources.Load<Sprite>("5_glasses_2");break;
            case 5: char_item.sprite = Resources.Load<Sprite>("6_glasses_3");break;
        }
    }

    void Start()
    {
        char_item = GetComponent<Image>();
    }
}

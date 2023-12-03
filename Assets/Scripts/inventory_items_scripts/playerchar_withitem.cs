using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class playerchar_withitem : MonoBehaviour
{   //인벤토리에서, 플레이어 캐릭터 위에 얹는 아이템 불러오는 스크립트
     public static Image resultImage;
    
    public static void set_resultImg_sprite(){resultImage.sprite = Player_Item_Equipped.char_item.sprite;}
    void Awake()
    {
        resultImage = GetComponent<Image>();
        Player_Item_Equipped.update_item();
        resultImage.sprite = Player_Item_Equipped.char_item.sprite;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class playerchar_withitem : MonoBehaviour
{   //�κ��丮����, �÷��̾� ĳ���� ���� ��� ������ �ҷ����� ��ũ��Ʈ
     public static Image resultImage;
    
    public static void set_resultImg_sprite(){resultImage.sprite = Player_Item_Equipped.char_item.sprite;}
    void Awake()
    {
        resultImage = GetComponent<Image>();
        Player_Item_Equipped.update_item();
        resultImage.sprite = Player_Item_Equipped.char_item.sprite;
    }
}

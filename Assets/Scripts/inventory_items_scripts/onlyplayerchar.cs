using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class onlyplayerchar : MonoBehaviour
{   //�κ��丮����, �÷��̾� ĳ���� ��ü �ҷ����� ��ũ��Ʈ
     public static Image resultImage;
    void Awake()
    {
        resultImage = GetComponent<Image>();
        resultImage.sprite = Player_Character.char_img.sprite;
    }
}

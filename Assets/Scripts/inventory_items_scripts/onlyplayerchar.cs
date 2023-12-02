using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class onlyplayerchar : MonoBehaviour
{   //인벤토리에서, 플레이어 캐릭터 자체 불러오는 스크립트
     public static Image resultImage;
    // Start is called before the first frame update
    void Start()
    {
        resultImage = GetComponent<Image>();
        resultImage.sprite = Player_Character.char_img.sprite;
    }

    // Update is called once per frame
    void Update()
    {
    }
}

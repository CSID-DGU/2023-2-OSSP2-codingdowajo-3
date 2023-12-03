using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class playerchar_withitem : MonoBehaviour
{   //인벤토리에서, 플레이어 캐릭터 위에 얹는 아이템 불러오는 스크립트
     public static Image resultImage;
    // Start is called before the first frame update
    void Start()
    {
        resultImage = GetComponent<Image>();
    }

    // Update is called once per frame
    void Update()
    {
        //사용자가 인벤토리의 아이템 클릭 시에만 호출되도록 플래그 생성
        resultImage.sprite = Player_Item_Equipped.char_item.sprite;
    }
}

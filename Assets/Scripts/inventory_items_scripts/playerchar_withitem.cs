using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class playerchar_withitem : MonoBehaviour
{   //�κ��丮����, �÷��̾� ĳ���� ���� ��� ������ �ҷ����� ��ũ��Ʈ
     public static Image resultImage;
    // Start is called before the first frame update
    void Start()
    {
        resultImage = GetComponent<Image>();
    }

    // Update is called once per frame
    void Update()
    {
        //����ڰ� �κ��丮�� ������ Ŭ�� �ÿ��� ȣ��ǵ��� �÷��� ����
        resultImage.sprite = Player_Item_Equipped.char_item.sprite;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ImageSet : MonoBehaviour
{
    public ShopController shopController;
    public static int itemNum = 6;
    public void setImage(int itemIndex)
    {
        //�ʿ��� ���� ȣ��
        Image[] ItemList = shopController.ItemList;

        for (int i = 0; i < itemNum; i++)
        {
            ItemList[i].gameObject.SetActive(false);
        }

        ItemList[itemIndex].gameObject.SetActive(true);
    }
}

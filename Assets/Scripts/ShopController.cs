using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShopController : MonoBehaviour
{
    public static int itemNum = 6;
    public Image[] ItemButton = new Image[itemNum];
    public int[] ItemPrice = new int[itemNum];
    public bool[] ItemsPurchased = new bool[itemNum];

    public Text pointText;
    public int point = 100;

    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < itemNum; i++)
        {
            if (i < 3)
                ItemPrice[i] = 100;
            else
                ItemPrice[i] = 50;
        }

        for (int i = 0; i < itemNum; i++)
        {
            ItemsPurchased[i] = false;
        }

        if (pointText != null)
        {
            pointText.text = point.ToString();
        }
        Debug.Log("���� ����");
        // UpdateButtonColors();

    }
    void Update()
    {
        Debug.Log("updating");

    }

    public void PurchaseItem(int itemIndex)
    {
        Debug.Log(itemIndex);
        if (itemIndex < 0 || itemIndex >= 6)
        {
            Debug.Log(itemIndex);
            Debug.LogError("Invalid item index.");
            return;
        }

        if (!ItemsPurchased[itemIndex])
        {
            Debug.Log("���� ����Ʈ: " + point);
            Debug.Log("�����۰���: " + ItemPrice[itemIndex]);

            if (point >= ItemPrice[itemIndex])
            {
                Debug.Log("���ż���");
                point -= ItemPrice[itemIndex];
                Debug.Log("�ܾ�: " + point);

                if (pointText != null)
                {
                    pointText.text = point.ToString();
                }
                ItemsPurchased[itemIndex] = true;

                ItemButton[itemIndex] = transform.GetComponent<Image>();
                ItemButton[itemIndex].color = Color.gray;

                Debug.Log("Purchased item: " + itemIndex);
            }
            else
            {
                Debug.Log("Not enough point to purchase " + itemIndex);
            }
        }
        else
        {
            Debug.Log("This has already purchased " + itemIndex);
        }
    }

}
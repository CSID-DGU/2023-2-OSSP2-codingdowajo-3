using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using LitJson;
using System.IO;

public class Purchase : MonoBehaviour
{
    public Text pointText;
    public static int itemNum = 6;
    public Image ItemButton;
    public GameObject notEnoughPanel;
    public ShopController shopController;

    public void PurchaseItem(int itemIndex)
    {
        //필요한 변수 호출

        if (itemIndex < 0 || itemIndex >= 6)
        {
            Debug.Log(itemIndex);
            Debug.LogError("Invalid item index.");
            return;
        }

        if (!shopController.ItemsPurchased[itemIndex])
        {
            Debug.Log("현재 포인트: " + shopController.point);
            Debug.Log("아이템가격: " + shopController.ItemPrice[itemIndex]);

            if (shopController.point >= shopController.ItemPrice[itemIndex])
            {
                Debug.Log("구매성공");
                shopController.point -= shopController.ItemPrice[itemIndex];
                Debug.Log("잔액: " + shopController.point);
                UpdatePointFromJSON(shopController.point);
                UpdatePurchaseFromJSON(itemIndex);

                if (pointText != null)
                {
                    pointText.text = shopController.point.ToString();
                }
                shopController.ItemsPurchased[itemIndex] = true;

                ItemButton = transform.GetComponent<Image>();
                ItemButton.color = Color.gray;

                Debug.Log("Purchased item: " + itemIndex);
            }
            else
            {
                Debug.Log("Not enough point to purchase " + itemIndex);
                notEnoughPanel.SetActive(true);

            }
        }
    }

    int LoadPointFromJSON()
    {
        string filePath = Application.persistentDataPath + "/userInfo.json";
        int jsonPoint = -1;
        if (System.IO.File.Exists(filePath))
        {
            string jsonString = System.IO.File.ReadAllText(filePath);
            JsonData jsonData = JsonMapper.ToObject(jsonString);
            jsonPoint = (int)jsonData[0]["point"];
        }
        else
        {
            Debug.LogError("JSON file not found at: " + filePath);
        }
        return jsonPoint;
    }
    int[] LoadPurchaseFromJSON()
    {
        string filePath = Application.persistentDataPath + "/userInfo.json";
        int[] items = new int[itemNum];
        if (System.IO.File.Exists(filePath))
        {
            string jsonString = System.IO.File.ReadAllText(filePath);
            JsonData jsonData = JsonMapper.ToObject(jsonString);
            JsonData itemData = jsonData[0]["itemList"];
            items = new int[itemData.Count];

            for (int i = 0; i < itemData.Count; i++)
            {
                items[i] = (int)itemData[i];
            }
        }
        else
        {
            Debug.LogError("JSON file not found at: " + filePath);
        }
        return items;
    }

    void UpdatePointFromJSON(int point)
    {
        string filePath = Application.persistentDataPath + "/userInfo.json";
        if (System.IO.File.Exists(filePath))
        {
            string jsonString = System.IO.File.ReadAllText(filePath);
            JsonData jsonData = JsonMapper.ToObject(jsonString);
            jsonData[0]["point"] = point;

            string updatedJsonString = JsonMapper.ToJson(jsonData);
            System.IO.File.WriteAllText(filePath, updatedJsonString);
        }
        else
        {
            Debug.LogError("JSON file not found at: " + filePath);
        }
    }

    void UpdatePurchaseFromJSON(int index)
    {
        string filePath = Application.persistentDataPath + "/userInfo.json";
        int[] items = new int[itemNum];
        if (System.IO.File.Exists(filePath))
        {
            string jsonString = System.IO.File.ReadAllText(filePath);
            JsonData jsonData = JsonMapper.ToObject(jsonString);
            jsonData[0]["itemList"][index] = 1;

            string updatedJsonString = JsonMapper.ToJson(jsonData);
            System.IO.File.WriteAllText(filePath, updatedJsonString);
        }
        else
        {
            Debug.LogError("JSON file not found at: " + filePath);
        }
    }
}



using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using LitJson;
using System.IO;

public class ShopController : MonoBehaviour
{
    public static int itemNum = 6;
    public Button[] ItemBtn = new Button[itemNum];
    private Image[] ItemButton = new Image[itemNum];
    public int[] ItemPrice = new int[itemNum];
    public bool[] ItemsPurchased = new bool[itemNum];
    public Image[] ItemList = new Image[itemNum];

    public Text pointText;

    public int point = 0; 
    
    private int[] purchaseStatus = new int[itemNum];



    /********************JSON ���� ����**********************************
    * userInfo.json
    * [{"itemList": [0, 0, 0, 0, 0, 0], "point" : 0}]
    ********************************************************************/

    // Start is called before the first frame update
    void Start()
    {
        string filePath = Application.persistentDataPath + "/userInfo.json";
        // ������ �����ϴ��� Ȯ��
        if (!File.Exists(filePath))
        {
            Dictionary<string, object> data = new Dictionary<string, object>();
            List<int> itemList = new List<int>();
            for (int i = 0; i < 6; i++)
            {
                itemList.Add(0);
            }
            data["itemList"] = itemList;
            data["point"] = 200;

            string jsonDataString = JsonMapper.ToJson(new List<object> { data });

            File.WriteAllText(filePath, jsonDataString);
            Debug.Log("JSON ������ �����Ǿ����ϴ�: " + filePath);
        }

        //�ʱ� ����Ʈ ����
        point = LoadPointFromJSON();

        for (int i = 0; i < itemNum; i++)
        {
            if (i < 3)
                ItemPrice[i] = 100;
            else
                ItemPrice[i] = 50;
        }

        // ���� ������ ���� ���� ����
        purchaseStatus = LoadPurchaseFromJSON();
        for (int i = 0; i < itemNum; i++)
        {
            if (purchaseStatus[i] == 0)
            {
                ItemsPurchased[i] = false;
            }
            else
            {
                ItemsPurchased[i] = true;
                ItemButton[i] = ItemBtn[i].GetComponent<Transform>().GetComponent<Image>();
                ItemButton[i].color = Color.gray;
            }
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
        //Debug.Log("updating");

    }

    /*public void PurchaseItem(int itemIndex)
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
    */
    int LoadPointFromJSON()
    {
        string filePath = Application.persistentDataPath + "/userInfo.json";
        int jsonPoint = -1;
        if (File.Exists(filePath))
        {
            string jsonString = File.ReadAllText(filePath);
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
        if (File.Exists(filePath))
        {
            string jsonString = File.ReadAllText(filePath);
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
    
}
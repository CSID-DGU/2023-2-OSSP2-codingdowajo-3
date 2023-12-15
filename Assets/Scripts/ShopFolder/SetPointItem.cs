using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LitJson;
using System.IO;

public class SetPointItem : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        string filePath = Application.persistentDataPath + "/userInfo.json";
        // 파일이 존재하는지 확인
        if (!File.Exists(filePath))
        {
            Dictionary<string, object> data = new Dictionary<string, object>();
            List<int> itemList = new List<int>();
            for (int i = 0; i < 6; i++)
            {
                itemList.Add(0);
            }
            data["itemList"] = itemList;
            data["point"] = 0;

            string jsonDataString = JsonMapper.ToJson(new List<object> { data });

            File.WriteAllText(filePath, jsonDataString);
            Debug.Log("JSON 파일이 생성되었습니다: " + filePath);
        }

        Player_Character.point = LoadPointFromJSON();
        //Debug.Log(Player_Character.point);
        Player_Character.haveitems = LoadBoolPurchaseFromJSON();
        for (int i = 0; i < 6; i++)
        {
            //Debug.Log(Player_Character.haveitems[i]);

        }
    }

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

    bool[] LoadBoolPurchaseFromJSON()
    {
        string filePath = Application.persistentDataPath + "/userInfo.json";
        bool[] items = new bool[6];
        if (File.Exists(filePath))
        {
            string jsonString = File.ReadAllText(filePath);
            JsonData jsonData = JsonMapper.ToObject(jsonString);
            JsonData itemData = jsonData[0]["itemList"];
            items = new bool[itemData.Count];

            for (int i = 0; i < itemData.Count; i++)
            {
                int intValue = (int)itemData[i];
                items[i] = intValue != 0;
            }
        }
        else
        {
            Debug.LogError("JSON file not found at: " + filePath);
        }
        return items;
    }
}

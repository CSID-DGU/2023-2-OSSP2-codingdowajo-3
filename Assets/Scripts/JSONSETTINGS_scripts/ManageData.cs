using LitJson;
using System.IO;
using UnityEngine;

public class ManageData
{
    private static string settingsPath = Application.persistentDataPath + "/settings.json";

    public static void SaveSettings(GameSettings settings)
    {
        string json = JsonMapper.ToJson(settings);
        System.IO.File.WriteAllText(settingsPath, json);
    }
        
    public static GameSettings LoadSettings()
    {
        if (System.IO.File.Exists(settingsPath))
        {
            string json = System.IO.File.ReadAllText(settingsPath);
            return JsonMapper.ToObject<GameSettings>(json);
        }
        else
        {
            return new GameSettings(); // 파일이 없으면 기본 설정 반환
        }
    }
}

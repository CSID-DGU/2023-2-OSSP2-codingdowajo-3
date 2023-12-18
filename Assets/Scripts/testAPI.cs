using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.IO;
using System;
using UnityEngine.UI;
using System.Threading.Tasks;
using OpenAI;
using OpenAI.Chat;
using OpenAI.Models;
using LitJson;
using TMPro;

public class TestAPI : MonoBehaviour
{
    public string chresponse;
    public const int textLength = 200;

    // �̹����� ������ ���
    private const string outputPath = "Assets/Diary/";

    // DALL-E�� ���� �ؽ�Ʈ
    private const string prompt = "";

    public async Task GPTapi(string userPrompt)
    {
        double temparature = 0;

        var api = new OpenAIClient();
        var messages = new List<Message>
        {
            new Message(Role.System, "You are a machine that processes the following sentences for DALL��E prompt."),
            new Message(Role.System, "First, summarize in one sentence. Second, translate into English for DALL��E prompt. The answer is: 10 to 15 words."),
            new Message(Role.User, userPrompt)
        };
        var chatRequest = new ChatRequest(messages, Model.GPT3_5_Turbo, temperature: temparature);
        var response = await api.ChatEndpoint.GetCompletionAsync(chatRequest);
        var choice = response.FirstChoice;
        UnityEngine.Debug.Log($"[{choice.Index}] {choice.Message.Role}: {choice.Message} | Finish Reason: {choice.FinishReason}");
        chresponse = choice.Message;
    }

    public IEnumerator DALLEapi(string fileName, Image uiImage, string userpmt)
    {
        // dalle api��
        yield return new WaitForSeconds(1.0f); // 1���� ������

        string openaiApiKey = "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";
        string apiUrl = "https://api.openai.com/v1/images/generations";
        string contentValue = "error";
        contentValue = chresponse;
        Debug.Log(contentValue);

        var jsonObject = new Dictionary<string, object>
        {
            { "model", "dall-e-3" },
            { "prompt", contentValue },
            { "n", 1 },
            { "size", "1024x1024" },
            { "quality", "standard" }
        };

        // ����Ʈ�� JSON ���ڿ��� ����ȭ
        string jsonData = JsonMapper.ToJson(jsonObject);


        // UnityWebRequest�� POST ��û ������
        using (UnityWebRequest request = new UnityWebRequest(apiUrl, "POST"))
        {
            byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonData);
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.SetRequestHeader("Authorization", "Bearer " + openaiApiKey);

            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Error: " + request.error);
            }
            else
            {
                Debug.Log("Request successful!");
                string responseText = request.downloadHandler.text;
                Debug.Log(responseText);
                JsonData response = JsonMapper.ToObject(responseText);
                string imageUrl = response["data"][0]["url"].ToString();
                string imagePath = Application.persistentDataPath + '/' + fileName + ".jpg";

                // �̹��� �ٿ�ε� �� ����
                yield return StartCoroutine(DownloadImage(imageUrl, imagePath, uiImage));

                //json ���Ͽ� �̹��� ��� �� userpmt ����
                AddDataToJson(userpmt, imagePath);

                UnityEngine.Debug.Log("Image generation completed. Image saved to: " + imagePath);
                Debug.Log("Response: " + responseText); // ���� ������ ���
                // Handle the response here
            }
        }
    }

    public IEnumerator DownloadImage(string url, string filePath,Image uiImage)
    {
        using (UnityWebRequest request = UnityWebRequestTexture.GetTexture(url))
        {
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                Texture2D texture = DownloadHandlerTexture.GetContent(request);

                // UI Image�� �Ҵ�
                uiImage.sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), Vector2.zero);

                byte[] bytes = texture.EncodeToJPG();

                System.IO.File.WriteAllBytes(filePath, bytes);
            }
            else
            {
                UnityEngine.Debug.LogError("Image download failed: " + request.error);
            }
        }
    }
    void AddDataToJson(string text, string imagePath)
    {
        string jsonFilePath = Application.persistentDataPath + "/diary.json";

        // ������ �����ϴ��� Ȯ��
        if (!System.IO.File.Exists(jsonFilePath))
        {
            // ���ο� JSON ���� ����
            using (StreamWriter writer = System.IO.File.CreateText(jsonFilePath))
            {
                writer.Write("[]"); // �� �迭�� �ʱ�ȭ
            }
        }

        // ���� ������ �ε�
        string jsonString = System.IO.File.ReadAllText(jsonFilePath);
        JsonData jsonData = JsonMapper.ToObject(jsonString);

        // ���ο� ������ ����
        JsonData newData = new JsonData();
        newData["diarytext"] = text;
        newData["diaryimage"] = imagePath;

        // JSON �����Ϳ� ���ο� ������ �߰�
        jsonData.Add(newData);

        // ���ο� JSON ���Ϸ� ����
        string newJsonString = JsonMapper.ToJson(jsonData);
        System.IO.File.WriteAllText(jsonFilePath, newJsonString);
    }


}

[System.Serializable]
public class ImageResponse
{
    public Choice[] choices;
}

[System.Serializable]
public class Choice
{
    public File file;
}

[System.Serializable]
public class File
{
    public string url;
}

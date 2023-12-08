using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using OpenAI;
using OpenAI.Chat;
using OpenAI.Models;
using System.Threading.Tasks;
using OpenAI.Images;
using NUnit.Framework;

public class testAPI : MonoBehaviour
{
    public string chresponse;
    // Start is called before the first frame update
    async Task Start()
    {
        await APItest();
        await DALLEtest();
    }

    async Task APItest()
    {
        double temparature = 0;

        var api = new OpenAIClient();
        var messages = new List<Message>
        {
            new Message(Role.System, "Summarize the sentence in the following form. Place: ,Emotions:, situation:, keywords:"),
            new Message(Role.System, "Do not answer in Korean, but in English. never use korean."),
            new Message(Role.System, "The number of characters in answer must be 100 or more and 120 or less."),
            new Message(Role.User, "Summarize the following sentence in english. ����� ��, �����忡�� ���� ���� ���� �ִ�. �ٸ��� �㰡 ����, ������ ���� ���� ������. �׶��� ������ ������ �������� �ʴ´�. ���� ���� ���� �ִٴ� ������ �������, �𸣴� �������� �޷��ͼ� �����־���.")

        };
        var chatRequest = new ChatRequest(messages, Model.GPT3_5_Turbo, temperature: temparature);
        var response = await api.ChatEndpoint.GetCompletionAsync(chatRequest);
        var choice = response.FirstChoice;
        Debug.Log($"[{choice.Index}] {choice.Message.Role}: {choice.Message} | Finish Reason: {choice.FinishReason}");
        chresponse = choice.Message;
    }

    async Task DALLEtest()
    {
        var api = new OpenAIClient();
        var request = new ImageGenerationRequest(chresponse, Model.DallE_3);
        var imageResults = await api.ImagesEndPoint.GenerateImageAsync(request);
        var results = imageResults;

        foreach (var (path, texture) in results)
        {
            Debug.Log(path);
            // path == file://path/to/image.png
            Assert.IsNotNull(texture);
            // texture == The preloaded Texture2D
        }
    }
}

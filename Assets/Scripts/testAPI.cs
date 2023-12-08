using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Diagnostics;
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
        UnityEngine.Debug.Log("test1");
        await APItest();
        UnityEngine.Debug.Log("test2");
        await DALLEtest();
        UnityEngine.Debug.Log("test3");
    }

    async Task APItest()
    {
        var api = new OpenAIClient();
        var messages = new List<Message>
        {
            new Message(Role.System, "You are a machine that processes the following sentences for DALL��E prompt."),
            new Message(Role.System, "First, summarize in one sentence. Second, translate into English for DALL��E prompt. The answer is: 10 to 15 words."),
            new Message(Role.User, "���� ��, ���� �а� �������� ģ����� ���� ���ð� �־���. �����Ⱑ �����Ͱ�, ���� �ܶ� �����ִ� ���� ���� �� ������ ���ϰ� �Ѿ��� ��ó�� ����. ���� �β������� ����, �׳��� ���� ���� ��ﳪ�� �ʴ´ٴ� ���̴�. ")

        };
        var chatRequest = new ChatRequest(messages, Model.GPT3_5_Turbo);
        var response = await api.ChatEndpoint.GetCompletionAsync(chatRequest);
        var choice = response.FirstChoice;
        UnityEngine.Debug.Log($"[{choice.Index}] {choice.Message.Role}: {choice.Message} | Finish Reason: {choice.FinishReason}");
        chresponse = choice.Message;
    }

    async Task DALLEtest()
    {
        var pythonScriptPath = "C:/Users/user/Desktop/ossp2023_12_06/2023-2-OSSP2-codingdowajo-3/Assets/Scripts/PythonScripts/dalle_test.py"; // Python ��ũ��Ʈ�� ��θ� �����ϼ���.

        // ���μ��� ���� ������ �����մϴ�.
        var processStartInfo = new ProcessStartInfo
        {
            FileName = "python.exe", // Python ������������ ��θ� �����ϼ���.
            Arguments = pythonScriptPath,
            RedirectStandardInput = true, // ǥ�� �Է��� ���𷺼��մϴ�.
            RedirectStandardOutput = true,
            UseShellExecute = false,
            CreateNoWindow = true
        };

        // ���μ��� ����
        using (var process = new Process { StartInfo = processStartInfo })
        {
            process.Start();

            process.StandardInput.WriteLine(chresponse);
            process.StandardInput.Flush();
            process.StandardInput.Close();

            process.WaitForExit();

            string output = await process.StandardOutput.ReadToEndAsync();
            UnityEngine.Debug.Log("Python Script Output:\n" + output);
        }
    }
}

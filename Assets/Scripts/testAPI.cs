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
            new Message(Role.System, "You are a machine that processes the following sentences for DALL·E prompt."),
            new Message(Role.System, "First, summarize in one sentence. Second, translate into English for DALL·E prompt. The answer is: 10 to 15 words."),
            new Message(Role.User, "축제 때, 나는 학과 주점에서 친구들과 술을 마시고 있었다. 분위기가 무르익고, 술에 잔뜩 취해있던 나는 몸을 잘 가누지 못하고 넘어져 상처가 났다. 더욱 부끄러웠던 것은, 그날의 일이 전혀 기억나지 않는다는 점이다. ")

        };
        var chatRequest = new ChatRequest(messages, Model.GPT3_5_Turbo);
        var response = await api.ChatEndpoint.GetCompletionAsync(chatRequest);
        var choice = response.FirstChoice;
        UnityEngine.Debug.Log($"[{choice.Index}] {choice.Message.Role}: {choice.Message} | Finish Reason: {choice.FinishReason}");
        chresponse = choice.Message;
    }

    async Task DALLEtest()
    {
        var pythonScriptPath = "C:/Users/user/Desktop/ossp2023_12_06/2023-2-OSSP2-codingdowajo-3/Assets/Scripts/PythonScripts/dalle_test.py"; // Python 스크립트의 경로를 지정하세요.

        // 프로세스 실행 정보를 설정합니다.
        var processStartInfo = new ProcessStartInfo
        {
            FileName = "python.exe", // Python 인터프리터의 경로를 지정하세요.
            Arguments = pythonScriptPath,
            RedirectStandardInput = true, // 표준 입력을 리디렉션합니다.
            RedirectStandardOutput = true,
            UseShellExecute = false,
            CreateNoWindow = true
        };

        // 프로세스 실행
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

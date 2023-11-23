using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using HuggingFace.API;
using OpenQA.Selenium;
using OpenQA.Selenium.Chrome;
using System.Text.RegularExpressions;
using System.Threading.Tasks;


public class dataProcess : MonoBehaviour
{
    /*******************************************************************************************************************************************************************************
     * dummyModelLoad.cs를 먼저 실행시켰고 input을 받았다는 가정하에 reviewImageTab에 script 붙여서 게임 시작시 바로 실행되게 하여 테스트 하였음
     * dummyModelLoad를 처음 게임 실행 전에 1번만 실행시켜주기(실제로는 게임 로드시 한번 실행되게 하는게 좋을 듯함../ 한번 해놓으면 이후에 회고 다시 할 때 dummy는 실행할 필요 없음)
     * 모델이 먼저 로드되었다고 가정할 때, 전체적인 데이터 전처리 실행 시간: 10초**
     ******************************************************************************************************************************************************************************/

    // 최종 문장(사용자 묘사, 장소)
    public string prompt1 = "";
    public string prompt2 = "";

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("현재 시각");
        //사용자 정보
        string place = "대학교";
        string userInput = "이력서를 냈지만 바로 탈락하고 말았어.";
        int userAge = 25;
        string userGender = "male";

        // 장소, 사용자 input값 번역
        string translatedInput = TranslateUserInput(userInput);
        string translatedPlace = TranslateUserInput(place);

        // 감정 상태 추출 
        char extractedText;
        int extractedLabelNum = -99;

        string returnLabel = "";

        // api 값 받아오기
        HuggingFaceAPI.TextClassification(userInput, result => {
            //do something with the result
            returnLabel = result.ToString();
            string[] lines = returnLabel.Split('\n');
            string firstLine = lines[0];

            int underscoreIndex = firstLine.IndexOf('_');
            int commaIndex = firstLine.IndexOf(',', underscoreIndex);

            if (underscoreIndex != -1 && commaIndex != -1)
            {
                int startIndex = underscoreIndex + 1;
                int length = commaIndex - startIndex;
                extractedText = firstLine.Substring(startIndex, length)[0];
                extractedLabelNum = extractedText - 48;
                Debug.Log("추출된 숫자: " + extractedLabelNum);
                prompt1 = MakePromptValues(userAge, userGender, translatedInput, extractedLabelNum);
                prompt2 = translatedPlace;
            }
            else
            {
                Debug.Log("해당 패턴을 찾을 수 없습니다.");
            }
        }, error => {
            Debug.LogError(error);
        });
        /*******************************************************************************************
         * 모델을 로드하는 시간이 있기 때문에 게임 시작 로딩 시나 사용자가 내용 입력하기 전에 
           한번 dummy로 모델 값을 불러온 뒤에 userInput값을 받아야 delay없이 값을 받아올 수 있음
         * 모델 평가: 'eval_accuracy': 0.9245, 'eval_f1': 0.9245 
         * 라벨: 'anger':0, 'fear':1, 'joy':2, 'love':3, 'sadness':4, 'surprise':5
        ********************************************************************************************/
        
    }

    string TranslateUserInput(string userInput)
    {
        string chromeDriverPath = @"Assets/Plugins/selenium.webdriver.chromedriver.119.0.6045.10500/driver/win32/";
        
        ChromeDriverService driverService = ChromeDriverService.CreateDefaultService(chromeDriverPath);
        driverService.HideCommandPromptWindow = true;

        ChromeOptions options = new ChromeOptions();
        options.AddArguments("headless");
        options.AddArgument("ignore-certificate-errors");

        string transInputResult = "";

        using (IWebDriver driver = new ChromeDriver(driverService, options))
        {
            string papagoUrl = "https://papago.naver.com/";

            driver.Navigate().GoToUrl(papagoUrl);
            // input 문장
            System.Threading.Thread.Sleep(1000);
            var inputField = driver.FindElement(By.XPath("//*[@id='sourceEditArea']/label"));
            System.Threading.Thread.Sleep(500);
            inputField.SendKeys(userInput);
            System.Threading.Thread.Sleep(1000);
            var buttonBox = driver.FindElement(By.XPath("//*[@id='btnTranslate']"));
            buttonBox.Click();
            System.Threading.Thread.Sleep(500);
            transInputResult = driver.FindElement(By.XPath("//*[@id='txtTarget']")).Text;
            Debug.Log(transInputResult);
        }

        return transInputResult;
    }

    string MakePromptValues(int userAge, string userGender, string translatedResult, int emotionLabel)
    {
        // 각 line 추출하기
        string[] sentences = Regex.Split(translatedResult, @"(?<=[.!?]) ");
        string ISentence = "";

        // I가 들어있는 문장 추출
        foreach (string sentence in sentences)
        {
            if (sentence.Contains("I"))
            {
                ISentence = sentence;
                break;
            }
        }

        // I와 be동사 바꾸기
        List<string> words = new List<string>(ISentence.Split(' ')); // 공백을 기준으로 단어 분할
        int I_cnt = 0;
        for (int i = 0; i < words.Count; i++)
        {
            if (words[i] == "I")
            {
                if (userAge >= 20 && userGender == "female")
                {
                    if (I_cnt == 0)
                    {
                        if (emotionLabel == 0)
                        {
                            words[i] = "Woman who is angry";
                        }
                        else if (emotionLabel == 1)
                        {
                            words[i] = "Woman who is scary";
                        }
                        else if (emotionLabel == 2 || emotionLabel == 3)
                        {
                            words[i] = "Woman who is happy";
                        }
                        else if (emotionLabel == 4)
                        {
                            words[i] = "Woman who is sad";
                        }
                        else
                        {
                            words[i] = "Woman who is surprised";
                        }
                        I_cnt = I_cnt + 1;
                    }
                    else
                    {
                        words[i] = "she";
                        I_cnt = I_cnt + 1;
                    }
                    
                    
                }
                else if (userAge >= 20 && userGender == "male")
                {
                    if (I_cnt == 0)
                    {
                        if (emotionLabel == 0)
                        {
                            words[i] = "Man who is angry";
                        }
                        else if (emotionLabel == 1)
                        {
                            words[i] = "Man who is scary";
                        }
                        else if (emotionLabel == 2 || emotionLabel == 3)
                        {
                            words[i] = "Man who is happy";
                        }
                        else if (emotionLabel == 4)
                        {
                            words[i] = "Man who is sad";
                        }
                        else
                        {
                            words[i] = "Man who is surprised";
                        }
                        I_cnt = I_cnt + 1;
                    }
                    else
                    {
                        words[i] = "he";
                        I_cnt = I_cnt + 1;
                    }
                }
                else if (userAge < 20 && userGender == "female")
                {
                    if (I_cnt == 0)
                    {
                        if (emotionLabel == 0)
                        {
                            words[i] = "Girl who is angry";
                        }
                        else if (emotionLabel == 1)
                        {
                            words[i] = "Girl who is scary";
                        }
                        else if (emotionLabel == 2 || emotionLabel == 3)
                        {
                            words[i] = "Girl who is happy";
                        }
                        else if (emotionLabel == 4)
                        {
                            words[i] = "Girl who is sad";
                        }
                        else
                        {
                            words[i] = "Girl who is surprised";
                        }
                        I_cnt = I_cnt + 1;
                    }
                    else
                    {
                        words[i] = "she";
                        I_cnt = I_cnt + 1;
                    }
                }
                else
                {
                    if (I_cnt == 0)
                    {
                        if (emotionLabel == 0)
                        {
                            words[i] = "Boy who is angry";
                        }
                        else if (emotionLabel == 1)
                        {
                            words[i] = "Boy who is scared";
                        }
                        else if (emotionLabel == 2 || emotionLabel == 3)
                        {
                            words[i] = "Boy who is happy";
                        }
                        else if (emotionLabel == 4)
                        {
                            words[i] = "Boy who is sad";
                        }
                        else
                        {
                            words[i] = "Boy who is surprised";
                        }
                        I_cnt = I_cnt + 1;
                    }
                    else
                    {
                        words[i] = "he";
                        I_cnt = I_cnt + 1;
                    }
                }
            }
            else if (words[i] == "am")
            {
                words[i] = "is";
            }
            else if (words[i] == "my")
            {
                if(userGender == "female")
                {
                    words[i] = "her";
                }
                else
                {
                    words[i] = "his";
                }
            }
            else if (words[i] == "me")
            {
                if (userGender == "female")
                {
                    words[i] = "her";
                }
                else
                {
                    words[i] = "him";
                }
            }
            else if (words[i] == "mine")
            {
                if (userGender == "female")
                {
                    words[i] = "hers";
                }
                else
                {
                    words[i] = "his";
                };
            }
        }

        string modifiedText = string.Join(" ", words); // 리스트를 다시 문자열로 합침
        Debug.Log(modifiedText);

        return modifiedText;
    }
}

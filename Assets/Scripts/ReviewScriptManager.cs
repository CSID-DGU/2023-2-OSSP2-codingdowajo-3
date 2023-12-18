using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Threading.Tasks;
using System;
using System.IO;
using TMPro;
using LitJson;
public class DiaryData
{
    public string DiaryContent;
    // public string ImageUrl;

    public DiaryData(string diaryContent)
    {
        DiaryContent = diaryContent;
        // ImageUrl = imageUrl;
    }
}
public class ReviewScriptManager : MonoBehaviour
{
    public string fileName;
    public string userInput;
    public string userpmt;

    public int count = 0;

    public GameObject reviewWindow;
    public GameObject reviewImageWindow;
    public GameObject reviewNextBtn;
    public GameObject reviewEditBtn;
    public GameObject reviewOkBtn;
    public GameObject endPanel;
    public GameObject loadingTab;

    public Animator anim;

    public Image uiImage;
    public Image reviewImage;

    public Text editText;
    public Text pointText;
    public Text charaText;

    public TMP_InputField userInputField;
    private TouchScreenKeyboard keyboard;
    private const string outputPath = "Assets/Diary/";

    private TestAPI testAPI;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Called when the script instance is being loaded
    void OnEnable()
    {
        // 씬이 활성화될 때마다 초기화를 수행
        Initialize();
    }

    void Initialize()
    {
        testAPI = gameObject.GetComponent<TestAPI>();
        if (testAPI == null)
        {
            testAPI = gameObject.AddComponent<TestAPI>();
        }
        fileName = DateTime.Now.ToString("yyyyMMdd_HHmmss");
        userInput = getInput(userInputField, fileName);
        count = 0;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public string getInput(TMP_InputField inputField, string fileName)
    {
        Debug.Log("input");
        // 사용자가 Input Field를 터치하면 터치 스크린 키보드를 활성화
        if (Input.GetMouseButtonDown(0))
        {
            // 터치 스크린 키보드를 활성화하고, Input Field에 연결
            TouchScreenKeyboard.Open("", TouchScreenKeyboardType.Default, false, false, false, false, "", 200);
            inputField.ActivateInputField(); // Input Field에 포커스를 맞춤
        }

        // 키보드가 열려 있고, 사용자가 입력을 완료했을 때
        if (keyboard != null && keyboard.status == TouchScreenKeyboard.Status.Done)
        {
            // 입력된 텍스트 출력
            Debug.Log("입력된 텍스트: " + keyboard.text);

            // 키보드 닫기
            keyboard = null;
        }
        // 사용자 입력 받기
        string userPrompt = inputField.text;
        
        return userPrompt;
    }
    void SaveUserPromptAsJson(string userPrompt, string fileName)
    {
        userpmt = userPrompt;
        //DiaryData diaryData = new DiaryData(userPrompt);

        //string jsonFilePath = Path.Combine(outputPath, fileName + ".json");

        // JSON으로 데이터 변환 (litJson 사용)
        //JsonData diaryJson = JsonMapper.ToJson(diaryData);

        // JSON 파일 저장
        //System.IO.File.WriteAllText(jsonFilePath, diaryJson.ToString());

    }

    public async void nextbtn()
    {
        Debug.Log("nextbtn");
        count++;

        userInput = userInputField.text;
        //SaveUserPromptAsJson(userInput, fileName);
        userpmt = userInput;
        TestAPI testAPI = gameObject.AddComponent<TestAPI>();

        await testAPI.GPTapi(userInput);
        HideReview();
        ShowLoding();
        Invoke("HideLoding", 30f);
        ShowReviewImage();
        UnityEngine.Debug.Log("test2");

        StartCoroutine(testAPI.DALLEapi(fileName, uiImage, userpmt));
        UnityEngine.Debug.Log("test3");

    }

    public void okbtn()
    {
        //애니메이션 출력
        HideReviewImage();
        reviewImage = uiImage;
        reviewImage.gameObject.SetActive(true);
        anim.SetBool("isOkay", true);

        //보상
        ToggleRandomElement();

        int randomPoint = UnityEngine.Random.Range(700, 800);
        Player_Character.UserChar_Exp += 70;
        Player_Character.point += randomPoint;
        pointText.text = "포인트 +" + randomPoint.ToString();

        endPanel.SetActive(true);

    }

    public void editbtn()
    {
        if (count > 2)
        {
            ShowText();
            Invoke("HideText", 2f);

            if (count > 6)
            {
                okbtn();
            }
        }
        else
        {
            HideReviewImage();
            ShowReview();

            TestAPI testAPI = gameObject.AddComponent<TestAPI>();

            userInput = getInput(userInputField, fileName);
        }

    }

    void ToggleRandomElement()
    {
        int trueCount = CountTrueElements();

        // 모든 원소가 true인 경우 메시지 출력
        if (trueCount == Player_Character.Have_BlackHistoryCharacter.Length)
        {
            Debug.Log("모든 원소가 이미 true입니다.");
            charaText.text = "흑역사 캐릭터를 전부 모았습니다.";
            return;
        }

        // 랜덤한 인덱스를 선택하고 해당 원소의 값을 반전
        int randomIndex;
        do
        {
            randomIndex = UnityEngine.Random.Range(0, Player_Character.Have_BlackHistoryCharacter.Length);
        } while (Player_Character.Have_BlackHistoryCharacter[randomIndex]);

        Player_Character.Have_BlackHistoryCharacter[randomIndex] = true;

        Debug.Log($"인덱스 {randomIndex}의 원소가 true로 변경되었습니다.");
        charaText.text = "흑역사 캐릭터 획득!";
    }

    int CountTrueElements()
    {
        // 리스트에서 true인 원소의 개수를 세는 함수
        int listcount = 0;
        foreach (bool element in Player_Character.Have_BlackHistoryCharacter)
        {
            if (element)
            {
                listcount++;
            }
        }
        return listcount;
    }

    public void mainbtn()
    {
        Player_Character.save_settings();
        SceneManager.LoadScene("MainScene");
    }
    public void main_btn()
    {
        Debug.Log("종료 버튼");
        Player_Character.save_settings();
        SceneManager.LoadScene("MainScene");
    }
    public void HideReview()
    {
        // 창 오브젝트를 비활성화하여 숨깁니다.
        reviewWindow.SetActive(false);
    }
    public void ShowReview()
    {
        // 창 오브젝트를 활성화하여 보이게 합니다.
        reviewWindow.SetActive(true);
    }
    public void HideReviewImage()
    {
        // 창 오브젝트를 비활성화하여 숨깁니다.
        reviewImageWindow.SetActive(false);
    }
    public void ShowReviewImage()
    {
        // 창 오브젝트를 활성화하여 보이게 합니다.
        reviewImageWindow.SetActive(true);
    }
    void ShowText()
    {
        editText.enabled = true;
    }
    void HideText()
    {
        editText.enabled = false;
    }
    public void HideLoding()
    {
        // 창 오브젝트를 비활성화하여 숨깁니다.
        loadingTab.SetActive(false);
    }
    public void ShowLoding()
    {
        // 창 오브젝트를 활성화하여 보이게 합니다.
        loadingTab.SetActive(true);
    }
}

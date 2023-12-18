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
        // ���� Ȱ��ȭ�� ������ �ʱ�ȭ�� ����
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
        // ����ڰ� Input Field�� ��ġ�ϸ� ��ġ ��ũ�� Ű���带 Ȱ��ȭ
        if (Input.GetMouseButtonDown(0))
        {
            // ��ġ ��ũ�� Ű���带 Ȱ��ȭ�ϰ�, Input Field�� ����
            TouchScreenKeyboard.Open("", TouchScreenKeyboardType.Default, false, false, false, false, "", 200);
            inputField.ActivateInputField(); // Input Field�� ��Ŀ���� ����
        }

        // Ű���尡 ���� �ְ�, ����ڰ� �Է��� �Ϸ����� ��
        if (keyboard != null && keyboard.status == TouchScreenKeyboard.Status.Done)
        {
            // �Էµ� �ؽ�Ʈ ���
            Debug.Log("�Էµ� �ؽ�Ʈ: " + keyboard.text);

            // Ű���� �ݱ�
            keyboard = null;
        }
        // ����� �Է� �ޱ�
        string userPrompt = inputField.text;
        
        return userPrompt;
    }
    void SaveUserPromptAsJson(string userPrompt, string fileName)
    {
        userpmt = userPrompt;
        //DiaryData diaryData = new DiaryData(userPrompt);

        //string jsonFilePath = Path.Combine(outputPath, fileName + ".json");

        // JSON���� ������ ��ȯ (litJson ���)
        //JsonData diaryJson = JsonMapper.ToJson(diaryData);

        // JSON ���� ����
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
        //�ִϸ��̼� ���
        HideReviewImage();
        reviewImage = uiImage;
        reviewImage.gameObject.SetActive(true);
        anim.SetBool("isOkay", true);

        //����
        ToggleRandomElement();

        int randomPoint = UnityEngine.Random.Range(700, 800);
        Player_Character.UserChar_Exp += 70;
        Player_Character.point += randomPoint;
        pointText.text = "����Ʈ +" + randomPoint.ToString();

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

        // ��� ���Ұ� true�� ��� �޽��� ���
        if (trueCount == Player_Character.Have_BlackHistoryCharacter.Length)
        {
            Debug.Log("��� ���Ұ� �̹� true�Դϴ�.");
            charaText.text = "�濪�� ĳ���͸� ���� ��ҽ��ϴ�.";
            return;
        }

        // ������ �ε����� �����ϰ� �ش� ������ ���� ����
        int randomIndex;
        do
        {
            randomIndex = UnityEngine.Random.Range(0, Player_Character.Have_BlackHistoryCharacter.Length);
        } while (Player_Character.Have_BlackHistoryCharacter[randomIndex]);

        Player_Character.Have_BlackHistoryCharacter[randomIndex] = true;

        Debug.Log($"�ε��� {randomIndex}�� ���Ұ� true�� ����Ǿ����ϴ�.");
        charaText.text = "�濪�� ĳ���� ȹ��!";
    }

    int CountTrueElements()
    {
        // ����Ʈ���� true�� ������ ������ ���� �Լ�
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
        Debug.Log("���� ��ư");
        Player_Character.save_settings();
        SceneManager.LoadScene("MainScene");
    }
    public void HideReview()
    {
        // â ������Ʈ�� ��Ȱ��ȭ�Ͽ� ����ϴ�.
        reviewWindow.SetActive(false);
    }
    public void ShowReview()
    {
        // â ������Ʈ�� Ȱ��ȭ�Ͽ� ���̰� �մϴ�.
        reviewWindow.SetActive(true);
    }
    public void HideReviewImage()
    {
        // â ������Ʈ�� ��Ȱ��ȭ�Ͽ� ����ϴ�.
        reviewImageWindow.SetActive(false);
    }
    public void ShowReviewImage()
    {
        // â ������Ʈ�� Ȱ��ȭ�Ͽ� ���̰� �մϴ�.
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
        // â ������Ʈ�� ��Ȱ��ȭ�Ͽ� ����ϴ�.
        loadingTab.SetActive(false);
    }
    public void ShowLoding()
    {
        // â ������Ʈ�� Ȱ��ȭ�Ͽ� ���̰� �մϴ�.
        loadingTab.SetActive(true);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class tutorial_startScene : MonoBehaviour
{
    public Text dialogueText;  // 대화 텍스트 UI
    public Image fadePanel;  // 화면을 어둡게 할 패널
    private int currentIndex = 0;  // 현재 출력 중인 문장의 인덱스

    List<string> sentences = new List<string>() // 출력할 문구
    {
        "first sentence \n qwredsfsfas",
        "2 sentence \n fsfsfsafsa \n fdsfsfsafs"
    };

    private void Start()
    {
        begin_tutorial();//시놉시스 시작
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))//터치하면 다음 문장 나온다
        {
            DisplayNextSentence();
        }
    }

    public void begin_tutorial()//시놉시스 시작
    {
        StartCoroutine(FadeInPanel());
    }

    IEnumerator TypeSentence(string sentence)//문장을 한글자씩 나오게 한다
    {
        dialogueText.text = "";
        foreach (char letter in sentence.ToCharArray())
        {
            dialogueText.text += letter;
            yield return new WaitForSeconds(0.08f);
        }
    }

    public void DisplayNextSentence()//터치하면 다음 문장
    {
        currentIndex++;
        if (currentIndex >= sentences.Count)
        {
            EndDialogue();
            return;
        }
        StartCoroutine(TypeSentence(sentences[currentIndex]));
    }

    void EndDialogue() 
    {
        SceneManager.LoadScene("MainScene");
    }

    IEnumerator FadeInPanel()//어두워지다가 문장들을 보여준다
    {
        float duration = 1.0f;  // 어두워지는 데 걸리는 시간
        float targetAlpha = 0.5f;  // 최종 알파값
        float elapsed = 0f;
        Color color = fadePanel.color;

        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            color.a = Mathf.Lerp(0f, targetAlpha, elapsed / duration);
            fadePanel.color = color;
            yield return null;
        }

        StartCoroutine(TypeSentence(sentences[currentIndex]));
    }
}

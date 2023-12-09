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
    private bool isTyping = false; // 텍스트 출력 중인지 확인하는 변수

    List<string> sentences = new List<string>() // 출력할 문구
    {
        "우리가 지금 있는 이곳은 '기억의 바다'라고 불리는 곳입니다.\n오랜 시간 동안, 이 바다는 사람들이 자신의 기억을 떠나보내며 그 기억으로부터 해방되는 곳이었습니다.",
        "기억이 바다에 흘려보내질 때마다, 바다는 그 기억을 흡수해 생태계를 유지하게 되었죠.\n그러나 사람들은 슬픔에 찬 기억을 다시 떠올리기를 원하지 않았습니다.\n그래서 그들은 기억을 바다에 흘려보내는 것을 멈추었고, 바다는 점차 황폐해지기 시작했습니다.",
        "여러분의 역할은 바로 이 황폐해진 바다를 정화하는 것입니다.\n 여러분의 흑역사, 그리고 그 기억을 바다로 흘려보내주세요.\n 기억을 흘러보낼수록, 바다는 다시 한번 생동감을 찾게 될 것입니다.\n 또한, 자신의 잊고싶은 기억을 마주보는것으로서 마음을 치유할 수 있을것입니다.",
        "플레이어 여러분, 바다를 정화하고, 다시 한번 바다의 생명력을 회복시키는 데 도움을 주세요.\n 여러분은 자신의 흑역사로부터 해방되고, 바다는 다시 한번 생명력을 찾을 것입니다.\n 그럼 여러분들, 스스로를 돌아보는 여행 시작입니다!"
    };

    private void Start()
    {
        begin_tutorial();//시놉시스 시작
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))//터치하면 다음 문장 나온다
        {
            if (isTyping) // 텍스트 출력 중일 경우
            {
                StopAllCoroutines(); // 현재 실행 중인 모든 코루틴 멈춤
                dialogueText.text = sentences[currentIndex]; // 현재 문장 바로 완성
                isTyping = false; // 텍스트 출력 상태 변경
            }
            else // 텍스트 출력 중이 아닐 경우
            {
                DisplayNextSentence();
            }
        }
        
    }

    public void begin_tutorial()//시놉시스 시작
    {
        StartCoroutine(FadeInPanel());
    }

    IEnumerator TypeSentence(string sentence)//문장을 한글자씩 나오게 한다
    {
        isTyping = true; // 텍스트 출력 시작
        dialogueText.text = "";
        foreach (char letter in sentence.ToCharArray())
        {
            dialogueText.text += letter;
            yield return new WaitForSeconds(0.08f);
        }
        isTyping = false; // 텍스트 출력 완료
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
        PlayerPrefs.SetInt("FirstRun", 1);
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

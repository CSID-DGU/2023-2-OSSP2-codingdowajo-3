using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class endingSceneDialogue : MonoBehaviour
{
    public Text dialogueText;  // 대화 텍스트 UI
    public SpriteRenderer fadePanel;  // 화면을 어둡게 할 패널
    private int currentIndex = 0;  // 현재 출력 중인 문장의 인덱스
    private bool isTyping = false; // 텍스트 출력 중인지 확인하는 변수

    List<string> sentences = new List<string>() // 출력할 문구
    {
        "플레이어님 덕분에 드디어 바다가 깨끗이 정화되었습니다!",
        "흑역사 캐릭터 친구들이 플레이어님 덕분에 깨끗한 바다에서 살 수 있게 되었어요!",
        "플레이어님은 즐거운 여정이셨나요?",
        "저희의 게임이 플레이어님의 흑역사 극복에 도움이 되었다면 좋겠습니다",
        "플레이어님의 앞날을 응원하겠습니다",
        "지금까지 저희 게임을 플레이해주셔서 감사합니다!\n-공개SW프로젝트 3조 코딩도와조-"
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
        StartCoroutine(FadeOut());
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
        PlayerPrefs.SetInt("FirstEnding", 1);
        SceneManager.LoadScene("MainScene");
    }

    
    IEnumerator FadeOut()
    {
        Color fromColor = fadePanel.color; //시작 밝기
        Color toColor =  new Color(fadePanel.color.r, fadePanel.color.g, fadePanel.color.b, 0.8f); // 최종 밝기
        float elapsedTime = 0f;
        float fadeDuration = 6.0f; // Fade 효과에 걸리는 시간 (초)

        while (elapsedTime < fadeDuration)
        {
            elapsedTime += Time.deltaTime;
            float t = elapsedTime / fadeDuration; // 진행도 (0 ~ 1)
            fadePanel.color = Color.Lerp(fromColor, toColor, t); // 현재 색상을 계산
            yield return null;
        }

        fadePanel.color = toColor; // 최종 색상을 확실히 설정
    }
}
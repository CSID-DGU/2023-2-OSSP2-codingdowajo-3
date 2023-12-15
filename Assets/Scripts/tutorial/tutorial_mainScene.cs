using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Threading;

public class tutorial_mainScene : MonoBehaviour
{
    int numberOfElements = 11;
    public GameObject[] highlightCircle; // 동그라미 이미지
    public Text descriptionText; // 설명 텍스트 창
    public GameObject[] discriptionBox; // 설명 박스
    string[] descriptions =  // 각 게임 요소에 대한 설명들
    {
        "레벨과 경험치입니다.\n레벨이 오르면 플레이어 캐릭터가 진화해요!",
        "상점에서 아이템을 구매할 수 있는 포인트입니다.",
        "회고에 입장할 수 있는 입장권인 흑역사 종이입니다.",
        "포인트로 아이템을 구매할 수 있는 상점입니다.",
        "구매한 아이템들은 인벤토리창 안에 들어가있습니다.",
        "회고로 얻은 흑역사 캐릭터를 도감에서 확인하세요.\n특별한 캐릭터를 얻으면 고유의 스토리를 볼 수 있어요!",
        "지금까지의 회고 기록을 볼 수 있어요.",
        "하루에 한번, 흑역사 종이를 받으세요.",
        "게임의 주요 컨텐츠입니다.\n이곳에서 자신의 흑역사를 극복해보세요!",
        "게임의 각종 설정을 조정하세요.",
        "흑역사 종이를 얻을 수 있는 미니게임을 즐기세요"
    };
    public GameObject tutorial_main;//메인 튜토리얼

    private bool isTyping = false; // 텍스트 출력 중인지 확인하는 변수

    private int currentElementIndex = 0; // 현재 설명 중인 게임 요소의 인덱스

    private void Start()
    {
        Thread.Sleep(50);
        ShowNext();
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))//터치하면 다음 문장 나온다
        {
            if (isTyping) // 텍스트 출력 중일 경우
            {
                StopAllCoroutines(); // 현재 실행 중인 모든 코루틴 멈춤
                descriptionText.text = descriptions[currentElementIndex]; // 현재 문장 바로 완성
                isTyping = false; // 텍스트 출력 상태 변경
            }
            else // 텍스트 출력 중이 아닐 경우
            {
                touchScreen();
            }
        }
    }

    IEnumerator TypeSentence(string sentence)//문장을 한글자씩 나오게 한다
    {
        isTyping = true; // 텍스트 출력 시작
        descriptionText.text = "";
        foreach (char letter in sentence.ToCharArray())
        {
            descriptionText.text += letter;
            yield return new WaitForSeconds(0.08f);
        }
        isTyping = false; // 텍스트 출력 완료
    }

    private void ShowNext()
    {
        if (currentElementIndex < numberOfElements)
        {
            // 현재 게임 요소를 동그라미 이미지로 하이라이트
            highlightCircle[currentElementIndex].SetActive(true);

            // 해당 게임 요소에 대한 설명을 텍스트 창에 출력
            StartCoroutine(TypeSentence(descriptions[currentElementIndex]));
        }
        else
        {
            tutorial_main.SetActive(false);
            PlayerPrefs.SetInt("FirstRun", 0);
        }
    }

    // 사용자가 튜토리얼의 다음 부분으로 넘어가기 위해 화면을 터치하거나 버튼을 클릭하면 호출
    public void touchScreen()
    {
        // 이전 동그라미 요소 비활성화
        highlightCircle[currentElementIndex].SetActive(false);
        currentElementIndex++;
        ShowNext();
    }
}

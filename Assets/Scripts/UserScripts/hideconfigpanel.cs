using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class hideconfigpanel : MonoBehaviour
{   public Canvas canvas;
    public GameObject panel; // 패널 오브젝트를 드래그 앤 드롭으로 연결할 수 있는 public 변수
     public GameObject modalBG;
    private void Start()
    {
        // 버튼의 클릭 이벤트에 함수를 연결
        Button button = GetComponentInChildren<Button>();
        if (button != null)
        {   
            button.onClick.AddListener(OnButtonClick);
        }
    }

    // 버튼 클릭 이벤트 핸들러 함수
    private void OnButtonClick()
    {
        if (panel != null)
        {
            // 패널을 비활성화
            panel.SetActive(false);
            modalBG.SetActive(false);
            canvas.sortingOrder = 0; 
        }
    }
}

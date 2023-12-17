using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class hideinventory : MonoBehaviour
{
    public Canvas canvas;

     public GameObject modalBG;
    public GameObject invenpanel; // 패널 오브젝트를 드래그 앤 드롭으로 연결할 수 있는 public 변수

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
        if (invenpanel != null)
        {
            // 패널을 비활성화
            invenpanel.SetActive(false);
            modalBG.SetActive(false);
            canvas.sortingOrder = 0;
            Player_Item_Equipped.update_item();

            Player_Character.save_settings();
        }
    }
}
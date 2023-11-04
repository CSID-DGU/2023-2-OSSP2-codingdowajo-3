using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class revTab : MonoBehaviour
{
    private GameObject reviewWindow;

    private void Start()
    {
        // 창 오브젝트에 대한 레퍼런스를 얻어옵니다.
        reviewWindow = GameObject.Find("reviewTab"); // "WindowObject"는 오브젝트의 이름입니다. 실제로 사용하는 오브젝트의 이름으로 변경하세요.
    }

    public void HideWindow()
    {
        // 창 오브젝트를 비활성화하여 숨깁니다.
        reviewWindow.SetActive(false);
    }

    public void ShowWindow()
    {
        // 창 오브젝트를 활성화하여 보이게 합니다.
        reviewWindow.SetActive(true);
    }
}

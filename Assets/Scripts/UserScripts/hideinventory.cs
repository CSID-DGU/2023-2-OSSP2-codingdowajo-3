using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class hideinventory : MonoBehaviour
{
    public Canvas canvas;

     public GameObject modalBG;
    public GameObject invenpanel; // �г� ������Ʈ�� �巡�� �� ������� ������ �� �ִ� public ����

    private void Start()
    {
        // ��ư�� Ŭ�� �̺�Ʈ�� �Լ��� ����
        Button button = GetComponentInChildren<Button>();
        if (button != null)
        {
            button.onClick.AddListener(OnButtonClick);
        }
    }

    // ��ư Ŭ�� �̺�Ʈ �ڵ鷯 �Լ�
    private void OnButtonClick()
    {
        if (invenpanel != null)
        {
            // �г��� ��Ȱ��ȭ
            invenpanel.SetActive(false);
            modalBG.SetActive(false);
            canvas.sortingOrder = 0;
            Player_Item_Equipped.update_item();

            Player_Character.save_settings();
        }
    }
}
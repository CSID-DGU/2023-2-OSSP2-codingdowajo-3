using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static UnityEditor.Progress;

//도감창 스크립트
public class CharacterCollection : MonoBehaviour
{
    public List<BlackHistoryCharacter> List_BlackHistoryCharacter;//흑역사 캐릭터 전체 리스트

    [SerializeField]
    private Transform slotParent; //Panel을 담는 공간
    [SerializeField]
    private Slot_Character[] slots;//슬롯들

#if UNITY_EDITOR
    private void OnValidate()
    {
        slots = slotParent.GetComponentsInChildren<Slot_Character>(); //slots에 slotParent안의 모든 slot 넣기
    }
#endif

    void Awake()
    {
        FreshSlot();
    }

    public void FreshSlot()//슬롯 안에 흑역사 캐릭터 넣기
    {
        for (int i = 0; i < slots.Length; i++)
        {
            slots[i].blackHistoryCharacter = List_BlackHistoryCharacter[i];
        }
    }


    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
}

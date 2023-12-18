using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
#if UNITY_EDITOR
using static UnityEditor.Progress;
#endif

//도감창 안 슬롯에 흑역사 캐릭터 띄워주기
public class Slot_Character : MonoBehaviour
{
    [SerializeField] Image image;//띄워줄 이미지    
    [SerializeField] Sprite questionMark;
    
    private BlackHistoryCharacter _blackHistoryCharacter;
    public BlackHistoryCharacter blackHistoryCharacter //캐릭터 띄우기
    {
        get { return _blackHistoryCharacter; }
        set
        {
            _blackHistoryCharacter = value;
            if (Player_Character.Have_BlackHistoryCharacter[_blackHistoryCharacter.CharacterIndex] == true)//흑역사 캐릭터 가지고있으면
            {

                image.sprite = _blackHistoryCharacter.CharacterImage;
                image.color = new Color(1, 1, 1, 1);
            }
            else//흑역사 캐릭터를 가지고있지 않으면
            {
                image.sprite = questionMark;
                image.color = new Color(1, 1, 1, 1);
            }
        }
    }

    private void Awake()
    {

    }

    //캐릭터 띄우기
    private void OnEnable()
    {
        if (blackHistoryCharacter != null)//없으면 nullreference오류남; 이벤트 발생 순서때문
        {
            if (Player_Character.Have_BlackHistoryCharacter[_blackHistoryCharacter.CharacterIndex] == true)
            {
                image.sprite = _blackHistoryCharacter.CharacterImage;
                image.color = new Color(1, 1, 1, 1);
            }
            else
            {
                image.sprite = questionMark;
                image.color = new Color(1, 1, 1, 1);
            }
        }
    }


    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

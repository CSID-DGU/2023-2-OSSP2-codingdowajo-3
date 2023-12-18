using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
#if UNITY_EDITOR
using static UnityEditor.Progress;
#endif

//����â �� ���Կ� �濪�� ĳ���� ����ֱ�
public class Slot_Character : MonoBehaviour
{
    [SerializeField] Image image;//����� �̹���    
    [SerializeField] Sprite questionMark;
    
    private BlackHistoryCharacter _blackHistoryCharacter;
    public BlackHistoryCharacter blackHistoryCharacter //ĳ���� ����
    {
        get { return _blackHistoryCharacter; }
        set
        {
            _blackHistoryCharacter = value;
            if (Player_Character.Have_BlackHistoryCharacter[_blackHistoryCharacter.CharacterIndex] == true)//�濪�� ĳ���� ������������
            {

                image.sprite = _blackHistoryCharacter.CharacterImage;
                image.color = new Color(1, 1, 1, 1);
            }
            else//�濪�� ĳ���͸� ���������� ������
            {
                image.sprite = questionMark;
                image.color = new Color(1, 1, 1, 1);
            }
        }
    }

    private void Awake()
    {

    }

    //ĳ���� ����
    private void OnEnable()
    {
        if (blackHistoryCharacter != null)//������ nullreference������; �̺�Ʈ �߻� ��������
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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static UnityEditor.Progress;

//����â ��ũ��Ʈ
public class CharacterCollection : MonoBehaviour
{
    public List<BlackHistoryCharacter> List_BlackHistoryCharacter;//�濪�� ĳ���� ��ü ����Ʈ

    [SerializeField]
    private Transform slotParent; //Panel�� ��� ����
    [SerializeField]
    private Slot_Character[] slots;//���Ե�

#if UNITY_EDITOR
    private void OnValidate()
    {
        slots = slotParent.GetComponentsInChildren<Slot_Character>(); //slots�� slotParent���� ��� slot �ֱ�
    }
#endif

    void Awake()
    {
        FreshSlot();
    }

    public void FreshSlot()//���� �ȿ� �濪�� ĳ���� �ֱ�
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

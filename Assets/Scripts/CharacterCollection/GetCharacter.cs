using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//�׽�Ʈ ���� ��ũ��Ʈ: �濪�� ĳ���� 1�� ���
public class GetCharacter : MonoBehaviour
{
    // Start is called before the first frame update 
    public static int Index = 0;
    public void GetCh()//�濪�� ĳ���� 1�� ��� �Լ�
    {
        if (Index < PLAYER_CONSTANT.NumOf_BlackHistoryCharacter)
        {
            if (Player_Character.Have_BlackHistoryCharacter[Index] == false)
            {
                Player_Character.Have_BlackHistoryCharacter[Index++] = true;
                Debug.Log(Index + "character -> ON");
            }
            else
            {
                Debug.Log("already On");
            }
        }
        else
        {
            Debug.Log("full collection");
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

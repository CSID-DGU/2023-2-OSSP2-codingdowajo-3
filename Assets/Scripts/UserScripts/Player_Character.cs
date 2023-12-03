using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public static class PLAYER_CONSTANT
{
    //�濪�� ĳ������ ��
    public const int NumOf_BlackHistoryCharacter = 30;
}

public class Player_Character : MonoBehaviour
{

    public static int gender = 0; //0:male, 1:female
    public static Image char_img;

    //�������� ��ü ������ 6��
    public const int numofitems = 6;

    //�÷��̾�ĳ������ ���� ����. 0�� ����Ʈ
    public static int state_of_player_char = -1;

    //�÷��̾�� Ư�� �������� �ִ����� ��Ÿ�� bool�迭

    public static bool[] haveitems = new bool[numofitems] {
    /*   hat1       hat2       hat3          */
        true,     true,      true, 
    /*  glasses1   glasses2    glasses3      */
        true,      true,      true
    };

    //������ �濪�� ĳ���� - index�� ����; Have_BlackHistoryCharacter[CharacterIndex] = True of False
    public static bool[] Have_BlackHistoryCharacter = new bool[PLAYER_CONSTANT.NumOf_BlackHistoryCharacter];

    //�÷��̾�ĳ���� ����
    public static int UserChar_Level = 1;
    //�÷��̾�ĳ���� ����ġ
    public static int UserChar_Exp = 0;
    //1����ȭ����
    public static bool evolution_1 = false;
    //2����ȭ����
    public static bool evolution_2 = false;
    //�濪�����̰���
    public static int BlackHistoryPaper = 0;

    public static void update_appearance() {
        //2nd evolution
        if(evolution_2){
            switch(gender){
            case 0: char_img.sprite = Resources.Load<Sprite>("0_2");break;
            case 1: char_img.sprite = Resources.Load<Sprite>("1_2");break;
            }
        }
        //1st evolution
        else if(evolution_1){
            switch(gender){
            case 0: char_img.sprite = Resources.Load<Sprite>("0_1");break;
            case 1: char_img.sprite = Resources.Load<Sprite>("1_1");break;
            }
        }
        else {
            switch(gender){
            case 0: char_img.sprite = Resources.Load<Sprite>("0_0");break;
            case 1: char_img.sprite = Resources.Load<Sprite>("1_0");break;
            }
        }
        Player_Item_Equipped.update_item();
    }
    
    // Start is called before the first frame update
    void Start()
    {
         char_img = GetComponent<Image>();
        update_appearance();
    }
}

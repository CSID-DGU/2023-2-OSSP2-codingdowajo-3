using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player_Character : MonoBehaviour
{
    //아이템의 전체 개수는 6개
    public const int numofitems = 6;
    //플레이어캐릭터의 외형 상태. 0이 디폴트
    public static int state_of_player_char = 0;
    //플레이어에게 특정 아이템이 있는지를 나타낸 bool배열
    public static bool[] haveitems = new bool[numofitems]
    /*                           안경         */
        {false,     false,      false, 
    /*               모자                     */
        false,      false,      false};

    //플레이어캐릭터 레벨
    public static int UserChar_Level = 1;
    //플레이어캐릭터 경험치
    public static int UserChar_Exp = 0;
    //1차진화상태
    public static bool evolution_1 = false;
    //2차진화상태
    public static bool evolution_2 = false;
    //흑역사종이개수
    public static int BlackHistoryPaper = 0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

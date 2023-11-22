using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Player_Character : MonoBehaviour
{
    public static int gender = 0; //0:male, 1:female
    public static Image char_img;

    //아이템의 전체 개수는 6개
    public const int numofitems = 6;
    //플레이어캐릭터의 외형 상태. 0이 디폴트
    public static int state_of_player_char = -1;
    //플레이어에게 특정 아이템이 있는지를 나타낸 bool배열

    public static bool[] haveitems = new bool[numofitems] {
    /*   hat1       hat2       hat3          */
        true,     true,      true, 
    /*  glasses1   glasses2    glasses3      */
        true,      true,      true
    };

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

    void update_appearance() {
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
    }

    void Awake() { char_img = GetComponent<Image>(); 
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {   
        if(char_img) update_appearance();
    }
}

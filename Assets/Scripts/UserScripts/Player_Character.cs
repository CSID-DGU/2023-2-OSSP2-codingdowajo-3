using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public static class PLAYER_CONSTANT
{
    //흑역사 캐릭터의 수
    public const int NumOf_BlackHistoryCharacter = 30;
}

public class Player_Character : MonoBehaviour
{

    public static int gender = 0; //0:male, 1:female
    public static Image char_img;

    //아이템의 전체 개수는 6개
    public const int numofitems = 6;

    /* 플레이어캐릭터가 착용하는 아이템 상태. 0이 디폴트. 
        -1은 아이템 없고, 0부터 5까지가 아이템
    */
    public static int state_of_player_char = -1;

    //플레이어에게 특정 아이템이 있는지를 나타낸 bool배열

    public static bool[] haveitems = new bool[numofitems] {
    /*   hat1       hat2       hat3          */
        false,     false,      false, 
    /*  glasses1   glasses2    glasses3      */
        false,      false,      false
    };

    // 플레이어가 현재 가지고 있는 point
    public static int point = 0;

    //소유한 흑역사 캐릭터 - index로 관리; Have_BlackHistoryCharacter[CharacterIndex] = True of False
    public static bool[] Have_BlackHistoryCharacter = new bool[PLAYER_CONSTANT.NumOf_BlackHistoryCharacter];

    //플레이어캐릭터 레벨
    public static int UserChar_Level = 1;
    /* 플레이어캐릭터 경험치, 경험치 업데이트 시엔 get_exp함수 호출 */
    public static int UserChar_Exp = 0;
    //1차진화상태
    public static bool evolution_1 = false;
    //2차진화상태
    public static bool evolution_2 = false;
    //흑역사종이개수
    public static int BlackHistoryPaper = 0;

    //플레이어캐릭터 외형 변경. 성별/진화/아이템
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

    /* 경험치 값 바뀔 때는 이 함수를 호출 */
    public static void get_exp(int n) {
        UserChar_Exp += n;
        CurrentLevel.level_and_evolution_update();
        save_settings();
        }

    /* 흑역사종이 얻을 때 이 함수를 호출 */
    public static void get_paper(int n) {
        BlackHistoryPaper += n;
        save_settings();
    }
    void Start()
    {   
        /* settings.json 파일 경로 출력문 */
        //Debug.Log("Persistent Data Path: " + Application.persistentDataPath);
    
        load_settings();    //load json settings
        char_img = GetComponent<Image>();
        CurrentLevel.level_and_evolution_update();
    }

    void Update() {
        //save_settings();
    }

    /* 흑역사 종이 지급 버튼 마지막 클릭 시간 불러오기 위한 변수 */
    public static DateTime lastclicktime_getpaperbutton;
    // json 설정 불러오는 함수
    void load_settings(){
        GameSettings loadedSettings = ManageData.LoadSettings();

        gender = loadedSettings.gender;//성별
        UserChar_Level = loadedSettings.level;//레벨
        UserChar_Exp = loadedSettings.exp;//경험치
        state_of_player_char = loadedSettings.state_of_player_char;//장착한아이템
        if(state_of_player_char != -1 && !haveitems[state_of_player_char]) state_of_player_char = -1;
        //haveitems = loadedSettings.haveitems; //아이템을 가지고 있는가
        BlackHistoryPaper = loadedSettings.BlackHistoryPaper;//흑역사종이개수
        lastclicktime_getpaperbutton = loadedSettings.lastclick_getpaper;//흑역사종이지급버튼마지막클릭시간

        //*********************************************************추가-박형준
        Array.Copy(loadedSettings.Have_BlackHistoryCharacter, Have_BlackHistoryCharacter, Have_BlackHistoryCharacter.Length);//흑역사 캐릭터 도감 소유 리스트
        //*********************************************************
    }

    // json 설정 저장하는 함수
    public static void save_settings() {
        // 설정 변경
        GameSettings mySettings = new GameSettings();
        
            mySettings.gender = gender;//성별
            mySettings.level = UserChar_Level;//레벨
            mySettings.exp = UserChar_Exp;//경험치
            mySettings.state_of_player_char = state_of_player_char;//장착한아이템
            //mySettings.haveitems = haveitems; //아이템을 가지고 있는가
            mySettings.BlackHistoryPaper = BlackHistoryPaper;//흑역사종이개수
            mySettings.lastclick_getpaper = lastclicktime_getpaperbutton;//흑역사종이지급버튼마지막클릭시간

        //*********************************************************추가-박형준
        Array.Copy(Have_BlackHistoryCharacter, mySettings.Have_BlackHistoryCharacter, Have_BlackHistoryCharacter.Length);//흑역사 캐릭터 도감 소유 리스트
        //*********************************************************

        // 설정 저장
        ManageData.SaveSettings(mySettings);
    }
}

using System;
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

    /* �÷��̾�ĳ���Ͱ� �����ϴ� ������ ����. 0�� ����Ʈ. 
        -1�� ������ ����, 0���� 5������ ������
    */
    public static int state_of_player_char = -1;

    //�÷��̾�� Ư�� �������� �ִ����� ��Ÿ�� bool�迭

    public static bool[] haveitems = new bool[numofitems] {
    /*   hat1       hat2       hat3          */
        false,     false,      false, 
    /*  glasses1   glasses2    glasses3      */
        false,      false,      false
    };

    // �÷��̾ ���� ������ �ִ� point
    public static int point = 0;

    //������ �濪�� ĳ���� - index�� ����; Have_BlackHistoryCharacter[CharacterIndex] = True of False
    public static bool[] Have_BlackHistoryCharacter = new bool[PLAYER_CONSTANT.NumOf_BlackHistoryCharacter];

    //�÷��̾�ĳ���� ����
    public static int UserChar_Level = 1;
    /* �÷��̾�ĳ���� ����ġ, ����ġ ������Ʈ �ÿ� get_exp�Լ� ȣ�� */
    public static int UserChar_Exp = 0;
    //1����ȭ����
    public static bool evolution_1 = false;
    //2����ȭ����
    public static bool evolution_2 = false;
    //�濪�����̰���
    public static int BlackHistoryPaper = 0;

    //�÷��̾�ĳ���� ���� ����. ����/��ȭ/������
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

    /* ����ġ �� �ٲ� ���� �� �Լ��� ȣ�� */
    public static void get_exp(int n) {
        UserChar_Exp += n;
        CurrentLevel.level_and_evolution_update();
        save_settings();
        }

    /* �濪������ ���� �� �� �Լ��� ȣ�� */
    public static void get_paper(int n) {
        BlackHistoryPaper += n;
        save_settings();
    }
    void Start()
    {   
        /* settings.json ���� ��� ��¹� */
        //Debug.Log("Persistent Data Path: " + Application.persistentDataPath);
    
        load_settings();    //load json settings
        char_img = GetComponent<Image>();
        CurrentLevel.level_and_evolution_update();
    }

    void Update() {
        //save_settings();
    }

    /* �濪�� ���� ���� ��ư ������ Ŭ�� �ð� �ҷ����� ���� ���� */
    public static DateTime lastclicktime_getpaperbutton;
    // json ���� �ҷ����� �Լ�
    void load_settings(){
        GameSettings loadedSettings = ManageData.LoadSettings();

        gender = loadedSettings.gender;//����
        UserChar_Level = loadedSettings.level;//����
        UserChar_Exp = loadedSettings.exp;//����ġ
        state_of_player_char = loadedSettings.state_of_player_char;//�����Ѿ�����
        if(state_of_player_char != -1 && !haveitems[state_of_player_char]) state_of_player_char = -1;
        //haveitems = loadedSettings.haveitems; //�������� ������ �ִ°�
        BlackHistoryPaper = loadedSettings.BlackHistoryPaper;//�濪�����̰���
        lastclicktime_getpaperbutton = loadedSettings.lastclick_getpaper;//�濪���������޹�ư������Ŭ���ð�

        //*********************************************************�߰�-������
        Array.Copy(loadedSettings.Have_BlackHistoryCharacter, Have_BlackHistoryCharacter, Have_BlackHistoryCharacter.Length);//�濪�� ĳ���� ���� ���� ����Ʈ
        //*********************************************************
    }

    // json ���� �����ϴ� �Լ�
    public static void save_settings() {
        // ���� ����
        GameSettings mySettings = new GameSettings();
        
            mySettings.gender = gender;//����
            mySettings.level = UserChar_Level;//����
            mySettings.exp = UserChar_Exp;//����ġ
            mySettings.state_of_player_char = state_of_player_char;//�����Ѿ�����
            //mySettings.haveitems = haveitems; //�������� ������ �ִ°�
            mySettings.BlackHistoryPaper = BlackHistoryPaper;//�濪�����̰���
            mySettings.lastclick_getpaper = lastclicktime_getpaperbutton;//�濪���������޹�ư������Ŭ���ð�

        //*********************************************************�߰�-������
        Array.Copy(Have_BlackHistoryCharacter, mySettings.Have_BlackHistoryCharacter, Have_BlackHistoryCharacter.Length);//�濪�� ĳ���� ���� ���� ����Ʈ
        //*********************************************************

        // ���� ����
        ManageData.SaveSettings(mySettings);
    }
}

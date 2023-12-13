using UnityEngine.EventSystems;

[System.Serializable]
public class GameSettings
{
    /* json에 저장할 데이터 타입들 */
    public int gender = 0;//성별
    public int level = 1;//레벨
    public int exp = 0;//경험치
    public int state_of_player_char = -1;//장착한아이템

    public bool[] haveitems = {true, true, true, true, true, true}; //아이템을 가지고 있는가

    public int BlackHistoryPaper = 0;//흑역사종이개수

    //***********************************************************************추가
    public bool[] Have_BlackHistoryCharacter = new bool[PLAYER_CONSTANT.NumOf_BlackHistoryCharacter];
    //*******************************************************************
}

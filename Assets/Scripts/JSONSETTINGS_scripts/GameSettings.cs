using UnityEngine.EventSystems;

[System.Serializable]
public class GameSettings
{
    /* json�� ������ ������ Ÿ�Ե� */
    public int gender = 0;//����
    public int level = 1;//����
    public int exp = 0;//����ġ
    public int state_of_player_char = -1;//�����Ѿ�����

    public bool[] haveitems = {true, true, true, true, true, true}; //�������� ������ �ִ°�

    public int BlackHistoryPaper = 0;//�濪�����̰���

    //***********************************************************************�߰�
    public bool[] Have_BlackHistoryCharacter = new bool[PLAYER_CONSTANT.NumOf_BlackHistoryCharacter];
    //*******************************************************************
}

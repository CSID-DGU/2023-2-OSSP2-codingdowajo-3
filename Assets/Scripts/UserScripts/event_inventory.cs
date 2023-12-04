using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class event_inventory : MonoBehaviour,IPointerClickHandler
{  public Canvas canvas;
    public GameObject modalBG;
    
    private const int invensize = 10;
    public static int[] showwhichitems;
    private void check_haveitems(){
        for(int i = 0;i<invensize;i++) showwhichitems[i] = -1;
        for(int i = 0, j = 0; i <Player_Character.numofitems;i++){
            if(Player_Character.haveitems[i] == true){
                showwhichitems[j++] = i;
            }
        }
        for(int i = 0; i < invensize; i++){
            if(showwhichitems[i]==Player_Character.state_of_player_char){
                switch(i){
                    case 0: item_1.isvisible_item = true;
                    break;
                    case 1: item_2.isvisible_item = true;
                    break;
                    case 2: item_3.isvisible_item = true;
                    break;
                    case 3: item_4.isvisible_item = true;
                    break;
                    case 4: item_5.isvisible_item = true;
                    break;
                    case 5: item_6.isvisible_item = true;
                    break;
                }
            }
        }
    }

    public GameObject inven_pnl;
    public void OnPointerClick(PointerEventData eventData)
    {  
        canvas.sortingOrder = 1; 
        check_haveitems();
       inven_pnl.SetActive(true);
       modalBG.SetActive(true);
       onlyplayerchar.resultImage.sprite = Player_Character.char_img.sprite;
       playerchar_withitem.resultImage.sprite = Player_Item_Equipped.char_item.sprite;
    }
    void Awake() {
        showwhichitems = new int[invensize];
        for(int i = 0;i<invensize;i++) showwhichitems[i] = -1;   
    }
    // Start is called before the first frame update
    private void Start()
    {   
      canvas = GetComponent<Canvas>();
    }
}
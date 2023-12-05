using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
public class item_6 : MonoBehaviour,IPointerClickHandler
{   public static Image itemImage;
    public static  bool isvisible_item = false;
    public GameObject green_check;
    public void OnPointerClick(PointerEventData eventData)
    {
        if(itemImage.sprite == null) return;
       if(isvisible_item == false) {

            if(item_2.isvisible_item == true) item_2.isvisible_item = false;
            else if(item_3.isvisible_item == true) item_3.isvisible_item = false;
            else if(item_4.isvisible_item == true) item_4.isvisible_item = false;
            else if(item_5.isvisible_item == true) item_5.isvisible_item = false;
            else if(item_1.isvisible_item == true) item_1.isvisible_item = false;
            else if(item_7.isvisible_item == true) item_7.isvisible_item = false;
            else if(item_8.isvisible_item == true) item_8.isvisible_item = false;
            else if(item_9.isvisible_item == true) item_9.isvisible_item = false;
            else if(item_10.isvisible_item == true) item_10.isvisible_item = false;

            green_check.SetActive(true);
            isvisible_item = true;
            Player_Character.state_of_player_char = event_inventory.showwhichitems[5];
        }
        else{
            green_check.SetActive(false);
            isvisible_item = false;
            Player_Character.state_of_player_char = -1;
        }
        Player_Item_Equipped.update_item();
        playerchar_withitem.set_resultImg_sprite();
    }
    // Start is called before the first frame update
    void Start()
    {
        if(isvisible_item == true)  green_check.SetActive(true);
        
        itemImage = GetComponent<Image>();
        if(event_inventory.showwhichitems[5] == -1) {itemImage.sprite = null; return;}
        else {
            
            switch(event_inventory.showwhichitems[5]){
                case 0: itemImage.sprite = Resources.Load<Sprite>("1_hat_1");break; 
                case 1: itemImage.sprite = Resources.Load<Sprite>("2_hat_2");break; 
                case 2: itemImage.sprite = Resources.Load<Sprite>("3_hat_3");break;
                case 3: itemImage.sprite = Resources.Load<Sprite>("4_glasses_1");break; 
                case 4: itemImage.sprite = Resources.Load<Sprite>("5_glasses_2");break; 
                case 5: itemImage.sprite = Resources.Load<Sprite>("6_glasses_3");break;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
         if(isvisible_item == false)  green_check.SetActive(false);
    }
}
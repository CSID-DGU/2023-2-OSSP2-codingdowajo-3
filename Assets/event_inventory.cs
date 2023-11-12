using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class event_inventory : MonoBehaviour,IPointerClickHandler
{  private const int invensize = 10;
    public static int[] showwhichitems;
    private void check_haveitems(){
        for(int i = 0;i<invensize;i++) showwhichitems[i] = -1;
        for(int i = 0, j = 0; i <Player_Character.numofitems;i++){
            if(Player_Character.haveitems[i] == true){
                showwhichitems[j++] = i;
            }
        }
    }

    public GameObject inven_pnl;
    public void OnPointerClick(PointerEventData eventData)
    {  
        check_haveitems();

       inven_pnl.SetActive(true);
    }
    void Awake() {
        showwhichitems = new int[invensize];
        for(int i = 0;i<invensize;i++) showwhichitems[i] = -1;   
    }
    // Start is called before the first frame update
    private void Start()
    {   
      
    }

    // Update is called once per frame
    void Update()
    {
      
    }
}
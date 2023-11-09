using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
public class event_configbtn : MonoBehaviour,IPointerClickHandler
{   
    public GameObject pnl;
    public void OnPointerClick(PointerEventData eventData)
    {
       pnl.SetActive(true);
    }

    // Start is called before the first frame update
    void Start()
    {
    
        }
    

    // Update is called once per frame
    void Update()
    {
      
    }
}

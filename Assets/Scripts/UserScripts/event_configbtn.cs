using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
public class event_configbtn : MonoBehaviour,IPointerClickHandler
{   
    public Canvas canvas;
    public GameObject pnl;
    public GameObject modalBG;
    public void OnPointerClick(PointerEventData eventData)
    {
       canvas.sortingOrder = 1; 
       pnl.SetActive(true);
       modalBG.SetActive(true);
       
    }

    // Start is called before the first frame update
    void Start()
    {
        canvas = GetComponent<Canvas>();
    }   
}

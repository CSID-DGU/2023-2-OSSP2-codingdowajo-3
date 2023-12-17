using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowShopPoint : MonoBehaviour
{
    public Text ShopPoint;

    // Start is called before the first frame update
    void Start()
    {
        
       ShopPoint.text = Player_Character.point.ToString();
       //Debug.Log(Player_Character.point);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class playerchar_withitem : MonoBehaviour
{   
     public static Image resultImage;
    // Start is called before the first frame update
    void Start()
    {
        resultImage = GetComponent<Image>();
    }

    // Update is called once per frame
    void Update()
    {
        resultImage.sprite = Player_Item_Equipped.char_item.sprite;
    }
}

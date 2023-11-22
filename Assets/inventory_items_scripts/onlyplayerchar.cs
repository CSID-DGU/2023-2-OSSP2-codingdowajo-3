using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class onlyplayerchar : MonoBehaviour
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
        resultImage.sprite = Player_Character.char_img.sprite;
    }
}

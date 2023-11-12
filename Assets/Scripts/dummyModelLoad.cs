using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HuggingFace.API;

public class dummyModelLoad : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        string userInput = "I love you";
        HuggingFaceAPI.TextClassification(userInput, result => {
            //do something with the result
            Debug.Log(result.ToString());
        }, error => {
            Debug.LogError(error);
        });
    }
}

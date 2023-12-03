using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PannelOff : MonoBehaviour
{
    public GameObject alreadyPannel;
    // Start is called before the first frame update
    public void offPanel()
    {
        alreadyPannel.SetActive(false);
    }
}

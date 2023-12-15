using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class checkFirstRun_mainscene : MonoBehaviour
{
    public GameObject tutorial_mainscene;

    // Start is called before the first frame update
    void Start()
    {
        if (PlayerPrefs.GetInt("FirstRun") == 1)
        {
            Debug.Log("first run; main scene");
            tutorial_mainscene.SetActive(true);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

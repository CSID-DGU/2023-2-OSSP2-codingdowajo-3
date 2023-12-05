using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetStartStory : MonoBehaviour
{
    public Dialogue_1 info_1;
    public Dialogue_2 info_2;
    public Dialogue_3 info_3;
    public Dialogue_4 info_4;
    public Dialogue_5 info_5;

    public GameObject[] objectArray = new GameObject[5];
    // Start is called before the first frame update
    void Start()
    {
        objectArray[SetStory.Variables.storynum - 1].SetActive(true);
        Debug.Log(SetStory.Variables.storynum);
        if (SetStory.Variables.storynum == 1)
        {
            var system = FindObjectOfType<DialogueSystem_1>();
            system.Begin(info_1);
        }
        else if (SetStory.Variables.storynum == 2)
        {
            var system = FindObjectOfType<DialogueSystem_2>();
            system.Begin(info_2);
        }
        else if (SetStory.Variables.storynum == 3)
        {
            var system = FindObjectOfType<DialogueSystem_3>();
            system.Begin(info_3);
        }
        else if (SetStory.Variables.storynum == 4)
        {
            var system = FindObjectOfType<DialogueSystem_4>();
            system.Begin(info_4);
        }
        else if (SetStory.Variables.storynum == 5)
        {
            var system = FindObjectOfType<DialogueSystem_5>();
            system.Begin(info_5);
        }

    }
}

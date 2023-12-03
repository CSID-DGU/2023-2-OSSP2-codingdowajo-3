using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogueTrigger_2 : MonoBehaviour
{
    public Dialogue_2 info;

    public void Trigger() {
        var system = FindObjectOfType<DialogueSystem_2>();
        system.Begin(info);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogueTrigger_3 : MonoBehaviour
{
    public Dialogue_3 info;

    public void Trigger() {
        var system = FindObjectOfType<DialogueSystem_3>();
        system.Begin(info);
    }
}

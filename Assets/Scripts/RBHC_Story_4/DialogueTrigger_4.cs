using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogueTrigger_4 : MonoBehaviour
{
    public Dialogue_4 info;

    public void Trigger() {
        var system = FindObjectOfType<DialogueSystem_4>();
        system.Begin(info);
    }
}

using System.Collections;
using System.Collections.Generic;
using OpenQA.Selenium.DevTools.V107.Network;
using UnityEngine;
using UnityEngine.UI;

public class DialogueSystem : MonoBehaviour
{
    private int[] speaker = 
    /* 0: nar, 1: moolgae, 2: starfish */
    {0, 0, 0, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0};
    private int speak_index = 0; 

    public Image moolgae, starfish;
    public Text txtName;
    public Text txtSentence;

    Queue<string> sentences = new Queue<string> ();

    public Animator anim;
    public void Begin(Dialogue info){

        anim.SetBool("isOpen", true);
        sentences.Clear();

        //txtName.text = info.name;
        speak_index = 0;

        foreach(var sentence in info.sentences){
            sentences.Enqueue(sentence);
        }

        Next();

    }

    public void Next() {
        if(sentences.Count == 0){
            End();
            return;
        }

        change_speaker(speak_index++);

        //txtSentence.text = sentences.Dequeue();
        txtSentence.text = string.Empty;
        StopAllCoroutines();
        StartCoroutine(TypeSentence(sentences.Dequeue()));
    }

    IEnumerator TypeSentence(string sentence){
        foreach(var letter in sentence){
            txtSentence.text += letter;
            yield return new WaitForSeconds(0.05f);
        }
    }
    private void End(){ 
        anim.SetBool("isOpen", false);
        txtSentence.text = string.Empty;
        moolgae.enabled = false;
        starfish.enabled = false;
        }

    private void change_speaker(int spk_idx) {
            switch(speaker[spk_idx]){
                case 0: txtName.text = string.Empty;
                moolgae.enabled = true;
                starfish.enabled = true;
                break;
                case 1: txtName.text = "π÷";
                moolgae.enabled = false;
                starfish.enabled = true;
                break;
                case 2: txtName.text = "∫∞¿Ã";
                moolgae.enabled = true;
                starfish.enabled = false;
                break;
            }

    }
}


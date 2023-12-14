using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class DialogueSystem_3 : MonoBehaviour
{
    private int[] speaker = 
    /* 0: nar, 1: moolgae, 2: octopus, 3: whale */
    {0, 0, 0, 0, 2, 0, 0, 0, 3, 3, 1, 0, 2, 0, 0, 0};
    private int speak_index = 0; 

    public Image moolgae, octopus, whale;
    public Text txtName;
    public Text txtSentence;

    Queue<string> sentences = new Queue<string> ();

    public Animator anim;
    public void Begin(Dialogue_3 info){

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
        octopus.enabled = false;
        whale.enabled = false;
        SceneManager.LoadScene("MainScene");
    }

    private void change_speaker(int spk_idx) {
            switch(speaker[spk_idx]){
                case 0: txtName.text = string.Empty;
                moolgae.enabled = true;
                octopus.enabled = true;
                whale.enabled = true;
                break;
                case 1: txtName.text = "물개";
                moolgae.enabled = false;
                octopus.enabled = true;
                whale.enabled = true;
                break;
                case 2: txtName.text = "문어";
                moolgae.enabled = true;
                octopus.enabled = false;
                whale.enabled = true;
                break;
                case 3: txtName.text = "고래";
                moolgae.enabled = true;
                octopus.enabled = true;
                whale.enabled = false;
                break;
            }

    }
}


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class DialogueSystem_5 : MonoBehaviour
{
    private int[] speaker = 
    /* 0: nar(npc), 1: whale, 2: jellyfish, 3: shark*/
    {0,0,2,1,0,3,0,1,1,2,0,0,0,2,0,0,0,1,0,1,1,2,1,2,0};
    private int speak_index = 0;

    public Image whale, jellyfish, shark;
    public Text txtName;
    public Text txtSentence;

    Queue<string> sentences = new Queue<string>();

    public Animator anim;
    public void Begin(Dialogue_5 info)
    {

        anim.SetBool("isOpen", true);
        sentences.Clear();

        //txtName.text = info.name;
        speak_index = 0;

        foreach (var sentence in info.sentences)
        {
            sentences.Enqueue(sentence);
        }

        Next();

    }

    public void Next()
    {
        if (sentences.Count == 0)
        {
            End();
            return;
        }

        change_speaker(speak_index++);

        //txtSentence.text = sentences.Dequeue();
        txtSentence.text = string.Empty;
        StopAllCoroutines();
        StartCoroutine(TypeSentence(sentences.Dequeue()));
    }

    IEnumerator TypeSentence(string sentence)
    {
        foreach (var letter in sentence)
        {
            txtSentence.text += letter;
            yield return new WaitForSeconds(0.05f);
        }
    }
    private void End()
    {
        anim.SetBool("isOpen", false);
        txtSentence.text = string.Empty;
        whale.enabled = false;
        jellyfish.enabled = false;
        shark.enabled = false;
        SceneManager.LoadScene("MainScene");
    }

    private void change_speaker(int spk_idx)
    {
        switch (speaker[spk_idx])
        {
            case 0:
                txtName.text = string.Empty;
                whale.enabled = true;
                jellyfish.enabled = true;
                shark.enabled = true;
                break;
            case 1:
                txtName.text = "리버";
                whale.enabled = false;
                jellyfish.enabled = true;
                shark.enabled = true;
                break;
            case 2:
                txtName.text = "헤일로";
                whale.enabled = true;
                jellyfish.enabled = false;
                shark.enabled = true;
                break;
            case 3:
                txtName.text = "상어";
                whale.enabled = true;
                jellyfish.enabled = true;
                shark.enabled = false;
                break;
        }

    }
}

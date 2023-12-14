using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class DialogueSystem_1 : MonoBehaviour
{
    private int[] speaker =
     /* 0: nar, 1: wolf, 2: bear, 3: tiger */
     {0, 0, 1, 0, 0, 3, 0, 0, 2, 1, 0, 0, 1, 0, 0};
    private int speak_index = 0;

    public Image wolf, bear, tiger;
    public Text txtName;
    public Text txtSentence;

    Queue<string> sentences = new Queue<string>();

    public Animator anim;
    public void Begin(Dialogue_1 info)
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
        wolf.enabled = false;
        bear.enabled = false;
        tiger.enabled = false;
        SceneManager.LoadScene("MainScene");
    }

    private void change_speaker(int spk_idx)
    {
        switch (speaker[spk_idx])
        {
            case 0:
                txtName.text = string.Empty;
                wolf.enabled = true;
                bear.enabled = true;
                tiger.enabled = true;
                break;
            case 1:
                txtName.text = "리바이";
                wolf.enabled = false;
                bear.enabled = true;
                tiger.enabled = true;
                break;
            case 2:
                txtName.text = "브라운";
                wolf.enabled = true;
                bear.enabled = false;
                tiger.enabled = true;
                break;
            case 3:
                txtName.text = "호랑이";
                wolf.enabled = true;
                bear.enabled = true;
                tiger.enabled = false;
                break;
        }

    }
}

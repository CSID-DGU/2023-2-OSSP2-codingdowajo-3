using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class DialogueSystem_2 : MonoBehaviour
{
    private int[] speaker = 
    /* 화자를 나타내는 배열. 0: nar, 1: moolgae, 2: starfish */
    {0, 0, 0, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0};
    private int speak_index = 0; 

    public Image moolgae, starfish; /* 캐릭터 이미지 */
    public Text txtName;    
    public Text txtSentence;    

    Queue<string> sentences = new Queue<string> (); /* 대사들을 담는 큐 */

    public Animator anim;   /* 애니메이션 */
    public void Begin(Dialogue_2 info){

        anim.SetBool("isOpen", true);
        sentences.Clear();

        //txtName.text = info.name;
        speak_index = 0;

        foreach(var sentence in info.sentences){
            sentences.Enqueue(sentence);
        }

        Next();

    }

    public void Next() {    /* 다음 대사 출력 */
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
        /* 대사 한 글자씩 출력 */
        foreach(var letter in sentence){
            txtSentence.text += letter;
            yield return new WaitForSeconds(0.05f);
        }
    }
    private void End(){ 
        /* 다이얼로그 종료 */
        anim.SetBool("isOpen", false);
        txtSentence.text = string.Empty;
        moolgae.enabled = false;
        starfish.enabled = false;
        SceneManager.LoadScene("MainScene");
    }

    private void change_speaker(int spk_idx) {
            switch(speaker[spk_idx]){
                case 0: txtName.text = string.Empty;
                moolgae.enabled = true;
                starfish.enabled = true;
                break;
                case 1: txtName.text = "밍";
                moolgae.enabled = false;
                starfish.enabled = true;
                break;
                case 2: txtName.text = "별이";
                moolgae.enabled = true;
                starfish.enabled = false;
                break;
            }

    }
}


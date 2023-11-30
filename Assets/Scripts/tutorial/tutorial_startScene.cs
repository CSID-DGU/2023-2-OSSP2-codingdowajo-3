using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class tutorial_startScene : MonoBehaviour
{
    public Text dialogueText;  // ��ȭ �ؽ�Ʈ UI
    public Image fadePanel;  // ȭ���� ��Ӱ� �� �г�
    private int currentIndex = 0;  // ���� ��� ���� ������ �ε���

    List<string> sentences = new List<string>() // ����� ����
    {
        "first sentence \n qwredsfsfas",
        "2 sentence \n fsfsfsafsa \n fdsfsfsafs"
    };

    private void Start()
    {
        begin_tutorial();//�ó�ý� ����
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))//��ġ�ϸ� ���� ���� ���´�
        {
            DisplayNextSentence();
        }
    }

    public void begin_tutorial()//�ó�ý� ����
    {
        StartCoroutine(FadeInPanel());
    }

    IEnumerator TypeSentence(string sentence)//������ �ѱ��ھ� ������ �Ѵ�
    {
        dialogueText.text = "";
        foreach (char letter in sentence.ToCharArray())
        {
            dialogueText.text += letter;
            yield return new WaitForSeconds(0.08f);
        }
    }

    public void DisplayNextSentence()//��ġ�ϸ� ���� ����
    {
        currentIndex++;
        if (currentIndex >= sentences.Count)
        {
            EndDialogue();
            return;
        }
        StartCoroutine(TypeSentence(sentences[currentIndex]));
    }

    void EndDialogue() 
    {
        SceneManager.LoadScene("MainScene");
    }

    IEnumerator FadeInPanel()//��ο����ٰ� ������� �����ش�
    {
        float duration = 1.0f;  // ��ο����� �� �ɸ��� �ð�
        float targetAlpha = 0.5f;  // ���� ���İ�
        float elapsed = 0f;
        Color color = fadePanel.color;

        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            color.a = Mathf.Lerp(0f, targetAlpha, elapsed / duration);
            fadePanel.color = color;
            yield return null;
        }

        StartCoroutine(TypeSentence(sentences[currentIndex]));
    }
}

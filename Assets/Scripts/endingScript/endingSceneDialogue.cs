using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class endingSceneDialogue : MonoBehaviour
{
    public Text dialogueText;  // ��ȭ �ؽ�Ʈ UI
    public SpriteRenderer fadePanel;  // ȭ���� ��Ӱ� �� �г�
    private int currentIndex = 0;  // ���� ��� ���� ������ �ε���
    private bool isTyping = false; // �ؽ�Ʈ ��� ������ Ȯ���ϴ� ����

    List<string> sentences = new List<string>() // ����� ����
    {
        "�÷��̾�� ���п� ���� �ٴٰ� ������ ��ȭ�Ǿ����ϴ�!",
        "�濪�� ĳ���� ģ������ �÷��̾�� ���п� ������ �ٴٿ��� �� �� �ְ� �Ǿ����!",
        "�÷��̾���� ��ſ� �����̼̳���?",
        "������ ������ �÷��̾���� �濪�� �غ��� ������ �Ǿ��ٸ� ���ڽ��ϴ�",
        "�÷��̾���� �ճ��� �����ϰڽ��ϴ�",
        "���ݱ��� ���� ������ �÷������ּż� �����մϴ�!\n-����SW������Ʈ 3�� �ڵ�������-"
    };

    private void Start()
    {
        begin_tutorial();//�ó�ý� ����
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))//��ġ�ϸ� ���� ���� ���´�
        {
            if (isTyping) // �ؽ�Ʈ ��� ���� ���
            {
                StopAllCoroutines(); // ���� ���� ���� ��� �ڷ�ƾ ����
                dialogueText.text = sentences[currentIndex]; // ���� ���� �ٷ� �ϼ�
                isTyping = false; // �ؽ�Ʈ ��� ���� ����
            }
            else // �ؽ�Ʈ ��� ���� �ƴ� ���
            {
                DisplayNextSentence();
            }
        }

    }

    public void begin_tutorial()//�ó�ý� ����
    {
        StartCoroutine(FadeOut());
    }

    IEnumerator TypeSentence(string sentence)//������ �ѱ��ھ� ������ �Ѵ�
    {
        isTyping = true; // �ؽ�Ʈ ��� ����
        dialogueText.text = "";
        foreach (char letter in sentence.ToCharArray())
        {
            dialogueText.text += letter;
            yield return new WaitForSeconds(0.08f);
        }
        isTyping = false; // �ؽ�Ʈ ��� �Ϸ�
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
        PlayerPrefs.SetInt("FirstEnding", 1);
        SceneManager.LoadScene("MainScene");
    }

    
    IEnumerator FadeOut()
    {
        Color fromColor = fadePanel.color; //���� ���
        Color toColor =  new Color(fadePanel.color.r, fadePanel.color.g, fadePanel.color.b, 0.8f); // ���� ���
        float elapsedTime = 0f;
        float fadeDuration = 6.0f; // Fade ȿ���� �ɸ��� �ð� (��)

        while (elapsedTime < fadeDuration)
        {
            elapsedTime += Time.deltaTime;
            float t = elapsedTime / fadeDuration; // ���൵ (0 ~ 1)
            fadePanel.color = Color.Lerp(fromColor, toColor, t); // ���� ������ ���
            yield return null;
        }

        fadePanel.color = toColor; // ���� ������ Ȯ���� ����
    }
}
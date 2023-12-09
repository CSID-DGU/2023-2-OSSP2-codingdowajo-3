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
    private bool isTyping = false; // �ؽ�Ʈ ��� ������ Ȯ���ϴ� ����

    List<string> sentences = new List<string>() // ����� ����
    {
        "�츮�� ���� �ִ� �̰��� '����� �ٴ�'��� �Ҹ��� ���Դϴ�.\n���� �ð� ����, �� �ٴٴ� ������� �ڽ��� ����� ���������� �� ������κ��� �ع�Ǵ� ���̾����ϴ�.",
        "����� �ٴٿ� ��������� ������, �ٴٴ� �� ����� ����� ���°踦 �����ϰ� �Ǿ���.\n�׷��� ������� ���Ŀ� �� ����� �ٽ� ���ø��⸦ ������ �ʾҽ��ϴ�.\n�׷��� �׵��� ����� �ٴٿ� ��������� ���� ���߾���, �ٴٴ� ���� Ȳ�������� �����߽��ϴ�.",
        "�������� ������ �ٷ� �� Ȳ������ �ٴٸ� ��ȭ�ϴ� ���Դϴ�.\n �������� �濪��, �׸��� �� ����� �ٴٷ� ��������ּ���.\n ����� �귯��������, �ٴٴ� �ٽ� �ѹ� �������� ã�� �� ���Դϴ�.\n ����, �ڽ��� �ذ���� ����� ���ֺ��°����μ� ������ ġ���� �� �������Դϴ�.",
        "�÷��̾� ������, �ٴٸ� ��ȭ�ϰ�, �ٽ� �ѹ� �ٴ��� ������� ȸ����Ű�� �� ������ �ּ���.\n �������� �ڽ��� �濪��κ��� �ع�ǰ�, �ٴٴ� �ٽ� �ѹ� ������� ã�� ���Դϴ�.\n �׷� �����е�, �����θ� ���ƺ��� ���� �����Դϴ�!"
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
        StartCoroutine(FadeInPanel());
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
        PlayerPrefs.SetInt("FirstRun", 1);
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

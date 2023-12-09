using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Threading;

public class tutorial_mainScene : MonoBehaviour
{
    int numberOfElements = 11;
    public GameObject[] highlightCircle; // ���׶�� �̹���
    public Text descriptionText; // ���� �ؽ�Ʈ â
    public GameObject[] discriptionBox; // ���� �ڽ�
    string[] descriptions =  // �� ���� ��ҿ� ���� �����
    {
        "������ ����ġ�Դϴ�.\n������ ������ �÷��̾� ĳ���Ͱ� ��ȭ�ؿ�!",
        "�������� �������� ������ �� �ִ� ����Ʈ�Դϴ�.",
        "ȸ�� ������ �� �ִ� ������� �濪�� �����Դϴ�.",
        "����Ʈ�� �������� ������ �� �ִ� �����Դϴ�.",
        "������ �����۵��� �κ��丮â �ȿ� ���ֽ��ϴ�.",
        "ȸ��� ���� �濪�� ĳ���͸� �������� Ȯ���ϼ���.\nƯ���� ĳ���͸� ������ ������ ���丮�� �� �� �־��!",
        "���ݱ����� ȸ�� ����� �� �� �־��.",
        "�Ϸ翡 �ѹ�, �濪�� ���̸� ��������.",
        "������ �ֿ� �������Դϴ�.\n�̰����� �ڽ��� �濪�縦 �غ��غ�����!",
        "������ ���� ������ �����ϼ���.",
        "�濪�� ���̸� ���� �� �ִ� �̴ϰ����� ��⼼��"
    };
    public GameObject tutorial_main;//���� Ʃ�丮��

    private bool isTyping = false; // �ؽ�Ʈ ��� ������ Ȯ���ϴ� ����

    private int currentElementIndex = 0; // ���� ���� ���� ���� ����� �ε���

    private void Start()
    {
        Thread.Sleep(50);
        ShowNext();
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))//��ġ�ϸ� ���� ���� ���´�
        {
            if (isTyping) // �ؽ�Ʈ ��� ���� ���
            {
                StopAllCoroutines(); // ���� ���� ���� ��� �ڷ�ƾ ����
                descriptionText.text = descriptions[currentElementIndex]; // ���� ���� �ٷ� �ϼ�
                isTyping = false; // �ؽ�Ʈ ��� ���� ����
            }
            else // �ؽ�Ʈ ��� ���� �ƴ� ���
            {
                touchScreen();
            }
        }
    }

    IEnumerator TypeSentence(string sentence)//������ �ѱ��ھ� ������ �Ѵ�
    {
        isTyping = true; // �ؽ�Ʈ ��� ����
        descriptionText.text = "";
        foreach (char letter in sentence.ToCharArray())
        {
            descriptionText.text += letter;
            yield return new WaitForSeconds(0.08f);
        }
        isTyping = false; // �ؽ�Ʈ ��� �Ϸ�
    }

    private void ShowNext()
    {
        if (currentElementIndex < numberOfElements)
        {
            // ���� ���� ��Ҹ� ���׶�� �̹����� ���̶���Ʈ
            highlightCircle[currentElementIndex].SetActive(true);

            // �ش� ���� ��ҿ� ���� ������ �ؽ�Ʈ â�� ���
            StartCoroutine(TypeSentence(descriptions[currentElementIndex]));
        }
        else
        {
            tutorial_main.SetActive(false);
            PlayerPrefs.SetInt("FirstRun", 0);
        }
    }

    // ����ڰ� Ʃ�丮���� ���� �κ����� �Ѿ�� ���� ȭ���� ��ġ�ϰų� ��ư�� Ŭ���ϸ� ȣ��
    public void touchScreen()
    {
        // ���� ���׶�� ��� ��Ȱ��ȭ
        highlightCircle[currentElementIndex].SetActive(false);
        currentElementIndex++;
        ShowNext();
    }
}

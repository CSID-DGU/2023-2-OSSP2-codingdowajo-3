using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DialogSystem : MonoBehaviour
{
    [SerializeField]
    private Speaker[] speakers;             // ��ȭ�� �����ϴ� ĳ���͵��� UI �迭
    [SerializeField]
    private DialogData[] dialogs;           // ���� �б��� ��� ��� �迭
    [SerializeField]
    private bool isAutoStart = true;        // �ڵ� ���� ����
    private bool isFirst = true;            // ���� 1ȸ�� ȣ��
    private int currentDialogIndex = -1;    // ���� ��� ����
    private int currentSpeakerIndex = 0;    //  ���� ���� �ϴ� ȭ���� speakers �迭 ����

    private void Awake()
    {
        Setup();
    }

    private void Setup()
    {
        // ��� ��ȭ ���� ���� ������Ʈ ��Ȱ��ȭ
        for (int i = 0; i < speakers.Length; ++i)
        {
            SetActiveObjects(speakers[i], false);
            // ĳ���� �̹����� ���̵��� ����
            speakers[i].spriteRenderer.gameObject.SetActive(true);
        }
    }

    public bool UpdateDialog()
    {
        // ��� �бⰡ ���۵� �� 1ȸ�� ȣ��
        if (isFirst == true)
        {
            // �ʱ�ȭ, ĳ���� �̹����� Ȱ��ȭ, ��� ���� UI�� ��� ��Ȱ��ȭ
            Setup();

            // �ڵ� ���(isAutoStart=true)���� �����Ǿ� ������ ù ��° ��� ���
            if (isAutoStart) SetNextDialog();

            isFirst = false;
        }

        if (Input.GetMouseButtonDown(0))
        {
            // ��簡 �������� ��� ���� ��� ����
            if (dialogs.Length > currentDialogIndex +1)
            {
                SetNextDialog();
            }
            // ��簡 �� �̻� ���� ��� ��� ������Ʈ�� ��Ȱ��ȭ�ϰ� true ��ȯ
            else
            {
                // ���� ��ȭ�� �����ߴ� ��� ĳ����, ��ȭ ���� UI�� ������ �ʰ� ��Ȱ��ȭ
                for (int i = 0; i <speakers.Length; ++i)
                {
                    SetActiveObjects(speakers[i], false);
                    // ĳ���� �̹����� �ٽ� �����صα�
                    speakers[i].spriteRenderer.gameObject.SetActive(true);
                }

                return true;
            }
        }
        return false;
    }

    private void SetNextDialog()
    {
        // ���� ȭ���� ��ȭ ���� ������Ʈ Ȱ��ȭ
        SetActiveObjects(speakers[currentSpeakerIndex], true);
        // ���� ȭ�� �̸� �ؽ�Ʈ ����
        speakers[currentSpeakerIndex].textName.text = dialogs[currentDialogIndex].name;
        // ���� ȭ���� ��� �ؽ�Ʈ ����
        speakers[currentSpeakerIndex].textDialogue.text = dialogs[currentDialogIndex].dialogue;
    }

    private void SetActiveObjects(Speaker speaker, bool visible)
    {
        speaker.imageDialog.gameObject.SetActive(visible);
        speaker.textName.gameObject.SetActive(visible);
        speaker.textDialogue.gameObject.SetActive(visible);

        // ȭ��ǥ�� ��簡 ����Ǿ��� ���� Ȱ��ȭ�ϱ� ������ �׻� false
        speaker.objectArrow.SetActive(false);

        // ĳ���� ���� �� ����
        Color color = speaker.spriteRenderer.color;
        color.a = visible == true ? 1 : 0.2f;
        speaker.spriteRenderer.color = color;
    }
}

[System.Serializable]
public struct Speaker
{
    public SpriteRenderer spriteRenderer;   // ĳ���� �̹���
    public Image imageDialog;               // ��ȭâ Image UI
    public TextMeshProUGUI textName;        // ���� ������� ĳ���� �̸� ��� Text UI
    public TextMeshProUGUI textDialogue;    // ���� ��� ��� Text UI
    public GameObject objectArrow;          // ��簡 �Ϸ�Ǿ��� �� ��µǴ� Ŀ�� ������Ʈ
}

[System.Serializable]
public struct DialogData
{
    public int speakerIndex;    // �̸��� ��縦 ����� ���� DialogSystem�� speakers �迭 ���� 
    public string name;         // ĳ���� �̸�

    [TextArea(3, 5)]
    public string dialogue;     // ���
}
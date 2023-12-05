using UnityEngine;
using UnityEngine.SceneManagement;

public class SetStoryNum : MonoBehaviour
{
    public int setNum;
    public void settingScene(int num)
    {
        SetStory.Variables.storynum = setNum;
        SceneManager.LoadScene("StoryScene");
    }
}

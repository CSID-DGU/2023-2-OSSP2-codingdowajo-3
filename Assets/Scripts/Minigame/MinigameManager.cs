using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MinigameManager : MonoBehaviour
{
    public GameObject square;
    public GameObject endPanel;
    public Text timeTxt;
    public Text thisScoreTxt;
    public Text bestScoreTxt;
    public Text endTxt;
    public Animator anim;

    float alive = 0f;
    bool isRunning = true;

    public static MinigameManager I;

    void Awake()
    {
        I = this;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        Screen.SetResolution(720, 1280, true);
    }

    // Start is called before the first frame update
    void Start()
    {
        Time.timeScale = 1.0f;
        InvokeRepeating("makeSquare", 0.0f, 0.5f);

    }

    // Update is called once per frame
    void Update()
    {
        if (isRunning)
        {
            alive += Time.deltaTime;
            timeTxt.text = alive.ToString("N2");
        }

    }

    void makeSquare()
    {
        Instantiate(square);
    }

    public void gameOver()
    {
        isRunning = false;
        anim.SetBool("isDie", true);

        Invoke("timeStop", 0.5f);
        thisScoreTxt.text = alive.ToString("N2");
        endPanel.SetActive(true);

        if (alive > 5.0)
        {
            string endMessage = "Èæ¿ª»ç Á¾ÀÌ È¹µæ!";
            endTxt.text = endMessage;
            Player_Character.get_paper(1);
        }
        else
        {
            string endMessage = "Game Over!";
            endTxt.text = endMessage;
        }

        if (PlayerPrefs.HasKey("bestScore") == false)
        {
            PlayerPrefs.SetFloat("bestScore", alive);
        }
        else
        {
            if (PlayerPrefs.GetFloat("bestScore") < alive)
            {
                PlayerPrefs.SetFloat("bestScore", alive);
            }
        }

        bestScoreTxt.text = PlayerPrefs.GetFloat("bestScore").ToString("N2");
    }

    public void retry()
    {
        SceneManager.LoadScene("MinigameScene");
    }
    public void mainbtn()
    {
        SceneManager.LoadScene("MainScene");
    }
    void timeStop()
    {
        Time.timeScale = 0.0f;
    }
}

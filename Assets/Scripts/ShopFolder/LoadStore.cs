using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadStore : MonoBehaviour
{
    public void settingStore()
    {
        SceneManager.LoadScene("ItemshopScene");
    }
}

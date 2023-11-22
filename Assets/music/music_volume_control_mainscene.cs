using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class music_volume_control_mainscene : MonoBehaviour
{
    public Slider volumeSlider;
    public AudioSource audioSource;
    // Start is called before the first frame update
    void Start()
    {
         if (audioSource != null && volumeSlider != null)
        {
            audioSource.volume = volumeSlider.value;
        }
    }
    public void OnVolumeChanged()
    {
        if (audioSource != null && volumeSlider != null)
        {
            audioSource.volume = volumeSlider.value;
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}

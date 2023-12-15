using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class music_volume_control_mainscene : MonoBehaviour
{
    public Slider volumeSlider;
    public AudioSource audioSource;
    public static float volume_sharing; //´Ù¸¥ ¾À¿¡¼­µµ ÀÌ º¼·ý´ë·Î À½¾Ç Ãâ·Â

    // Start is called before the first frame update
    void Start()
    {
         if (audioSource != null && volumeSlider != null)
        {
            audioSource.volume = volumeSlider.value;
            volume_sharing = audioSource.volume;
        }
    }
    public void OnVolumeChanged()
    {
        if (audioSource != null && volumeSlider != null)
        {
            audioSource.volume = volumeSlider.value;
            volume_sharing = audioSource.volume;
        }
    }
}

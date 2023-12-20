using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class music_volume_control_mainscene : MonoBehaviour
{
    public Slider volumeSlider;
    public AudioSource audioSource;
    public static float volume_sharing = -1; //´Ù¸¥ ¾À¿¡¼­µµ ÀÌ º¼·ý´ë·Î À½¾Ç Ãâ·Â

    // Start is called before the first frame update
    void Start()
    {
         if (audioSource != null && volumeSlider != null) {
            
            if(volume_sharing != -1) {
                /* When the volume is not set to its initial value. which means MODIFIED */
                audioSource.volume = volume_sharing;
                volumeSlider.value = audioSource.volume;
            }
            else {
                /* Initial Case, set volume to the initial value of the slider */
                audioSource.volume = volumeSlider.value;
                volume_sharing = audioSource.volume;
            }
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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryScene_music : MonoBehaviour
{
    public AudioSource audioSource;

    // Start is called before the first frame update
    void Start()
    {
         if (audioSource != null)
        {
            audioSource.volume = music_volume_control_mainscene.volume_sharing;
        }
    }
    public void OnVolumeChanged()
    {
        if (audioSource != null)
        {
            audioSource.volume = music_volume_control_mainscene.volume_sharing;
        }
    }
}

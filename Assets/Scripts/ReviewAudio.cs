using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReviewAudio : MonoBehaviour
{
    public AudioClip bgmClip; // Inspector 창에서 할당할 AudioClip

    private AudioSource bgmAudioSource;

    void Start()
    {
        // AudioSource 컴포넌트 가져오기
        bgmAudioSource = GetComponent<AudioSource>();

        // AudioClip 할당
        bgmAudioSource.clip = bgmClip;

        // BGM 재생
        ReviewPlayBGM();
    }

    void Update()
    {
      
    }

    void ReviewPlayBGM()
    {
        if (bgmAudioSource != null && bgmAudioSource.clip != null)
        {
            // BGM 재생
            bgmAudioSource.Play();
        }
    }

}

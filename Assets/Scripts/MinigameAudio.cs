using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MinigameAudio : MonoBehaviour
{
    public AudioClip bgmClip; // Inspector â���� �Ҵ��� AudioClip

    private AudioSource bgmAudioSource;

    void Start()
    {
        // AudioSource ������Ʈ ��������
        bgmAudioSource = GetComponent<AudioSource>();

        // AudioClip �Ҵ�
        bgmAudioSource.clip = bgmClip;

        // BGM ���
        MinigamePlayBGM();
    }

    void Update()
    {
      
    }

    void MinigamePlayBGM()
    {
        if (bgmAudioSource != null && bgmAudioSource.clip != null)
        {
            // BGM ���
            bgmAudioSource.Play();
        }
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Salah : MonoBehaviour
{
    public GameObject salaah;
    public Animator salah;
    private AudioSource _audioSource;

    private void Start()
    {
        salaah.SetActive(false);
    }
    
    private void Awake()
    {
        _audioSource = GetComponent<AudioSource>();
    }

    public void PlayMusic()
    {
        salaah.SetActive(true);
        if (_audioSource.isPlaying) return;
        _audioSource.Play();
        salah.SetTrigger("salah");
    }
}

using System.Collections;
using UnityEngine;

public class MenuAwal : MonoBehaviour
{
    private GameObject menu;
    public SpriteRenderer menuu;
    public bool bolehHilang;
    private AudioSource _audioSource;
    private void Awake()
    {
        menu = GameObject.Find("menu");
        DontDestroyOnLoad(menu);
        _audioSource = GetComponent<AudioSource>();
    }

    public void PlayMusic()
    {
        if (_audioSource.isPlaying) return;
        _audioSource.Play();
    }

    public void StopMusic()
    {
        _audioSource.Stop();
    }

    public void Start()
    {
        menuu = menu.GetComponent<SpriteRenderer>();
        bolehHilang = false;
        GameObject.FindGameObjectWithTag("menu").GetComponent<MenuAwal>().PlayMusic();
    }
    public void Update()
    {
        if (bolehHilang)
        {
            StartCoroutine("FadeOut");
            bolehHilang = false;
        }
    }

    public IEnumerator FadeOut()
    {
        for (float f = 1f; f >= -0.1f; f -= 0.1f)
        {
            Color c = menuu.material.color;
            c.a = f;
            menuu.material.color = c;
            yield return new WaitForSeconds(0.1f);
        }
    }
    /*
    private AudioSource audi;
    void Start()
    {
        audi = GetComponent<AudioSource>();
        audi.Play();        
    }*/
}

using UnityEngine;
using System.Collections;
using TMPro;
using System.Collections.Generic;

public class Jalan : MonoBehaviour
{

    //public Transform[] waypoints;
    public List<GameObject> titik = new List<GameObject>();


    [SerializeField]
    private float moveSpeed = 1f;

    [HideInInspector]
    public int titikIndex = 0;
    public int selisih_update;
    public AudioClip hore;
    public bool bolehJalan = false, bolehPlay = false, lagiSoal = true;
    public static float time_fixed;
    public TMP_Text menangText;
    public GameObject boxMenang, skor, restart, close, kartu, help, waktu, up;
    private AudioSource bar;
    private void Start()
    {        
        //GetComponent<AudioSource>().Play();        
        //up = GameObject.Find("storedata");
        skor.SetActive(true);
        restart.SetActive(false);
        close.SetActive(false);
        boxMenang.SetActive(false);
        transform.position = titik[titikIndex].transform.position;    
    }
    private void Update()
    {
        enabled = true;
        selisih_update = 24 - titikIndex;
        if (bolehJalan)
        {
            Gerak();
        }
        if (titikIndex > 24)
        {
            Jalan.time_fixed = Kontrol.time;
            bolehPlay = true;
            GetComponent<AudioSource>().Pause();
            GetComponent<AudioSource>().clip = hore;
            if (bolehPlay)
            { 
                StartCoroutine("Nyalakan");
                bolehPlay = false;
            }
            Soal.skor = Soal.skor + (Kontrol.lemparDadu-selisih_update);
            menangText.text = "Selamat " + Mulai.username + "! Anda Menang dengan Skor " + Soal.skor.ToString() + " dan waktu selama " + time_fixed.ToString() + " detik. Klik 'Dapatkan' untuk Mengambil Hadiah Kartu!";
            waktu.SetActive(false);
            help.SetActive(false);
            kartu.SetActive(true);
            boxMenang.SetActive(true);
            skor.SetActive(false);
            restart.SetActive(true);
            close.SetActive(true);
            Kontrol.gameOver = true;      
            Kontrol.dadu.GetComponent<Renderer>().enabled = false;
            enabled = false;
        }
    }

    IEnumerator Nyalakan()
    {
        GetComponent<AudioSource>().Play();
        yield return new WaitForSeconds(hore.length);
        GetComponent<AudioSource>().Stop();
    }

    private void Gerak()
    {
        //selisih = 24 - Kontrol.lemparDadu;
        if (titikIndex <= titik.Count - 1)
        {
            transform.position = Vector2.MoveTowards(transform.position,
            titik[titikIndex].transform.position,
            moveSpeed * Time.deltaTime);

            if (transform.position == titik[titikIndex].transform.position)
            {
                titikIndex += 1;
            }
        }
        
        // if (selisih_update - Kontrol.lemparDadu < 0)
        // {
        //     transform.position = Vector2.MoveTowards(transform.position,
        //     titik[24-selisih_update].transform.position,
        //     moveSpeed * Time.deltaTime);
        //     if (transform.position == titik[24 - selisih_update].transform.position)
        //     {
        //         titikIndex -= 1;
        //     }
        // }
    }
}
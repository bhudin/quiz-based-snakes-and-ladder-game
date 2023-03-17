using UnityEngine.UI;
using TMPro;
using UnityEngine;
using System.Collections.Generic;

public class Soal : MonoBehaviour
{
    private string[] kunciSoal;
    public static GameObject jawaban;
    public static int skor, batas1, batas2, batas3, batas4, batas5, countMunculSoal, countBenar;
    public GameObject soalBox, balloon, salah;
    public GameObject posisiA, posisiB, posisiC, posisiD, pccA, pccB, pccC, pccD;
    public Animator animator, balon;
    public TMP_Text soalText, aText, bText, cText, dText;
    public Text scoreText;
    private float x1Pos = -2.0f, x2Pos = 2.0f, y1Pos = -0.6f, y2Pos = -2.6f;
    private float x1tPos = -190.0f, x2tPos = 170.0f, y1tPos = -67.0f, y2tPos = -215.0f;
    private GameObject pemain;
    private static GameObject dadu;
    private float moveSpeed = 1f;
    private GameObject data;

    delegate void VoidFunction();
    public void RandomPos()
    {
        List<VoidFunction> functionList = new List<VoidFunction>();
        functionList.Add(Function1);
        functionList.Add(Function2);
        functionList.Add(Function3);
        functionList.Add(Function4);
        functionList.Add(Function5);
        int index = UnityEngine.Random.Range(0, functionList.Count);
        functionList[index]();
    }

    void Function1()
    {
        posisiC.transform.localPosition = new Vector3(x1Pos, y1Pos, -0.35f);
        posisiA.transform.localPosition = new Vector3(x2Pos, y1Pos, -0.35f);
        posisiD.transform.localPosition = new Vector3(x1Pos, y2Pos, -0.35f);
        posisiB.transform.localPosition = new Vector3(x2Pos, y2Pos, -0.35f);
        pccC.transform.localPosition = new Vector3(x1tPos, y1tPos, -48.0f);
        pccA.transform.localPosition = new Vector3(x2tPos, y1tPos, -48.0f);
        pccD.transform.localPosition = new Vector3(x1tPos, y2tPos, -48.0f);
        pccB.transform.localPosition = new Vector3(x2tPos, y2tPos, -48.0f);
    }

    void Function2()
    {
        posisiB.transform.localPosition = new Vector3(x1Pos, y1Pos, -0.35f);
        posisiC.transform.localPosition = new Vector3(x2Pos, y1Pos, -0.35f);
        posisiA.transform.localPosition = new Vector3(x1Pos, y2Pos, -0.35f);
        posisiD.transform.localPosition = new Vector3(x2Pos, y2Pos, -0.35f);
        pccB.transform.localPosition = new Vector3(x1tPos, y1tPos, -48.0f);
        pccC.transform.localPosition = new Vector3(x2tPos, y1tPos, -48.0f);
        pccA.transform.localPosition = new Vector3(x1tPos, y2tPos, -48.0f);
        pccD.transform.localPosition = new Vector3(x2tPos, y2tPos, -48.0f);
    }

    void Function3()
    {
        posisiD.transform.localPosition = new Vector3(x1Pos, y1Pos, -0.35f);
        posisiB.transform.localPosition = new Vector3(x2Pos, y1Pos, -0.35f);
        posisiA.transform.localPosition = new Vector3(x1Pos, y2Pos, -0.35f);
        posisiC.transform.localPosition = new Vector3(x2Pos, y2Pos, -0.35f);
        pccD.transform.localPosition = new Vector3(x1tPos, y1tPos, -48.0f);
        pccB.transform.localPosition = new Vector3(x2tPos, y1tPos, -48.0f);
        pccA.transform.localPosition = new Vector3(x1tPos, y2tPos, -48.0f);
        pccC.transform.localPosition = new Vector3(x2tPos, y2tPos, -48.0f);
    }

    void Function4()
    {
        posisiD.transform.localPosition = new Vector3(x1Pos, y1Pos, -0.35f);
        posisiC.transform.localPosition = new Vector3(x2Pos, y1Pos, -0.35f);
        posisiA.transform.localPosition = new Vector3(x1Pos, y2Pos, -0.35f);
        posisiB.transform.localPosition = new Vector3(x2Pos, y2Pos, -0.35f);
        pccD.transform.localPosition = new Vector3(x1tPos, y1tPos, -48.0f);
        pccC.transform.localPosition = new Vector3(x2tPos, y1tPos, -48.0f);
        pccA.transform.localPosition = new Vector3(x1tPos, y2tPos, -48.0f);
        pccB.transform.localPosition = new Vector3(x2tPos, y2tPos, -48.0f);
    }

    void Function5()
    {
        posisiA.transform.localPosition = new Vector3(x1Pos, y1Pos, -0.35f);
        posisiD.transform.localPosition = new Vector3(x2Pos, y1Pos, -0.35f);
        posisiB.transform.localPosition = new Vector3(x1Pos, y2Pos, -0.35f);
        posisiC.transform.localPosition = new Vector3(x2Pos, y2Pos, -0.35f);
        pccA.transform.localPosition = new Vector3(x1tPos, y1tPos, -48.0f);
        pccD.transform.localPosition = new Vector3(x2tPos, y1tPos, -48.0f);
        pccB.transform.localPosition = new Vector3(x1tPos, y2tPos, -48.0f);
        pccC.transform.localPosition = new Vector3(x2tPos, y2tPos, -48.0f);
    }
    
    private void Start()
    {
        List<VoidFunction> functionList = new List<VoidFunction>();
        balloon.SetActive(false);
        skor = 95;
        countMunculSoal = 0;
        countBenar = 0;
        batas1 = 87;
        batas2 = 80;
        batas3 = 76;
        batas4 = 70;
        batas5 = 66;      
        pemain = GameObject.Find("Pemain");
        jawaban = GameObject.Find("GameObject");
        dadu = GameObject.Find("Dadu");
        data = GameObject.Find("Kontrol");
        data.GetComponent<LoadCSV>().LoadItemData();
        kunciSoal = new string[data.GetComponent<LoadCSV>().itemDatabase.Count];
        for (var i = 0; i < data.GetComponent<LoadCSV>().itemDatabase.Count; i++)
        {
            string kunci = data.GetComponent<LoadCSV>().itemDatabase[i].kunci;
            kunciSoal[i] = kunci;            
        }
    }

    private void Update()
    {
        scoreText.text = "Skor = " + skor.ToString();
    }
    public void MoveGameObject()
    {
        dadu.transform.position = new Vector3(-6.42f, -9f, 0f);
    }
    public void ReturnGameObject()
    {
        dadu.transform.position = new Vector3(-6.42f, -3.1f, 0f);
    }
    public void munculSoal(string teks, string a, string b, string c, string d)
    {
        countMunculSoal += 1;
        dadu.GetComponent<Dice>().coroutineAllowed = false;
        RandomPos();
        MoveGameObject();
        soalBox.SetActive(true);
        animator.SetTrigger("muncul");
        soalText.text = teks;
        aText.text = a;
        bText.text = b;
        cText.text = c;
        dText.text = d;
    }

    public void prosesKoreksiular(string kunci, int a, int b, int c)
    {
        if (kunci != kunciSoal[a] && Kontrol.penentu == b)
        {
            Kontrol.lemparDadu = 1;
            // pemain.GetComponent<Jalan>().bolehJalan = true;
            salah.GetComponent<Salah>().PlayMusic();
            dadu.GetComponent<Dice>().coroutineAllowed = true;
            //soalBox.SetActive(false); 
            if(c != 0)
            {
                pemain.GetComponent<Jalan>().transform.position = Vector2.MoveTowards(
                pemain.GetComponent<Jalan>().transform.position,
                pemain.GetComponent<Jalan>().titik[c-1].transform.position,
                moveSpeed * Time.deltaTime);
            }
            else
            {
                pemain.GetComponent<Jalan>().transform.position = Vector2.MoveTowards(
                pemain.GetComponent<Jalan>().transform.position,
                pemain.GetComponent<Jalan>().titik[0].transform.position,
                moveSpeed * Time.deltaTime);
            }   
            pemain.GetComponent<Jalan>().titikIndex = c;
            ReturnGameObject();            
            if (pemain.GetComponent<Jalan>().transform.position == pemain.GetComponent<Jalan>().titik[c].transform.position)
                pemain.GetComponent<Jalan>().bolehJalan = false;            
        }
        else if (kunci == kunciSoal[a] && Kontrol.penentu == b)
        {
            countBenar += 1;
            GetComponent<AudioSource>().Play();
            dadu.GetComponent<Dice>().coroutineAllowed = true;
            //soalBox.SetActive(false);
            balloon.SetActive(true);
            balon.SetTrigger("balon");
            skor += 5;
            ReturnGameObject();
            pemain.GetComponent<Jalan>().bolehJalan = false;
        }
    }

    public void prosesKoreksitangga(string kunci, int a, int b, int c)
    {
        if(kunci == kunciSoal[a] && Kontrol.penentu == b)
        {
            countBenar += 1;
            // pemain.GetComponent<Jalan>().bolehJalan = true;
            Kontrol.lemparDadu = 1;
            GetComponent<AudioSource>().Play();
            dadu.GetComponent<Dice>().coroutineAllowed = true; 
            balloon.SetActive(true);
            //soalBox.SetActive(false);
            balon.SetTrigger("balon");
            if(c != 0)
            {
                pemain.GetComponent<Jalan>().transform.position = Vector2.MoveTowards(
                pemain.GetComponent<Jalan>().transform.position,
                pemain.GetComponent<Jalan>().titik[c-1].transform.position,
                moveSpeed * Time.deltaTime);
            }
            else
            {
                pemain.GetComponent<Jalan>().transform.position = Vector2.MoveTowards(
                pemain.GetComponent<Jalan>().transform.position,
                pemain.GetComponent<Jalan>().titik[0].transform.position,
                moveSpeed * Time.deltaTime);
            }            
            pemain.GetComponent<Jalan>().titikIndex = c;
            skor += 5;
            ReturnGameObject();            
            if (pemain.GetComponent<Jalan>().transform.position == pemain.GetComponent<Jalan>().titik[c].transform.position)
                pemain.GetComponent<Jalan>().bolehJalan = false;            
        }
        else if(kunci != kunciSoal[a] && Kontrol.penentu == b)
        {
            //soalBox.SetActive(false);
            salah.GetComponent<Salah>().PlayMusic();
            ReturnGameObject();
            pemain.GetComponent<Jalan>().bolehJalan = false;
        }
    }

    public void koreksiSoal(string kunci)
    {
        prosesKoreksitangga(kunci, 0,7,12);
        prosesKoreksitangga(kunci, 1,18,23);
        prosesKoreksiular(kunci, 2,22,11);
        prosesKoreksiular(kunci, 3,16,13);
        prosesKoreksiular(kunci, 4,8,0);
        prosesKoreksitangga(kunci, 5,1,9);
        prosesKoreksitangga(kunci, 6,10,19);
        prosesKoreksiular(kunci, 7,14,3);
        prosesKoreksiular(kunci, 8,15,5);
        prosesKoreksitangga(kunci, 9,2,6);
        Kontrol.posisiPemain = pemain.GetComponent<Jalan>().titikIndex - 1;
    }
}

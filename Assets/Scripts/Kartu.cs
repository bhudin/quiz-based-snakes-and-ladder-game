using System.Collections;
using UnityEngine;

public class Kartu : MonoBehaviour
{
    public GameObject kartu, teksmenang, close;
    public Sprite[] kartuu;
    private SpriteRenderer penampilKartu;
    public SpriteRenderer rend;
    private bool bolehKlik;

    private void Start()
    {
        bolehKlik = true;
        penampilKartu = gameObject.GetComponent<SpriteRenderer>();
        kartu.SetActive(false);
        rend = GetComponent<SpriteRenderer>();
        Color c = rend.material.color;
        rend.material.color = c;
    }
    public void OnMouseDown()
    {
        if (bolehKlik)
        {
            if (Soal.skor <= Soal.batas5)
            {
                StartCoroutine(MunculkanKartu(0));
            }
            if (Soal.skor > Soal.batas5 && Soal.skor <= Soal.batas4)
            {
                StartCoroutine(MunculkanKartu(1));
            }
            if (Soal.skor > Soal.batas4 && Soal.skor <= Soal.batas3)
            {
                StartCoroutine(MunculkanKartu(2));
            }
            if (Soal.skor > Soal.batas3 && Soal.skor <= Soal.batas2)
            {
                StartCoroutine(MunculkanKartu(3));
            }
            if (Soal.skor > Soal.batas2 && Soal.skor <= Soal.batas1)
            {
                StartCoroutine(MunculkanKartu(4));
            }
            if (Soal.skor > Soal.batas1)
            {
                StartCoroutine(MunculkanKartu(5));
            }
        }
    }

    public IEnumerator MunculkanKartu(int indekskartu)
    {
        bolehKlik = false;
        teksmenang.SetActive(false);
        close.SetActive(false);
        penampilKartu.sprite = kartuu[7];
        kartu.transform.localScale = new Vector2(kartu.transform.localScale.x + 0.6f, kartu.transform.localScale.y + 0.6f);
        kartu.transform.position = new Vector3(0, 0, -50f);
        kartu.transform.Rotate(Vector3.forward * 90);
        yield return new WaitForSeconds(2f);
        GetComponent<AudioSource>().Play();
        penampilKartu.sprite = kartuu[indekskartu];
        for (float f = 0f; f <= 1; f += 0.05f)
        {
            Color c = rend.material.color;
            c.a = f;
            rend.material.color = c;
            yield return new WaitForSeconds(0.05f);
        }        
        yield return new WaitForSeconds(3f);
        teksmenang.SetActive(true);
        close.SetActive(true);
        penampilKartu.sprite = kartuu[6];
        kartu.transform.localScale = new Vector2(0.4f, 0.4f);
        kartu.transform.position = new Vector3(0, -1.3f, -50f);
        kartu.transform.Rotate(Vector3.forward * -90);
        bolehKlik = true;
    }      
}

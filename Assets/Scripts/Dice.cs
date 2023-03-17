using System.Collections;
using UnityEngine;

public class Dice : MonoBehaviour
{
    public static int countDadu;
    private Sprite[] diceSides;
    private SpriteRenderer rend;
    public bool coroutineAllowed = true;
    private void Start()
    {
        countDadu = 0;        
        rend = GetComponent<SpriteRenderer>();
        diceSides = Resources.LoadAll<Sprite>("DiceSides/");
        rend.sprite = diceSides[5];
    }

    void OnMouseDown()
    {
        if (!Kontrol.gameOver && coroutineAllowed)
        {
            countDadu += 1;
            StartCoroutine("RollTheDice");
            GetComponent<AudioSource>().Play();
        }
        else
        {
            enabled = false;
        }
        //GetComponent<AudioSource>().Play();
    }

    private IEnumerator RollTheDice()
    {
        coroutineAllowed = false;
        int randomDiceSide = 0;
        for (int i = 0; i <= 20; i++)
        {
            randomDiceSide = Random.Range(0, 6);
            rend.sprite = diceSides[randomDiceSide];
            yield return new WaitForSeconds(0.01f);
        }

        Kontrol.lemparDadu = randomDiceSide + 1;
        Kontrol.Pindah();
        Soal.skor -= Kontrol.lemparDadu;
        yield return new WaitForSeconds(1f*(Kontrol.lemparDadu/2));
        coroutineAllowed = true;
    }
}

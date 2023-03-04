using UnityEngine;

public class A : MonoBehaviour
{
    public static GameObject jawaban, pemain;
    public Animator animator;
    private static GameObject dadu;

  
    void OnMouseDown()
    {
        pemain.GetComponent<Jalan>().bolehJalan = true;
        dadu = GameObject.Find("Dadu");
        dadu.GetComponent<Dice>().coroutineAllowed = true;
        dadu.GetComponent<Renderer>().enabled = true;
        Soal koreksi = GameObject.Find("Soal").GetComponent<Soal>();
        koreksi.koreksiSoal("A");
        animator.SetTrigger("selesai");
    }

    private void Start()
    {
        pemain = GameObject.Find("Pemain");
        jawaban = GameObject.Find("GameObject");
    }

    private void Update()
    {
        if (Application.isMobilePlatform)
        {
            //CheckTouchInput();
        }
    }

    private void CheckTouchInput()
    {
        if (Input.touchCount > 0)
        {
            if (Input.touches[0].phase == TouchPhase.Began)
            {
                pemain.GetComponent<Jalan>().bolehJalan = true;
                dadu = GameObject.Find("Dadu");
                dadu.GetComponent<Dice>().coroutineAllowed = true;
                dadu.GetComponent<Renderer>().enabled = true;
                Soal koreksi = GameObject.Find("Soal").GetComponent<Soal>();
                koreksi.koreksiSoal("A");
                animator.SetTrigger("selesai");
            }
        }
    }
}

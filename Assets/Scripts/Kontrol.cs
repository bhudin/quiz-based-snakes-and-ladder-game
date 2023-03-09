using UnityEngine;
using UnityEngine.UI;

public class Kontrol : MonoBehaviour
{
    [SerializeField]
    private static GameObject pemain;
    public static GameObject dadu, waktu;
    private GameObject data;
    public static int nofPlayers = 1;
    public static int posisiPemain = 0;
    public static bool gameOver = false;
    public static int lemparDadu = 0;
    public static int penentu = 0;
    public Text waktuText;
    public static float time = 0.0f;
    public string[][] masterSoal; 
    void Start()
    {
        enabled = true;
        waktu = GameObject.Find("Waktu");
        waktu.SetActive(true);
        posisiPemain = 0;
        gameOver = false;

        pemain = GameObject.Find("Pemain");
        pemain.GetComponent<Jalan>().bolehJalan = false;

        dadu = GameObject.Find("Dadu");
        data = GameObject.Find("Kontrol");
        data.GetComponent<LoadCSV>().LoadItemData();
        masterSoal = new string[data.GetComponent<LoadCSV>().itemDatabase.Count][];
        
        for (var i = 0; i< data.GetComponent<LoadCSV>().itemDatabase.Count; i++)
        {
            masterSoal[i] = new string[] {data.GetComponent<LoadCSV>().itemDatabase[i].soal.ToString(),
            data.GetComponent<LoadCSV>().itemDatabase[i].A.ToString(),
            data.GetComponent<LoadCSV>().itemDatabase[i].B.ToString(),
            data.GetComponent<LoadCSV>().itemDatabase[i].C.ToString(),
            data.GetComponent<LoadCSV>().itemDatabase[i].D.ToString()};
        }
    }

    void Update()
    {
        if(pemain.GetComponent<Jalan>().titikIndex-1 == posisiPemain + lemparDadu) {
            if(pemain.GetComponent<Jalan>().bolehJalan)
                pemain.GetComponent<Jalan>().bolehJalan = false; 
        }
        time = Mathf.Round(Time.timeSinceLevelLoad);
        waktuText.text = "Waktu = " + time.ToString();        
        if (pemain.GetComponent<Jalan>().titikIndex >
            posisiPemain + lemparDadu)
        {
            penentu = posisiPemain + lemparDadu;
            pemainLempardadu(7,masterSoal[0]);
            pemainLempardadu(18,masterSoal[1]);
            pemainLempardadu(22,masterSoal[2]);
            pemainLempardadu(16,masterSoal[3]);
            pemainLempardadu(8,masterSoal[4]);
            pemainLempardadu(1,masterSoal[5]);
            pemainLempardadu(10,masterSoal[6]);
            pemainLempardadu(14,masterSoal[7]);
            pemainLempardadu(15,masterSoal[8]);
            pemainLempardadu(2,masterSoal[9]);
            // pemain.GetComponent<Jalan>().bolehJalan = false;
            posisiPemain = pemain.GetComponent<Jalan>().titikIndex - 1;
        }
        if (pemain.GetComponent<Jalan>().titikIndex > 24)
        {
            enabled = false;
        }
    }

    public static void Pindah()
    {
        pemain.GetComponent<Jalan>().bolehJalan = true; 
    }

    public void pemainLempardadu(int posisi, string[] soalJawab)
    {
        if (posisiPemain + lemparDadu == posisi)
            {
                dadu.GetComponent<Dice>().coroutineAllowed = false;
                Soal muncul = GameObject.Find("Soal").GetComponent<Soal>();
                muncul.munculSoal(soalJawab[0],soalJawab[1],soalJawab[2],soalJawab[3],soalJawab[4]);
                dadu.GetComponent<Renderer>().enabled = false;                
            }
    }
}
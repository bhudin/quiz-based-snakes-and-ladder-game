using System;
using UnityEngine;
using System.Collections.Generic;
using System.IO;
 
public class StoreData : MonoBehaviour
{
    DateTime currentTime = DateTime.UtcNow;
    DateTime lastTimeClicked; 
    public List<string> playerData = new List<string>();
    private string waktu, nilai, inputData;
    private GameObject pemain;

    void Start()
    {
        enabled = true;
        pemain = GameObject.Find("Pemain");
    }
        /*
        LootLockerSDKManager.StartGuestSession((response) =>
        {
            if (!response.success)
            {
                Debug.Log("error starting LootLocker session");

                return;
            }

            Debug.Log("successfully started LootLocker session");
        });
    } 
    public void SubmitScore()
    {
        LootLockerSDKManager.SubmitScore(Mulai.username, Soal.skor, waktu, (response) =>
        {
            LootLockerSDKManager.StartGuestSession((response) =>
            {
                if (!response.success)
                {
                    Debug.Log("error starting LootLocker session");

                    return;
                }

                Debug.Log("successfully started LootLocker session");
            });

        });*/
    void Update()
    {
        if (Kontrol.gameOver == true)
        {
            HitungNilaiHuruf();
            UpdateData();
        }
    }

    public void UpdateData()
    {
        waktu = Jalan.time_fixed.ToString();
        playerData = new List<string> {Mulai.username, nilai, waktu, Dice.countDadu.ToString(), Soal.countMunculSoal.ToString(), Soal.countBenar.ToString()};
        inputData = DateTime.Now.ToString("dd/MM/yyyy   hh:mm:ss tt") + "," + playerData[0] + "," + playerData[1] + "," + playerData[2] + "," + playerData[3] + "," + playerData[4] + "," + playerData[5];
        string filePath = getPath();
    
        StreamWriter writer = new StreamWriter(filePath, append: true);
    
        writer.WriteLine(inputData);

        writer.Flush();
        writer.Close();
        enabled = false;
    }

    public void HitungNilaiHuruf()
    {
        if (Soal.skor <= Soal.batas5)
            {
                nilai = "D";
            }
        if (Soal.skor > Soal.batas5 && Soal.skor <= Soal.batas4)
            {
                nilai = "C";
            }
        if (Soal.skor > Soal.batas4 && Soal.skor <= Soal.batas3)
            {
                nilai = "BC";
            }
        if (Soal.skor > Soal.batas3 && Soal.skor <= Soal.batas2)
            {
                nilai = "B";
            }
        if (Soal.skor > Soal.batas2 && Soal.skor <= Soal.batas1)
            {
                nilai = "AB";
            }
        if (Soal.skor > Soal.batas1)
            {
                nilai = "A";
            }
    }
 
    private string getPath()
    {
#if UNITY_EDITOR
        return Application.dataPath + "/Data/"  + "Saved_Inventory.csv";
#elif UNITY_ANDROID
        return Application.persistentDataPath+"Saved_Inventory.csv";
#elif UNITY_IPHONE
        return Application.persistentDataPath+"/"+"Saved_Inventory.csv";
#else
        return Application.dataPath +"/"+"Saved_Inventory.csv";
#endif
    }
 
 
}
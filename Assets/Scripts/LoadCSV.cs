using System.Collections.Generic;
using UnityEngine;

public class LoadCSV : MonoBehaviour
{
    private const string File = "ItemDatabase";
    public Item blankItem;
    public List<Item> itemDatabase = new List<Item>();
    public void LoadItemData()
    {
        itemDatabase.Clear();

        List<Dictionary<string, object>> data = CSVReader.Read(File);
        for (var i = 0; i< data.Count; i++)
        {
            int id = int.Parse(data[i]["id"].ToString(), System.Globalization.NumberStyles.Integer);
            string soal = data[i]["soal"].ToString();
            string A = data[i]["A"].ToString();
            string B = data[i]["B"].ToString();
            string C = data[i]["C"].ToString();
            string D = data[i]["D"].ToString();
            string kunci = data[i]["kunci"].ToString();

            AddItem(id, soal, A, B, C, D, kunci);
        }
    }

    void AddItem(int id, string soal, string A, string B, string C, string D, string kunci)
    {
        Item tempItem = new Item(blankItem);
        
        tempItem.id = id;
        tempItem.soal = soal;
        tempItem.A = A;
        tempItem.B = B;
        tempItem.C = C;
        tempItem.D = D;
        tempItem.kunci = kunci;

        itemDatabase.Add(tempItem);
    }

    /*string PanggilSoal(int no)
    {
        string result =  itemDatabase[id];
        return result;
    }*/
}

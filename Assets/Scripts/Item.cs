[System.Serializable]
public class Item
{
    public int id;
    public string soal;
    public string A,B,C,D;
    public string kunci;
    public Item(Item d)
    {
        id = d.id;
        soal = d.soal;
        A = d.A;
        B = d.B;
        C = d.C;
        D = d.D;
        kunci = d.kunci;
    }
}

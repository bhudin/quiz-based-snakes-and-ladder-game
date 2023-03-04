using UnityEngine;
using UnityEngine.SceneManagement;

public class help : MonoBehaviour
{
    private GameObject menu;
    private void Start()
    {
        menu = GameObject.Find("menu");
    }
    private void OnMouseDown()
    {
        SceneManager.LoadScene("Bantuan");
        menu.GetComponent<MenuAwal>().bolehHilang = true;
    }

}

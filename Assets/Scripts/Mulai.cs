using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Mulai : MonoBehaviour
{
    public InputField usernameInput;
    public static string username;
    public SpriteRenderer renn;
    private GameObject menu;
    float myCounter = 0f;
    float myTime = 3f;
    void OnMouseDown()
    {
        if(myCounter >= myTime)
        {
            username = usernameInput.text.ToString();
            SceneManager.LoadScene("Utama");
            menu.GetComponent<MenuAwal>().bolehHilang = true;            
        }        
    }    
    void Start()
    {
        //tombol.SetActive(false);
        usernameInput.text = username;
        menu = GameObject.Find("menu");
        renn = GetComponent<SpriteRenderer>();
        Color c = renn.material.color;
        c.a = 0f;
        renn.material.color = c;
        StartCoroutine("FadeIn");
    }
    private void Update()
    {
        if (Application.isMobilePlatform)
        {
            //CheckTouchInput();
        }
        myCounter += Time.deltaTime;
    }

    public IEnumerator FadeIn()
    {
        //tombol.SetActive(true);
        yield return new WaitForSeconds(3f);
        for (float f = 0f; f <= 1f; f += 0.05f)
        {
            Color c = renn.material.color;
            c.a = f;
            renn.material.color = c;
            yield return new WaitForSeconds(0.05f);
        }
    }
    
    private void CheckTouchInput()
    {
        if (Input.touchCount > 0)
        {
            if (Input.touches[0].phase == TouchPhase.Began)
            {
                SceneManager.LoadScene("Utama");
            }
        }
    }
}

using UnityEngine;
using UnityEngine.SceneManagement;

public class Kembali : MonoBehaviour
{
    void OnMouseDown()
    {
        SceneManager.LoadScene("MenuAwal");
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
                SceneManager.LoadScene("MenuAwal");
            }
        }
    }
}

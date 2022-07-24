using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuInicio : MonoBehaviour
{
    public GameObject CanvasMenu;
    public GameObject Opciones;
    public GameObject SalirJuego;
    public GameObject IniciarJuego;
    public GameObject MenuPrincipal;

    public void MostrarMenuOpciones()
    {
        Opciones.SetActive(true);
        MenuPrincipal.SetActive(false);
    }

    public void OcultarOpciones()
    {
        Opciones.SetActive(false);
        MenuPrincipal.SetActive(true);
    }
    public void IniciarJuego_()
    {
        SceneManager.LoadScene(1);
    }

    public void FinalizarJuego()
    {
        Application.Quit();
    }
}

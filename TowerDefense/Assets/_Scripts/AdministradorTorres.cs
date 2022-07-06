using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdministradorTorres : MonoBehaviour
{
    public AdministradorToques referenciaAdminToques;

    public enum TorreSeleccionada
    {
        Torre_1,Torre_2,Torre_3,Balista,Campamentos
    }


    public TorreSeleccionada torreSeleccionada;
    public List<GameObject> prefabsTorres;

    
    private void OnEnable()
    {
        referenciaAdminToques.EnPlataformaTocada += CrearTorre;
    }

    private void OnDisable()
    {
        referenciaAdminToques.EnPlataformaTocada -= CrearTorre;
    }



    private void CrearTorre(GameObject plataforma)
    {
        if(plataforma.transform.childCount == 0)
        {
        Debug.Log("Creando Torre");
        int indiceTorre = (int)torreSeleccionada;
        Vector3 posParaIntanciar = plataforma.transform.position;
        posParaIntanciar.y += 0.5f;
        GameObject torreInstanciada = Instantiate<GameObject>(prefabsTorres[indiceTorre], posParaIntanciar, Quaternion.identity);
        torreInstanciada.transform.SetParent(plataforma.transform);
        }
        
    }

    public void ConfigurarTorre(int torre)
    {
        if(Enum.IsDefined(typeof(TorreSeleccionada), torre))
        {
            torreSeleccionada = (TorreSeleccionada)torre;
        }
        else
        {
            Debug.LogError("esa torre no esta definida");
        }


    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;


public class Enemigo : EnemigoBase
{
    public override void OnDestroy()
    {
        base.OnDestroy();
        referenciaAdminJuego.enemigosBaseDerrotados++;
    }
}

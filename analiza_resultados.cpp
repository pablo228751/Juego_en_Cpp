#include "analiza_resultados.h"




//Función Caso 1: Las caras son distintas entre sí y ninguna de ellas es un as
bool caso_1(int da2[],int cant)
{
    int i,j,k,analizar=0;
    for(i=0; i<cant; i++)
    {
        switch(i)
        {
        case 0:
            j=1;
            k=2;
            break;
        case 1:
            j=0;
            break;
        case 2:
            k=1;
            break;
        }
        if(da2[i] == da2[j] || da2[i] == da2[k] || da2[i] == 1)
        {
            analizar++;
        }
    }
    if(analizar == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}




//Función Caso 2: Oink, Si las caras son iguales entre sí y no son ases.
bool caso_2(int da2[],int cant)
{
    int contar_as=0;
    for (int i=0; i<cant; i++)
    {
        if(da2[i]==1)
        {
            contar_as++;
        }
    }
    switch(cant)
    {
    case 2:
        if(da2[0] == da2[1] && contar_as==0 )
        {
            return true;
        }
        else
        {
            return false;
        }
        break;
    case 3:
        if(da2[0] == da2[1] && da2[0] == da2[2] && contar_as==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        break;
    }
}




//Función Caso 3: Las caras son distintas entre sí y hay un as entre ellas.
bool caso_3(int da2[],int cant)
{
    int i,j,k,contar_as=0;
    bool coinciden=false,as=false;
    for(i=0; i<cant; i++)
    {
        if(da2[i]==1)
        {
            contar_as++;
        }
        switch(i)
        {
        case 0:
            j=1;
            k=2;
            break;
        case 1:
            j=0;
            break;
        case 2:
            k=1;
            break;
        }
        if(da2[i] == da2[j] || da2[i] == da2[k])
        {
            coinciden=true;
        }
        else if(da2[i] == 1)
        {
            as=true;
        }
    }
    if(coinciden ==false && as == true && contar_as <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}




//Función Caso 4 y 5: Si dos de las caras son iguales entre sí y son ases
int caso_4_y_5(int da2[],int cant)
{
    int i,contar_as=0;
    for(i=0; i<cant; i++)
    {
        if(da2[i]==1)
        {
            contar_as++;
        }
    }
    return contar_as;
}




//Función Caso 6: Se lanza con 3 dados y hay 2 caras iguales y una distinta (siempre que no sean ases)
bool caso_6(int da2[],int cant)
{
    int i,j,k,analizar=0;
    for(i=0; i<cant; i++)
    {
        switch(i)
        {
        case 0:
            j=1;
            k=2;
            break;
        case 1:
            j=0;
            break;
        case 2:
            k=1;
            break;
        }
        if(da2[i] == da2[j] && da2[k] != 1 && da2[i] != 1 && da2[k] != da2[i] || da2[i] == da2[k] && da2[j] != 1 && da2[i] != 1 && da2[j] != da2[i] || da2[j] == da2[k] && da2[i] != 1 && da2[j] != 1 && da2[j] != da2[i])
        {
            analizar++;
        }
    }
    if(analizar > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}




//Función Caso 7: Se lanza con 3 dados y hay 2 caras iguales un as)
bool caso_7(int da2[],int cant)
{
    int i,j,k;
    for(i=0; i<cant; i++)
    {
        switch(i)
        {
        case 0:
            j=1;
            k=2;
            break;
        case 1:
            j=0;
            break;
        case 2:
            k=1;
            break;
        }
        if(da2[i] == da2[j] && da2[k] == 1 || da2[i] == da2[k] && da2[j] == 1 || da2[j] == da2[k] && da2[i] == 1)
        {
            return true;
        }
    }
    //Si al finalizar no hubo coincidencia
    return false;
}




//Función Caso 8: BONUS Numero primo
bool caso_8(int da2[])
{
    int i,j=1,k=2,analizar=0;
    for(i=0; i<3; i++)

        if(da2[i] == 2 || da2[i] == 3 || da2[i] == 5)
        {
            if(da2[j] == 2 || da2[j] == 3 || da2[j] == 5){

                        analizar++;


            }
            if(da2[k] == 2 || da2[k] == 3 || da2[k] == 5){
                analizar++;
            }

        }

    if(analizar >= 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}






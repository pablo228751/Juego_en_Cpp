#include "cerditos_y_estadisticas.h"




//FUNCIÓN PARA LOS CRÉDITOS
void cerdi_integrantes()
{
    string integrantes[]= {"Pablo Gabriel Felice || Legajo: 26283","Simón, Angel || Profesor","Lara, Brian ||Jefe de trabajos prácticos","Vélez, Laura || Jefe de trabajos prácticos","Arena, Soledad || Ayudante de trabajos prácticos","Avila Rotela, Catalina || Ayudante de trabajos prácticos"};
    string espacio="                                                      ";
    char salir;
    system("cls");
    cout<<endl<<endl;
    /*
    for(int i=0;i<sizeof(integrantes)/sizeof(integrantes[0]);i++){
            cout<<endl<<espacio<<integrantes[i]<<endl;
    }*/
    cout<<".";
    Beep(440,500);
    Sleep(7);
    cout<<" .";
    Beep(440,500);
    Sleep(7);
    cout<<"  .";
    Beep(440,500);
    Sleep(7);
    cout<<"   .";
    Beep(349,350);
    Sleep(5);
    cout<<"    .";
    Beep(523,150);
    Sleep(5);
    cout<<"     .";
    Beep(440,500);
    Sleep(40);
    cout<<"      .";
    Beep(349,350);
    cout<<"       .";
    Beep(523,150);
    cout<<"        .";
    Beep(440,1000);
    cout<<endl<<espacio<<"* Tecnicatura en Programación UTN - Laboratorio de Computación I *"<<endl<<endl;
    Beep(659,500);
    rlutil::setColor(rlutil::LIGHTCYAN);
    cout<<endl<<espacio<<"                  - INTEGRANTES DE LA CÁTEDRA -"<<endl<<endl;
    rlutil::setColor(rlutil::WHITE);
    Beep(659,500);
    cout<<endl<<espacio<<integrantes[1]<<endl<<endl;
    Beep(659,500);
    cout<<endl<<espacio<<integrantes[2]<<endl<<endl;
    Beep(698,350);
    Sleep(10);
    cout<<endl<<espacio<<integrantes[3]<<endl<<endl;
    Beep(523,150);
    cout<<endl<<espacio<<integrantes[4]<<endl<<endl;
    Beep(415,500);
    Sleep(30);
    cout<<endl<<espacio<<integrantes[5]<<endl<<endl;
    Beep(349,350);
    rlutil::setColor(rlutil::LIGHTMAGENTA);
    cout<<endl<<espacio<<"                           - ESTUDIANTE -"<<endl<<endl;
    rlutil::setColor(rlutil::WHITE);
    Beep(523,150);
    cout<<endl<<espacio<<integrantes[0]<<endl<<endl;
    Beep(440,1000);
    cout<<endl<<endl<<endl<<espacio<<"Presione una tecla y [ENTER] para volver atrás -> ";
    cin>>salir;
}




// FUNCION ESTADÍSTICAS
void estadisticas(string nom_estadi[],int punt_estadi[])
{
    char e;
    string nom[10],ptv[10],msj;
    int contador=0;
    for(int i=0; i<10; i++)
    {
        if(punt_estadi[i]>0)
        {
            nom[i]=calcular_espacios(nom_estadi[i],22," ");
            ptv[i]=calcular_espacios(to_string(punt_estadi[i])+" PDV",13," ");
            contador++;
        }
        else
        {
            nom[i]=calcular_espacios("-",22," ");
            ptv[i]=calcular_espacios("-",13," ");
        }
    }
    if(contador > 0)
    {
        msj="                           RANKING 'LOS 10 MEJORES PUNTAJES'   ";
    }
    else
    {
        msj="                 SIN ESTADíSTICAS, AÚN NO SE JUGARON PARTIDAS";
    }
    img_menu(7,1,false);
    cout<<endl<<msj<<endl;
    cout<<"                        +______________________+_____________+"<<endl;
    cout<<"                        |                      |             |"<<endl;
    cout<<"                        |        NOMBRE        |     PDV     |"<<endl;
    cout<<"                        |                      |             |"<<endl;
    cout<<"                  +-----+----------------------+-------------+"<<endl;
    cout<<"                  |  1° |"<<nom[0]<<"|"<<ptv[0]<<"|"<<endl;
    cout<<"                  +-----+----------------------+-------------+"<<endl;
    cout<<"                  |  2° |"<<nom[1]<<"|"<<ptv[1]<<"|"<<endl;
    cout<<"                  +-----+----------------------+-------------+"<<endl;
    cout<<"                  |  3° |"<<nom[2]<<"|"<<ptv[2]<<"|"<<endl;
    cout<<"                  +-----+----------------------+-------------+"<<endl;
    cout<<"                  |  4° |"<<nom[3]<<"|"<<ptv[3]<<"|"<<endl;
    cout<<"                  +-----+----------------------+-------------+"<<endl;
    cout<<"                  |  5° |"<<nom[4]<<"|"<<ptv[4]<<"|"<<endl;
    cout<<"                  +-----+----------------------+-------------+"<<endl;
    cout<<"                  |  6° |"<<nom[5]<<"|"<<ptv[5]<<"|"<<endl;
    cout<<"                  +-----+----------------------+-------------+"<<endl;
    cout<<"                  |  7° |"<<nom[6]<<"|"<<ptv[6]<<"|"<<endl;
    cout<<"                  +-----+----------------------+-------------+"<<endl;
    cout<<"                  |  8° |"<<nom[7]<<"|"<<ptv[7]<<"|"<<endl;
    cout<<"                  +-----+----------------------+-------------+"<<endl;
    cout<<"                  |  9° |"<<nom[8]<<"|"<<ptv[8]<<"|"<<endl;
    cout<<"                  +-----+----------------------+-------------+"<<endl;
    cout<<"                  | 10° |"<<nom[9]<<"|"<<ptv[9]<<"|"<<endl;
    cout<<"                  +-----+----------------------+-------------+"<<endl;
    cout<<endl<<endl<<" Presione cualquier tecla y [ENTER] para volver atrás -> ";
    cin>>e;
}




//FUNCION PARA COMPLETAR ESPACIOS VACIOS
string calcular_espacios(string palabra,int longitud,string caract)
{
    int i;
    for(i=0; i<longitud; i++)
    {
        if(palabra.size() < longitud)
        {
            palabra= caract+palabra;
        }
        if(palabra.size() < longitud)
        {
            palabra= palabra+caract;
        }
        else
        {
            break;
        }
    }
    return palabra;
}

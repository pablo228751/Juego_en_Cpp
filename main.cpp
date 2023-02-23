#include <iostream>
#include <windows.h>
#include <cstdlib>
#include<bits/stdc++.h>
#include <ctime>
#include <locale.h>
#include <string>
#include "animaciones.h"
#include "cerditos_y_estadisticas.h"
#include "analiza_resultados.h"
#include "rlutil.h"


using namespace std;


void jugadores(string jugador[], int anima);
void tirar_dados(int cant, int da2[],bool cls, int puntos[][6], int &anima);
void datos_ronda(int player,int lanzam,string jugador[],int puntos[][6],int trufas);
void matriz_dados(int da2[],int cant_da2,string jugador[],int jugadorActual,int dados,int puntos[][6]);
void calcular_PDV(int puntos[][6],string jugador[],string nom_estadi[],int punt_estadi[],int lanzam,int jugadorActual,bool &act_ronda,int bonus[][2]);
void tiene_as(int puntos[][6],string jugador[],int da2[],int cant_da2,string msj,int jugadorActual,int &lanzam,int &acu_trufas,string nom_estadi[],int punt_estadi[],int dados,int &color,bool &act_ronda,int bonus[][2]);
void terminar_ronda(bool &bloquear1,bool &bloquear2,int puntos[][6],int &jugadorActual,int &lanzam,bool &salir,bool &opcion,string jugador[],string nom_estadi[],int punt_estadi[],bool &act_ronda,int bonus[][2]);
string calcular_caracteres(string palabra,int longitud,string caract);
void msj_inicia(string nombre,int id_jugador);
void alt_enter();




int main()
{
    rlutil::setColor(rlutil::WHITE);
    bool finalizar=false,act_ronda=false;
    string nom_estadi[10];
    int punt_estadi[10]= {};
    alt_enter(); //Pantalla completa
    sonido_y_txt();
    txt_gran_cerdo();
    while(finalizar==false)
    {
        setlocale(LC_CTYPE, "Spanish");
        const int cant_jugadores=2;
        string jugador[cant_jugadores],msj;
        //REFERENCIA 1 - SECCION PUNTOS
        int puntos[2][6]= {};//puntos[cant_jugadores],[[0]puntos_para iniciar],[[1]Rondas Jugadas],[[2]puntos_x_ronda]],[[3]trufas],[[4]oinks],[[5]cerdo_codicioso]
        int bonus[2][2]={}; //BONUS
        int anima=0, color=15;
        const int cant_da2=3;
        int i,j,da2[cant_da2]= {},inicio=1,mayor=0,ronda=5,acuA=0,acuB,dados=2,jugadorActual=0,lanzam=0,acu_trufas=0;
        char lanzar,continuar;
        bool repetir=true,salir=false,bloquear1=true,bloquear2=true,cerrar=false,opcion=true,modificar_dados=false,ya_paso=false,act_bonus=true;

        //While para definir el inicio de la partida(nombres de los jugadores, turno del primer jugador,etc)
        while(inicio !=0 )
        {


            img_menu(0,1,false);
            menu();
            string jugador_1,jugador_2;
            cout<<endl<<" -> ";
            cin>>inicio;
            switch(inicio)
            {
            case 0:
                inicio=0;
                finalizar=true;
                cout<<"             FIN DEL JUEGO"<<endl<<endl;
                break;
            case 1:
                inicio=1;
                jugadores(jugador,anima);
                img_menu(5,0,false);
                cout<<endl<<"+-------------------------------------------------------------------+"<<endl;//32 caracteres
                jugador_1=calcular_caracteres("Jugador #1 ["+jugador[0]+"]",33," ");
                jugador_2=calcular_caracteres("Jugador #2 ["+jugador[1]+"]",33," ");
                cout<<"|";
                rlutil::setColor(rlutil::LIGHTCYAN);
                cout<<jugador_1;
                rlutil::setColor(rlutil::WHITE);
                cout<<"|";
                rlutil::setColor(rlutil::LIGHTMAGENTA);
                cout<<jugador_2;
                rlutil::setColor(rlutil::WHITE);
                cout<<"|";
                cout<<endl<<"+-------------------------------------------------------------------+"<<endl;
                inicio=0;
                while(repetir==true)
                {
                    repetir=false;
                    //Inicio JUGADORES
                    for(i=0; i< 2; i++)
                    {
                        opcion =true;
                        while(opcion)
                        {
                            cerrar=false; //variable para activar todo el codigo dentro del siguiente for
                            cout<<endl<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
                            cout<<endl<<endl<<"--->   [";
                            if(i==0)
                            {
                                rlutil::setColor(rlutil::LIGHTCYAN);
                            }
                            else
                            {
                                rlutil::setColor(rlutil::LIGHTMAGENTA);
                            }
                            cout<<jugador[i];
                            rlutil::setColor(rlutil::WHITE);
                            cout<<"] presione (L) y [ENTER] para lanzar los dados -> ";
                            cin>>lanzar;
                            cout<<endl<<endl;
                            switch(lanzar)
                            {
                            case 'L':
                            case'l':
                                // Cantidad de dados
                                tirar_dados(dados,da2,false,puntos,anima);
                                /*
                                //SOLO PARA FORZAR RESULTADOS DE DADOS
                                if (i ==0)
                                {
                                    da2[0]= {5};
                                    da2[1]= {3};
                                    da2[2]= {0};
                                }
                                else if(i==1)
                                {
                                    da2[0]= {4};
                                    da2[1]= {4};
                                    da2[2]= {0};
                                }
                                // FIN PRUEBA
                                */
                                opcion=false;
                                break;
                            case '2':
                                //estadisticas();
                                calcular_PDV(puntos,jugador,nom_estadi,punt_estadi,lanzam,jugadorActual,act_ronda,bonus);
                                cerrar=true; //Para no continuar con el codigo del for
                                img_menu(5,0,false);
                                cout<<endl<<"+-------------------------------------------------------------------+"<<endl;//32 caracteres
                                jugador_1=calcular_caracteres("Jugador #1 ["+jugador[0]+"]",33," ");
                                jugador_2=calcular_caracteres("Jugador #2 ["+jugador[1]+"]",33," ");
                                cout<<"|";
                                rlutil::setColor(rlutil::LIGHTCYAN);
                                cout<<jugador_1;
                                rlutil::setColor(rlutil::WHITE);
                                cout<<"|";
                                rlutil::setColor(rlutil::LIGHTMAGENTA);
                                cout<<jugador_2;
                                rlutil::setColor(rlutil::WHITE);
                                cout<<"|";
                                cout<<endl<<"+-------------------------------------------------------------------+"<<endl;
                                //continue; //saltar el codigo while infinito
                                opcion=false;
                                if (i==1)
                                {
                                    cout<<endl<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
                                    rlutil::setColor(rlutil::LIGHTCYAN);
                                    cout<<"                                                                    <----- Lanzamiento de: ["<<jugador[0]<<"]"<<endl;
                                    matriz_dados(da2,cant_da2,jugador,0,dados,puntos);//Dibujar dados
                                    rlutil::setColor(rlutil::WHITE);
                                }
                                i=i-1; // Importante!!!  para que vuelva a iterar al Jugador actual
                                break;
                            case '3':
                                cerdi_integrantes();
                                cerrar=true; //Para no continuar con el codigo del for
                                img_menu(5,0,false);
                                cout<<endl<<"+-------------------------------------------------------------------+"<<endl;//32 caracteres
                                jugador_1=calcular_caracteres("Jugador #1 ["+jugador[0]+"]",33," ");
                                jugador_2=calcular_caracteres("Jugador #2 ["+jugador[1]+"]",33," ");
                                cout<<"|";
                                rlutil::setColor(rlutil::LIGHTCYAN);
                                cout<<jugador_1;
                                rlutil::setColor(rlutil::WHITE);
                                cout<<"|";
                                rlutil::setColor(rlutil::LIGHTMAGENTA);
                                cout<<jugador_2;
                                rlutil::setColor(rlutil::WHITE);
                                cout<<"|";
                                cout<<endl<<"+-------------------------------------------------------------------+"<<endl;
                                //continue; //saltar el codigo while infinito
                                opcion=false;
                                if (i==1)
                                {
                                    cout<<endl<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
                                    rlutil::setColor(rlutil::LIGHTCYAN);
                                    cout<<"                                                                    <----- Lanzamiento de: ["<<jugador[0]<<"]"<<endl;
                                    matriz_dados(da2,cant_da2,jugador,0,dados,puntos);//Dibujar dados
                                    rlutil::setColor(rlutil::WHITE);
                                }
                                i=i-1; // Importante!!!  para que vuelva a iterar al Jugador actual
                                break;
                            case '0':
                                char q;
                                while(true)
                                {
                                    cout<<endl<<" ¿ Finalizar el Juego ? (S/N) -> ";
                                    cin>>q;
                                    if(toupper(q)=='S')
                                    {
                                        //Luego de confirmar 2 veces la salida:
                                        cerrar=true; //Para no continuar con el codigo del for
                                        inicio=0; //Para romper el while principal
                                        salir=true;//Para no ingresar en el siguiente while de inicio de partida
                                        i=3;//cortar el For
                                        finalizar=true;
                                        break;
                                    }
                                    else if(toupper(q)=='N')
                                    {
                                        cerrar=true; //Para no continuar con el codigo del for
                                        i=i-1; // Importante!!!  para que vuelva a iterar al Jugador actual
                                        img_menu(3,0,false);
                                        break;
                                    }
                                    else
                                    {
                                        cout<<endl<<" Opción Incorrecta, vuelva a intentarlo... "<<endl;
                                    }
                                }
                                opcion=false;
                                break;
                            default:
                                cout<<endl<<" Opción Incorrecta, vuelva a intentarlo...";
                                Sleep(3000);
                                img_menu(5,0,false);
                            }
                        }
                        if (cerrar == false)
                        {
                            if (i==0)
                            {
                                rlutil::setColor(rlutil::LIGHTCYAN);
                            }
                            else
                            {
                                rlutil::setColor(rlutil::LIGHTMAGENTA);
                            }
                            cout<<"                                                                    <----- Lanzamiento de: ["<<jugador[i]<<"]"<<endl;
                            rlutil::setColor(rlutil::WHITE);
                            // Procesar dados del Jugadores, se analizan los diferentes resultados para "Iniciar la Partida"
                            //JUGADORES:
                            for (int k=0; k<cant_da2; k++)
                            {
                                puntos[i][0]+=da2[k];
                                if(da2[k]>acuA)
                                {
                                    acuA=da2[k];
                                    acuB=i; // guarda el índice del Jugador con el mayor valor de dado
                                }
                                else if(da2[k]==acuA)
                                {
                                    acuB=-1; //Para no acumular el indice en caso de ser iguales
                                }
                            }
                            //Dibujar dados se pasa la variable da2 por direccion
                            matriz_dados(da2,cant_da2,jugador,i,dados,puntos);//Dibujar dados
                            //Si i no es el último jugador se deshabilita el for para analizar los puntos
                            if(i != cant_jugadores-1)
                            {
                                cerrar=true;
                            }
                            else
                            {
                                cerrar=false;
                            }
                        }
                    }
                    if(cerrar == false)
                    {
                        //string jugador_1,jugador_2;
                        jugador_1=calcular_caracteres("["+jugador[0]+"] --> "+to_string(puntos[0][0])+" PUNTOS",38," ");
                        jugador_2=calcular_caracteres("["+jugador[1]+"] --> "+to_string(puntos[1][0])+" PUNTOS",38," ");
                        cout<<endl<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
                        cout<<"+-----------------------------------------------------------------------------+"<<endl;
                        cout<<"|";
                        rlutil::setColor(rlutil::LIGHTCYAN);
                        cout<<jugador_1;
                        rlutil::setColor(rlutil::WHITE);
                        cout<<"|";
                        rlutil::setColor(rlutil::LIGHTMAGENTA);
                        cout<<jugador_2;
                        rlutil::setColor(rlutil::WHITE);
                        cout<<"|"<<endl;
                        cout<<"+-----------------------------------------------------------------------------+"<<endl;
                        if(puntos[0][0]>puntos[1][0])
                        {
                            msj_inicia(jugador[0],0);
                            repetir=false;
                            jugadorActual=0;
                        }
                        else if(puntos[0][0]==puntos[1][0])
                        {
                            if(acuB==0)
                            {
                                cout<<endl<<" Hay empate, pero "<<jugador[0]<<" obtuvo el dado con MAYOR valor: ["<<acuA<<"]";
                                msj_inicia(jugador[0],0);
                                repetir=false;
                                jugadorActual=0;
                            }
                            else if(acuB==1)
                            {
                                cout<<endl<<" Hay empate, pero "<<jugador[1]<<" obtuvo el dado con MAYOR valor: ["<<acuA<<"]";
                                msj_inicia(jugador[1],1);
                                repetir=false;
                                jugadorActual=1;
                            }
                            else
                            {
                                cout<<endl<<"Hay empate, se deben volver a tirar los dados"<<endl;
                                repetir=true;
                                puntos[0][0]=0;
                                puntos[1][0]=0;
                            }
                        }
                        else
                        {
                            msj_inicia(jugador[1],1);
                            repetir=false;
                            jugadorActual=1;
                        }
                        while(true)
                        {
                            cout<<endl<<"¿Continuamos? (S/N) -> ";
                            cin>>continuar;
                            if(toupper(continuar) == 'S')
                            {
                                img_menu(5,0,false);
                                break;
                            }
                            else if(toupper(continuar) == 'N')
                            {
                                char s;
                                img_menu(3,0,false);
                                cout<<endl<<"¿Desea Salir de Juego? (S/N) ->";
                                cin>>s;
                                if (toupper(s) == 'S')
                                {
                                    repetir=false; //Para romper el While
                                    salir=true;
                                    finalizar=true;
                                    break;
                                }
                                else if (toupper(s) == 'N')
                                {
                                    break;
                                }
                            }
                        }
                    }
                }
                break;
            case 2:
                estadisticas(nom_estadi,punt_estadi);
                break;
            case 3:
                // Menú Créditos o Cerditos
                inicio=1;
                cerdi_integrantes();
                break;
            default:
                cout<<endl<<" Opción Incorrecta, vuelva a intentarlo...";
                inicio=1;
                Sleep(3000);
            }
        }

        //Asignar valor 1 en referencia a la ronda 1 (para los string)
        puntos[0][1]=1;
        puntos[1][1]=1;


        //REFERENCIA 2 - WHILE SECUNDARIO
        while(salir==false && jugador[0] != "" )
        {
            //cout<<endl<<"Valor de bonus bonus[0][0]"<<bonus[0][0]<<" y bonus[1][0]: "<<bonus[1][0]<<endl;
            bool caso_siguiente=true;
            int contar_as=0;
            opcion=true;
            string flecha="               \\\\\n                \\\\=> ";
            // Si se hunde en el barro se juega con 3 dados
            if(modificar_dados)
            {
                if(ya_paso==false)
                {
                    dados=3;
                    tres_dados();
                    img_menu(20,0,true);
                    ya_paso=true;
                }
            }
            while(opcion)
            {

                if (bloquear1)
                {
                    act_bonus=true;
                    cout<<endl<<"                    +--------------+"<<endl;
                    cout<<"                    |              |"<<endl;
                    cout<<"                    |   RONDA #"<<puntos[jugadorActual][1]<<"   |"<<endl;
                    cout<<"                    |              |"<<endl;
                    cout<<"                    +--------------+"<<endl;
                    if (jugadorActual==0)
                    {
                        rlutil::setColor(rlutil::LIGHTCYAN);
                    }
                    else
                    {
                        rlutil::setColor(rlutil::LIGHTMAGENTA);
                    }
                    cout<<endl<<"                                                                             ["<<jugador[jugadorActual]<<"]";
                    rlutil::setColor(rlutil::WHITE);
                    acu_trufas=0;
                    if (jugadorActual==0)
                    {
                        rlutil::setColor(rlutil::LIGHTCYAN);
                    }
                    else
                    {
                        rlutil::setColor(rlutil::LIGHTMAGENTA);
                    }
                    cout<<endl<<endl<<" -> "<<jugador[jugadorActual];
                    rlutil::setColor(rlutil::WHITE);
                    cout<<", comenzamos con la Ronda #"<<puntos[jugadorActual][1]<<"! presiona (L) y [ENTER] para lanzar los dados: -> ";
                }
                else
                {
                    if (jugadorActual==0)
                    {
                        rlutil::setColor(rlutil::LIGHTCYAN);
                    }
                    else
                    {
                        rlutil::setColor(rlutil::LIGHTMAGENTA);
                    }
                    cout<<endl<<"                                                                             ["<<jugador[jugadorActual]<<"]";
                    cout<<endl<<endl<<" -> "<<jugador[jugadorActual];
                    rlutil::setColor(rlutil::WHITE);
                    cout<<", presiona (T) y [ENTER] para terminar la ronda o (L) para lanzar los dados: -> ";
                    bloquear2=false;
                }
                rlutil::setColor(rlutil::WHITE);
                cin>>lanzar;
                switch(lanzar)
                {
                case 'L':
                case 'l':
                    // Opción PRINCIPAL de lanzaiento de dados
                    bloquear1=false;
                    lanzam++; //Contador de lanzamientos
                    // Cantidad de dados
                    tirar_dados(dados,da2,true,puntos,anima);
                    //activar +3PDV por lanzamiento
                    act_ronda=true;
                    for (i=0; i<cant_da2; i++)
                    {
                        if(da2[i]>0)
                        {
                            puntos[jugadorActual][2]+=da2[i]; //Trufas acumuladas!!
                        }
                    }
                    matriz_dados(da2,cant_da2,jugador,jugadorActual,dados,puntos);//Dibujar dados



                    //REFERENCIA 3 - ANALIZA_RESULTADOS
                    //caso_1(da2,cant_da2);//[vector resultados],[cantidad de dados]
                    if(caso_1(da2,dados)==true)
                    {
                        //Caso_1: Caras son distintas entre sí y NO hay un as
                        puntos[jugadorActual][3]=puntos[jugadorActual][3]+(da2[0]+da2[1]+da2[2]);
                        acu_trufas=acu_trufas+(da2[0]+da2[1]+da2[2]);
                        cout<<flecha;
                        msj="[CASO 1]: Las CARAS son distintas y NINGUNA es un AS !!! Se SUMAN ["+to_string(da2[0]+da2[1]+da2[2])+"] trufas.";
                        color=10;
                        rlutil::setColor(color);
                        cout<<msj<<endl;
                        rlutil::setColor(rlutil::WHITE);
                    }
                    else
                    {
                        //Caso_2: Oink
                        if(caso_2(da2,dados))
                        {
                            Sleep(1000);
                            txt_oink();
                            img_menu(4,0,true);
                            matriz_dados(da2,cant_da2,jugador,jugadorActual,dados,puntos);//Dibujar dados
                            puntos[jugadorActual][4]++;//Sumar oinks
                            puntos[jugadorActual][3]=puntos[jugadorActual][3]+((da2[0]+da2[1]+da2[2])*2);
                            acu_trufas=acu_trufas+((da2[0]+da2[1]+da2[2])*2);
                            cout<<flecha;
                            msj="[CASO 2]: Oink !!! Se SUMAN ["+to_string(((da2[0]+da2[1]+da2[2])*2))+"] trufas.";
                            color=10;
                            rlutil::setColor(color);
                            cout<<msj<<endl;
                            rlutil::setColor(rlutil::WHITE);
                        }
                        //Caso_3: caras distintas pero hay un as
                        if(caso_3(da2,dados))
                        {
                            cout<<flecha;
                            msj="[CASO 3]: Las CARAS son distintas pero hay '1' AS !...  Pierde ["+to_string(acu_trufas)+"] trufas acumulandas en la Ronda actual y cede el turno...";
                            color=12;
                            rlutil::setColor(color);
                            cout<<msj<<endl;
                            rlutil::setColor(rlutil::WHITE);
                            datos_ronda(jugadorActual,lanzam,jugador,puntos,acu_trufas);
                            tiene_as(puntos,jugador,da2,cant_da2,msj,jugadorActual,lanzam,acu_trufas,nom_estadi,punt_estadi,dados,color,act_ronda,bonus);
                            puntos[jugadorActual][3]=puntos[jugadorActual][3]-acu_trufas;
                            acu_trufas=0;
                            // Termina la ronda actual
                            terminar_ronda(bloquear1,bloquear2,puntos,jugadorActual,lanzam,salir,opcion,jugador,nom_estadi,punt_estadi,act_ronda,bonus);
                        }
                        //Caso_4 y Caso_5
                        if(dados ==2)
                        {
                            contar_as=caso_4_y_5(da2,dados);
                            //Caso_4: Si dos de las caras son iguales entre sí y son ases
                            if(contar_as==2)
                            {
                                caso_siguiente=false;
                                Sleep(1000);
                                hundido();
                                img_cerdo(0,2);
                                img_menu(8,0,true);
                                matriz_dados(da2,cant_da2,jugador,jugadorActual,dados,puntos);//Dibujar dados
                                cout<<flecha;
                                msj="[CASO 4]: '2' de las CARAS son iguales entre sí y son ASES !!! Pierde ["+to_string(puntos[jugadorActual][3])+"] trufas acumuladas en TODAS las Rondas. Además cede el turno...";
                                color=12;
                                rlutil::setColor(color);
                                cout<<msj<<endl;
                                rlutil::setColor(rlutil::WHITE);
                                datos_ronda(jugadorActual,lanzam,jugador,puntos,acu_trufas);
                                tiene_as(puntos,jugador,da2,cant_da2,msj,jugadorActual,lanzam,acu_trufas,nom_estadi,punt_estadi,dados,color,act_ronda,bonus);
                                puntos[jugadorActual][3]=0; //se quitan todas las trufas acumuladas
                                // Termina la ronda actual
                                terminar_ronda(bloquear1,bloquear2,puntos,jugadorActual,lanzam,salir,opcion,jugador,nom_estadi,punt_estadi,act_ronda,bonus);
                                modificar_dados=true; //Si se hunde se comienza a jugar con 3 dados
                            }
                        }
                        //Caso_5: se está lanzando con 3 dados y 3 de las caras son ases
                        else if (dados ==3)
                        {
                            contar_as=caso_4_y_5(da2,dados);
                            if(contar_as == 3)
                            {
                                caso_siguiente=false;
                                Sleep(1000);
                                hundido_x2();
                                img_cerdo(0,2);
                                img_menu(8,0,true);
                                matriz_dados(da2,cant_da2,jugador,jugadorActual,dados,puntos);//Dibujar dados
                                cout<<flecha;
                                msj="[CASO 5_(***)]: '3' ASES!!! Pierde ["+to_string(puntos[jugadorActual][3])+"] trufas acumuladas en TODAS las Rondas.Sus PUNTOS se SUMAN al otro Cerdo y además cede el turno ;(";
                                color=12;
                                rlutil::setColor(color);
                                cout<<msj<<endl;
                                rlutil::setColor(rlutil::WHITE);
                                datos_ronda(jugadorActual,lanzam,jugador,puntos,acu_trufas);
                                tiene_as(puntos,jugador,da2,cant_da2,msj,jugadorActual,lanzam,acu_trufas,nom_estadi,punt_estadi,dados,color,act_ronda,bonus);
                                if(jugadorActual==0)
                                {
                                    puntos[1][3]=puntos[1][3]+puntos[jugadorActual][3];
                                }
                                else if(jugadorActual==1)
                                {
                                    puntos[0][3]=puntos[0][3]+puntos[jugadorActual][3];
                                }
                                puntos[jugadorActual][3]=0;
                                // Termina la ronda actual
                                terminar_ronda(bloquear1,bloquear2,puntos,jugadorActual,lanzam,salir,opcion,jugador,nom_estadi,punt_estadi,act_ronda,bonus);
                                modificar_dados=true; //Si se hunde se comienza a jugar con 3 dados
                            }
                            else if(contar_as==2)
                            {
                                Sleep(1000);
                                hundido();
                                img_cerdo(0,2);
                                img_menu(8,0,true);
                                matriz_dados(da2,cant_da2,jugador,jugadorActual,dados,puntos);//Dibujar dados
                                cout<<flecha;
                                msj="[CASO 5_(**)]: '2' de las CARAS son ASES !!! Pierde ["+to_string(puntos[jugadorActual][3])+"] trufas acumuladas en TODAS las Rondas. Además cede el turno...";
                                color=12;
                                rlutil::setColor(color);
                                cout<<msj<<endl;
                                rlutil::setColor(rlutil::WHITE);
                                datos_ronda(jugadorActual,lanzam,jugador,puntos,acu_trufas);
                                tiene_as(puntos,jugador,da2,cant_da2,msj,jugadorActual,lanzam,acu_trufas,nom_estadi,punt_estadi,dados,color,act_ronda,bonus);
                                puntos[jugadorActual][3]=0; //se quitan todas las trufas acumuladas
                                // Termina la ronda actual
                                terminar_ronda(bloquear1,bloquear2,puntos,jugadorActual,lanzam,salir,opcion,jugador,nom_estadi,punt_estadi,act_ronda,bonus);
                                modificar_dados=true; //Si se hunde se comienza a jugar con 3 dados
                            }
                        }
                    }
                    //Caso 6 Se lanza con 3 dados y hay 2 caras iguales y una distinta (siempre que no sean ases)
                    if(dados==3)
                    {
                        if(caso_6(da2,dados)&&caso_siguiente)
                        {
                            cout<<flecha;
                            msj="[CASO 6]: Hay '2' CARAS iguales y '1' distinta (No hay ASES)!!! Se SUMAN ["+to_string(da2[0]+da2[1]+da2[2])+"] trufas.";
                            color=10;
                            rlutil::setColor(color);
                            cout<<msj<<endl;
                            rlutil::setColor(rlutil::WHITE);
                            puntos[jugadorActual][3]=puntos[jugadorActual][3]+da2[0]+da2[1]+da2[2];
                            acu_trufas=acu_trufas+da2[0]+da2[1]+da2[2];
                        }
                    }
                    //Caso_7:  Se lanza con 3 dados y hay 2 caras iguales y un as
                    if(caso_7(da2,dados)&& caso_siguiente)
                    {
                        cout<<flecha;
                        msj="[CASO 7]: Hay '2' CARAS IGUALES y '1' AS !!!  Pierde ["+to_string(acu_trufas)+"] trufas acumulandas en la Ronda actual y cede el turno...";
                        color=12;
                        rlutil::setColor(color);
                        cout<<msj<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        datos_ronda(jugadorActual,lanzam,jugador,puntos,acu_trufas);
                        tiene_as(puntos,jugador,da2,cant_da2,msj,jugadorActual,lanzam,acu_trufas,nom_estadi,punt_estadi,dados,color,act_ronda,bonus);
                        puntos[jugadorActual][3]=puntos[jugadorActual][3]-acu_trufas;
                        acu_trufas=0;
                        // Termina la ronda actual
                        terminar_ronda(bloquear1,bloquear2,puntos,jugadorActual,lanzam,salir,opcion,jugador,nom_estadi,punt_estadi,act_ronda,bonus);
                    }



                    //BONUS



                                        //caso_8(BONUS)
                    if (act_bonus){

                            if(caso_8(da2)==true )
                    {
                        if (dados==2){
                                bonus[jugadorActual][1]=(bonus[jugadorActual][1])+5;

                        }else if(dados==3){
                            bonus[jugadorActual][1]=(bonus[jugadorActual][1])+7;
                        }
                        cout<<flecha;
                        msj="[CASO 8]: BONUS, !!!! EL Jugador obtuvo numeros PRIMOS !!!";
                        color=10;
                        rlutil::setColor(color);
                        cout<<msj<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        act_bonus=false;
                    }

                    }


                    // FIN - ANALIZA_RESULTADOS

                    if(bloquear1==false)
                    {
                        datos_ronda(jugadorActual,lanzam,jugador,puntos,acu_trufas);
                    }
                    cout<<endl;
                    // Si ambos cerdos superen (cada uno) las 50 trufas se juega con 3 dados
                    if(puntos[0][3] >= 50 && puntos[1][3] >= 50)
                    {
                        if(ya_paso==false)
                        {
                            Sleep(1000);
                            dados=3;
                            supera_50_T();
                            tres_dados();
                            img_menu(20,0,true);
                            ya_paso=true;
                            matriz_dados(da2,cant_da2,jugador,jugadorActual,dados,puntos);//Dibujar dados
                            cout<<flecha;
                            rlutil::setColor(color);
                            cout<<msj<<endl;
                            rlutil::setColor(rlutil::WHITE);
                            datos_ronda(jugadorActual,lanzam,jugador,puntos,acu_trufas);
                        }
                    }
                    break;

                case 'T':
                case 't':
                    if(bloquear2 ==false)
                    {
                        terminar_ronda(bloquear1,bloquear2,puntos,jugadorActual,lanzam,salir,opcion,jugador,nom_estadi,punt_estadi,act_ronda,bonus);
                    }
                    break;
                case '2':
                    //estadisticas();
                    calcular_PDV(puntos,jugador,nom_estadi,punt_estadi,lanzam,jugadorActual,act_ronda,bonus);
                    img_menu(3,0,true);
                    cout<<endl;
                    if(puntos[jugadorActual][2]>0 && bloquear1==false)
                    {
                        matriz_dados(da2,cant_da2,jugador,jugadorActual,dados,puntos);//Dibujar dados
                        cout<<flecha;
                        rlutil::setColor(color);
                        cout<<msj<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        datos_ronda(jugadorActual,lanzam,jugador,puntos,acu_trufas);
                    }
                    cout<<endl;
                    opcion=false; //salir de while
                    break;
                case '3':
                    cerdi_integrantes();
                    img_menu(3,0,true);
                    cout<<endl;
                    if(puntos[jugadorActual][2]>0 && bloquear1==false)
                    {
                        matriz_dados(da2,cant_da2,jugador,jugadorActual,dados,puntos);//Dibujar dados
                        cout<<flecha;
                        rlutil::setColor(color);
                        cout<<msj<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        datos_ronda(jugadorActual,lanzam,jugador,puntos,acu_trufas);
                    }
                    cout<<endl;
                    opcion=true;
                    break;
                case '0':
                    char s;
                    while(true)
                    {
                        cout<<endl<<" ¿Seguro que desea Finalizar el Juego? (S/N) -> ";
                        cin>>s;
                        if(toupper(s)=='S')
                        {
                            salir=true;
                            opcion=false;
                            finalizar=true;
                            break;
                        }
                        else if(toupper(s)=='N')
                        {
                            img_menu(3,0,true);
                            cout<<endl;
                            if(puntos[jugadorActual][2]>0 && bloquear1==false)
                            {
                                matriz_dados(da2,cant_da2,jugador,jugadorActual,dados,puntos);//Dibujar dados
                                cout<<flecha;
                                rlutil::setColor(color);
                                cout<<msj<<endl;
                                rlutil::setColor(rlutil::WHITE);
                                datos_ronda(jugadorActual,lanzam,jugador,puntos,acu_trufas);
                            }
                            cout<<endl;
                            break;
                        }
                        else
                        {
                            cout<<endl<<" Opción Incorrecta, vuelva a intentarlo... "<<endl;
                        }
                    }
                    break;
                default:
                    cout<<endl<<"Opción Incorrecta, vuelva a intentarlo...";
                    Sleep(3000);
                    img_menu(5,0,true);
                    cout<<endl;
                    if(puntos[jugadorActual][2]>0 && bloquear1==false)
                    {
                        matriz_dados(da2,cant_da2,jugador,jugadorActual,dados,puntos);//Dibujar dados
                        cout<<flecha;
                        rlutil::setColor(color);
                        cout<<msj<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        datos_ronda(jugadorActual,lanzam,jugador,puntos,acu_trufas);
                    }
                    cout<<endl;
                }
            }
        }
    }
    // Finalizando main...
    img_menu(2,1,true);
    cout<<endl<<"                   FINALIZÓ EL JUEGO"<<endl;
    return 0;
}




//FUNCION JUGADORES
void jugadores(string jugador[], int anima)
{
    anima=3;
    img_menu(anima,1,false);
    cin.ignore();
    for (int i=0; i<2; i++)
    {
        cout<<endl<<"  Ingrese el Nombre del ";
        if(i==0)
        {
            rlutil::setColor(rlutil::LIGHTCYAN);
        }
        else
        {
            rlutil::setColor(rlutil::LIGHTMAGENTA);
        }
        cout<<"JUGADOR "<<i+1;
        rlutil::setColor(rlutil::WHITE);
        cout<<": ";
        getline(cin,jugador[i]);
        //cin>>jugador[i]; // Usar getline ??
        transform(jugador[i].begin(), jugador[i].end(), jugador[i].begin(), ::toupper);//Funcion para pasar String a mayúsculas
        if(jugador[i].size() > 20 || jugador[i].size() < 3 || jugador[0] == jugador[1] || jugador[i] == "")
        {
            if(jugador[i] == "" )
            {
                switch(i)
                {
                case 0:
                    jugador[0]=jugador[0]+"JUGADOR_UNO";
                    cout<<endl<<"  El nombre no puede estar vacío, su designacion será: ";
                    rlutil::setColor(rlutil::LIGHTCYAN);
                    cout<<"[JUGADOR_UNO]"<<endl;
                    rlutil::setColor(rlutil::WHITE);
                    Sleep(1000);
                    break;
                case 1:
                    jugador[1]=jugador[1]+"JUGADOR_DOS";
                    cout<<endl<<"  El nombre no puede estar vacío, su designacion será: ";
                    rlutil::setColor(rlutil::LIGHTMAGENTA);
                    cout<<"[JUGADOR_DOS]"<<endl;
                    rlutil::setColor(rlutil::WHITE);
                    Sleep(2500);
                    break;
                }
            }
            if(jugador[0] == jugador[1] && jugador[0].size() < 16 )
            {
                jugador[0]=jugador[0]+"_UNO";
                jugador[1]=jugador[1]+"_DOS";
            }
            if(jugador[i].size()>20)
            {
                jugador[i] = jugador[i].substr(0, 19);
            }
            if(jugador[i].size() < 3 || jugador[0] == jugador[1])
            {
                cout<<endl<<"El nombre no puede repetirse y debe tener entre (3) y (20) carácteres. "<<endl;
                //cout<<endl<<"Longitud jugador[i]LENGTH"<<jugador[i].length()<<endl;
                jugador[i].clear();
                i=i-1;
                Sleep(3000);
                anima=3;
                img_menu(anima,1,false);
            }
        }
    }
}




//FUNCIÓN DATOS DE LA RONDA
void datos_ronda(int player,int lanzam,string jugador[],int puntos[][6],int trufas)
{
    string nom,ron,lan,truf,j1_truf,j2_truf;
    int l;
    nom=calcular_caracteres(jugador[player],34,"_");
    ron=calcular_caracteres("RONDA #"+to_string(puntos[player][1]),34," ");
    l=lanzam-1;
    if(l<0)
    {
        l=0;
    }
    lan=calcular_caracteres("LANZAMIENTOS ANTERORES: "+to_string(l),34," "); //resto uno al lanzam actual
    truf=calcular_caracteres("TRUFAS DE LA RONDA: "+to_string(trufas),34," ");
    j1_truf=calcular_caracteres(jugador[0]+": "+to_string(puntos[0][3])+" trufas acumuladas",43," ");
    j2_truf=calcular_caracteres(jugador[1]+": "+to_string(puntos[1][3])+" trufas acumuladas",43," ");
    if(lanzam>0)
    {
        cout<<"                 \\";
        cout<<endl<<"                  \\=> LANZAMIENTO #"<<lanzam<<endl<<endl;
    }
    if(player==0)
    {
        cout<<"                    +----------------------------------+"<<"     __+-------------------------------------------+"<<endl;
        cout<<"                    |";
        rlutil::setColor(rlutil::LIGHTCYAN);
        cout<<nom;
        rlutil::setColor(rlutil::WHITE);
        cout<<"|"<<"    /  |";
        rlutil::setColor(rlutil::LIGHTCYAN);
        cout<<j1_truf;
        rlutil::setColor(rlutil::WHITE);
        cout<<"|"<<endl;
        cout<<"                    |"<<ron<<"|"<<"   /   +-------------------------------------------+"<<endl;
        cout<<"                    |"<<truf<<"|"<<"__/    +-------------------------------------------+"<<endl;
        cout<<"                    |"<<lan<<"|"<<"       |";
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<j2_truf;
        rlutil::setColor(rlutil::WHITE);
        cout<<"|"<<endl;
        cout<<"                    +----------------------------------+"<<"       +-------------------------------------------+"<<endl;
    }
    else
    {
        cout<<"                    +----------------------------------+"<<"       +-------------------------------------------+"<<endl;
        cout<<"                    |";
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<nom;
        rlutil::setColor(rlutil::WHITE);
        cout<<"|"<<"__     |";
        rlutil::setColor(rlutil::LIGHTCYAN);
        cout<<j1_truf;
        rlutil::setColor(rlutil::WHITE);
        cout<<"|"<<endl;
        cout<<"                    |"<<ron<<"|"<<"  \\    +-------------------------------------------+"<<endl;
        cout<<"                    |"<<truf<<"|"<<"   \\   +-------------------------------------------+"<<endl;
        cout<<"                    |"<<lan<<"|"<<"    \\__|";
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<j2_truf;
        rlutil::setColor(rlutil::WHITE);
        cout<<"|"<<endl;
        cout<<"                    +----------------------------------+"<<"       +-------------------------------------------+"<<endl;
    }
}




// FUNCION Random p/números
void tirar_dados(int cant, int da2[],bool cls, int puntos[][6], int &anima)
{
    if(cls)
    {
        anima++;
        if(anima > 7)
        {
            anima=0;
        }
        img_menu(anima,0,true);
    }
    srand(time(NULL));
    int i, numero;
    for(i=0; i<cant; i++)
    {
        numero = (rand() % 6)+1;
        da2[i]=numero;
    }
}




//FUNCION Dibujar Dados
void matriz_dados(int da2[],int cant_da2,string jugador[],int jugadorActual,int dados,int puntos[][6])
{
    string jugador_ini;
    int fila_dado=5,colum_dado=29,i,j,k,fila,columna,refe=0,vueltas=0,vueltas_dados=0;
    int matriz_caras[4][28]= {}; //[cantidad de caras][filas][columnas]
    bool marcar=true;
    if(puntos[0][1]>0 || puntos[1][1]>0)
    {
        if (jugadorActual==0)
        {
            rlutil::setColor(rlutil::LIGHTCYAN);
        }
        else
        {
            rlutil::setColor(rlutil::LIGHTMAGENTA);
        }
        jugador_ini=calcular_caracteres("TURNO de: ["+jugador[jugadorActual]+"]",32," ");
        cout<<"                                         **********************************"<<endl;
        cout<<"                                         *";
        cout<<jugador_ini;
        cout<<"*"<<endl;
        cout<<"                                         **********************************"<<endl<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<endl<<"                                              # Se juega con "<<dados<<" dados #"<<endl;
    }
    if(jugadorActual==0)
    {
        rlutil::setColor(rlutil::LIGHTCYAN);
    }
    else
    {
        rlutil::setColor(rlutil::LIGHTMAGENTA);
    }
    for (i=0; i<cant_da2; i++)
    {
        if(da2[i]>0)
        {
            cout << "    ["<<da2[i]<<"]  ";
        }
    }
    cout<<endl;
    for(i=0; i<3; i++)
    {
        if(da2[i]>0)
        {
            vueltas++;
        }
    }
    for(i=0; i<vueltas; i++)
    {
        switch(da2[i])
        {
        case 1:
            matriz_caras[2][4+(i*10)]=1;
            break;
        case 2:
            matriz_caras[1][1+(i*10)]=1;
            matriz_caras[3][7+(i*10)]=1;
            break;
        case 3:
            matriz_caras[1][1+(i*10)]=1;
            matriz_caras[2][4+(i*10)]=1;
            matriz_caras[3][7+(i*10)]=1;
            break;
        case 4:
            matriz_caras[1][1+(i*10)]=1;
            matriz_caras[1][7+(i*10)]=1;
            matriz_caras[3][1+(i*10)]=1;
            matriz_caras[3][7+(i*10)]=1;
            break;
        case 5:
            matriz_caras[1][1+(i*10)]=1;
            matriz_caras[1][7+(i*10)]=1;
            matriz_caras[2][4+(i*10)]=1;
            matriz_caras[3][1+(i*10)]=1;
            matriz_caras[3][7+(i*10)]=1;
            break;
        case 6:
            matriz_caras[1][1+(i*10)]=1;
            matriz_caras[1][7+(i*10)]=1;
            matriz_caras[2][1+(i*10)]=1;
            matriz_caras[2][7+(i*10)]=1;
            matriz_caras[3][1+(i*10)]=1;
            matriz_caras[3][7+(i*10)]=1;
            break;
        default:
            cout << " Error";
        }
    }
    for(i=0; i<fila_dado; i++)
    {
        for(j=0; j<colum_dado; j++)
        {
            if (i==0 || i== fila_dado -1 )
            {
                if ((i==0 && j ==0)||(i==4 && j ==0)||(i==0 && j == refe)||(i==4 && j == refe))
                {
                    switch(refe)
                    {
                    case 0:
                        refe=8;
                        break;
                    case 8:
                        refe +=2;
                        vueltas_dados=0;
                        break;
                    case 10:
                        refe +=8;
                        vueltas_dados=1;
                        break;
                    case 18:
                        refe +=2;
                        vueltas_dados=2;
                        break;
                    case 20:
                        refe +=8;
                        break;
                    case 28:
                        refe =0;
                        vueltas_dados=3;
                        break;
                    }
                    if(vueltas_dados == vueltas)
                    {
                        if (vueltas_dados >=2)
                        {
                            cout<<"+";
                        }
                        refe =0;
                        vueltas_dados=0;
                        break;
                    }
                    else
                    {
                        cout<<"+";
                    }
                }
                else if ((j ==9)||(j ==19))
                {
                    cout<<" ";
                }
                else
                {
                    cout<<"-";
                }
            }
            else if(j == 0 || j == 8|| j == 10|| j == 18|| j == 20|| j == 28)
            {
                if(j==10)
                {
                    vueltas_dados=1;
                }
                else if(j==20)
                {
                    vueltas_dados=2;
                }
                if(vueltas_dados == vueltas)
                {
                    refe =0;
                    vueltas_dados=0;
                    break;
                }
                else
                {
                    cout<<"|";
                }
            }
            else
            {
                if(matriz_caras[i][j]==1)
                {
                    cout<<"O";
                    marcar=false;
                }
                else
                {
                    marcar=true;
                }
                if (marcar)
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    rlutil::setColor(rlutil::WHITE);
}




// Función Terminar Ronda
void terminar_ronda(bool &bloquear1,bool &bloquear2,int puntos[][6],int &jugadorActual,int &lanzam,bool &salir,bool &opcion, string jugador[],string nom_estadi[],int punt_estadi[],bool &act_ronda,int bonus[][2])
{
    string oink;
    bool fin=false;
    bloquear1=true;
    bloquear2=true;
    puntos[jugadorActual][1]++;//Total de rondas que va jugando el Jugador/a
    if(jugadorActual==0)
    {
        //Antes de reinicir las variables se guarda la cantidad de lanzamientos
        if(puntos[jugadorActual][5] < lanzam)
        {
            puntos[jugadorActual][5]=lanzam;
        }
        jugadorActual=1; //Cambia de Jugador
        lanzam=0;//reiniciar la variable lanzaiento
    }
    else
    {
        //Antes de reinicir las variables se guarda la cantidad de lanzamientos
        if(puntos[jugadorActual][5] < lanzam)
        {
            puntos[jugadorActual][5]=lanzam;
        }
        jugadorActual=0; //Cambia de Jugador
        lanzam=0;
    }
    if(puntos[0][1] > 5 && puntos[1][1] > 5)
    {
        system("cls");
        cout<<endl<<endl<<endl<<"                   SE COMPLETARON 5 RONDAS, FIN DEL JUEGO..."<<endl;
        Sleep(1000);
        cout<<endl<<"       Resultados en: 5";
        Sleep(1000);
        for (int i=4; i>=1; i--)
        {
            cout<<" ";
            for(int j=0; j<3; j++)
            {
                cout<<".";
                Sleep(200);
            }
            cout<<" ";
            cout<<i;
            Sleep(1000);
        }
        cout<<endl;
        calcular_PDV(puntos,jugador,nom_estadi,punt_estadi,lanzam,jugadorActual,act_ronda,bonus);
        cin.ignore();
        while(fin==false)
        {
            cout<<endl<<endl<<" Ingrese 'Oink' para continuar... -> ";
            getline(cin,oink);
            transform(oink.begin(), oink.end(), oink.begin(), ::toupper);//Funcion para mayusculas
            salir=true;
            if(oink == "OINK")
            {
                fin=true;
            }
        }
    }
    else
    {
        if(puntos[0][1] == 5 && puntos[1][1] == 5)
        {
            ultima_ronda();
        }
        img_menu(20,0,true);
    }
    opcion=false;//Salir de while
}




//FUNCION FINALIZAR RONDA CON ASES
void tiene_as(int puntos[][6],string jugador[],int da2[],int cant_da2,string msj,int jugadorActual,int &lanzam,int &acu_trufas,string nom_estadi[],int punt_estadi[],int dados,int &color,bool &act_ronda,int bonus[][2])
{
    bool fin=false;
    char continuar;
    string flecha="               \\\\\n                \\\\=> ";
    while(fin==false)
    {
        if (jugadorActual==0)
        {
            rlutil::setColor(rlutil::LIGHTCYAN);
        }
        else
        {
            rlutil::setColor(rlutil::LIGHTMAGENTA);
        }
        cout<<endl<<endl<<endl<<"                                                                                                  ["<<jugador[jugadorActual]<<"]"<<endl;
        rlutil::setColor(rlutil::WHITE);
        rlutil::setColor(rlutil::LIGHTRED);
        cout<<endl<<"   - CONTROLE ";
        rlutil::setColor(rlutil::WHITE);
        cout<<"sus ";
        rlutil::setColor(rlutil::LIGHTRED);
        cout<<"PUNTOS - ";
        rlutil::setColor(rlutil::WHITE);
        cout<<"antes de que se apliquen los cambios. Presione una tecla y [ENTER] para continuar... -> ";
        cin>>continuar;
        switch(continuar)
        {
        case '2':
            calcular_PDV(puntos,jugador,nom_estadi,punt_estadi,lanzam,jugadorActual,act_ronda,bonus);
            img_menu(8,0,true);
            matriz_dados(da2,cant_da2,jugador,jugadorActual,dados,puntos);
            cout<<flecha;
            color=12;
            rlutil::setColor(color);
            cout<<msj<<endl;
            rlutil::setColor(rlutil::WHITE);
            datos_ronda(jugadorActual,lanzam,jugador,puntos,acu_trufas);
            break;
        case '3':
            cerdi_integrantes();
            img_menu(8,0,true);
            matriz_dados(da2,cant_da2,jugador,jugadorActual,dados,puntos);
            cout<<flecha;
            rlutil::setColor(color);
            cout<<msj<<endl;
            rlutil::setColor(rlutil::WHITE);
            datos_ronda(jugadorActual,lanzam,jugador,puntos,acu_trufas);
            break;
        default:
            fin=true;
        }
    }
}




// REFERENCIA 4 - FUNCIÓN CALCULAR PUNTOS DE VICTORIA
//puntos[cant_jugadores],[[0]puntos_para iniciar],[[1]Rondas Jugadas],[[2]puntos_x_ronda]],[[3]trufas],[[4]oinks],[[5]cerdo_codicioso]
void calcular_PDV(int puntos[][6],string jugador[],string nom_estadi[],int punt_estadi[],int lanzam,int jugadorActual,bool &act_ronda,int bonus[][2])
{
    img_menu(20,1,true);
    int i,j,k,pdv[2][5]= {}; //pdv[2Jugadores],[[0]5Pdv-Mas_trufas],[[1]1Pdv_cada 50 trufas],[[2]2Pdv*Cant de Oinks],[[3]3Pdv_cerdo_codicioso],[[4]Total]
    string jugador_1,jugador_2,nom;
    string mas_trufas[2],cada_50[2],can_oinks[2],codicioso[2],total[2],ganador,txt_bonus[2];
    char e;
    jugador_1=calcular_caracteres(jugador[0],33," ");
    jugador_2=calcular_caracteres(jugador[1],33," ");
    //+5 PDV Jugador con mas trufas en Total o ambos en caso de empate
    if(puntos[0][3]>puntos[1][3])
    {
        pdv[0][0]=5;
    }
    else if(puntos[0][3]==puntos[1][3] && puntos[0][3]+puntos[1][3]>0)
    {
        pdv[0][0]=5;
        pdv[1][0]=5;
    }
    else if(puntos[1][3]>puntos[0][3])
    {
        pdv[1][0]=5;
    }
    mas_trufas[0]=calcular_caracteres(to_string(pdv[0][0])+" PDV ("+to_string(puntos[0][3])+" trufas)",33," ");
    mas_trufas[1]=calcular_caracteres(to_string(pdv[1][0])+" PDV ("+to_string(puntos[1][3])+" trufas)",33," ");
    //+1 PDV Cada 50 Trufas acumuladas
    //Tomar solo la parte entera, sin redondeo
    pdv[0][1]=puntos[0][3]/50; //Jugador 1
    pdv[1][1]=puntos[1][3]/50; //Jugador 2
    cada_50[0]=calcular_caracteres(to_string(pdv[0][1])+" PDV ("+to_string(pdv[0][1]*50)+" trufas)",33," ");
    cada_50[1]=calcular_caracteres(to_string(pdv[1][1])+" PDV ("+to_string(pdv[1][1]*50)+" trufas)",33," ");
    //+2 PDV * cada oink
    pdv[0][2]=2*puntos[0][4]; //Jugador 1
    pdv[1][2]=2*puntos[1][4]; //Jugador 2
    can_oinks[0]=calcular_caracteres(to_string(pdv[0][2])+" PDV ("+to_string(puntos[0][4])+" Oinks)",33," ");
    can_oinks[1]=calcular_caracteres(to_string(pdv[1][2])+" PDV ("+to_string(puntos[1][4])+" Oinks)",33," ");
    //+3 PDV cerdo_codicioso
    //Si es mayor a 5 rondas
    if(puntos[0][1]>5 && puntos[1][1]>5)
    {
        if(puntos[0][5]>puntos[1][5])
        {
            pdv[0][3]=3;
        }
        else if(puntos[0][5]==puntos[1][5]&& puntos[0][5]+puntos[1][5]>0)
        {
            pdv[0][3]=3;
            pdv[1][3]=3;
        }
        else if(puntos[1][5]>puntos[0][5])
        {
            pdv[1][3]=3;
        }
    }
    //Jugador Actual Resultador parcial (Si es menor a 5 rondas)
    int otro_jugador;
    if(jugadorActual == 0)
    {
        otro_jugador=1;
    }
    else
    {
        otro_jugador=0;
    }
    if(puntos[jugadorActual][1]<=5 && puntos[jugadorActual][1]>0 && act_ronda)
    {
        if(puntos[jugadorActual][5]>puntos[otro_jugador][5] || lanzam>puntos[otro_jugador][5])
        {
            pdv[jugadorActual][3]=3;
        }
        else if(puntos[jugadorActual][5]==puntos[otro_jugador][5]&& puntos[jugadorActual][5]+puntos[otro_jugador][5]>0 || lanzam==puntos[otro_jugador][5] && lanzam+puntos[otro_jugador][5]>0)
        {
            pdv[jugadorActual][3]=3;
            pdv[otro_jugador][3]=3;
        }
        else
        {
            pdv[otro_jugador][3]=3;
        }
        //Solo si lanzam es mayor a lo acumulado se lo muestra como resultado parcial
        if(lanzam>puntos[jugadorActual][5])
        {
            codicioso[jugadorActual]=calcular_caracteres(to_string(pdv[jugadorActual][3])+" PDV ("+to_string(lanzam)+" lanzamientos)",33," ");
        }
        else
        {
            codicioso[jugadorActual]=calcular_caracteres(to_string(pdv[jugadorActual][3])+" PDV ("+to_string(puntos[jugadorActual][5])+" lanzamientos)",33," ");
        }
        codicioso[otro_jugador]=calcular_caracteres(to_string(pdv[otro_jugador][3])+" PDV ("+to_string(puntos[otro_jugador][5])+" lanzamientos)",33," ");
    }
    else
    {
        codicioso[jugadorActual]=calcular_caracteres(to_string(pdv[jugadorActual][3])+" PDV ("+to_string(puntos[jugadorActual][5])+" lanzamientos)",33," ");
        codicioso[otro_jugador]=calcular_caracteres(to_string(pdv[otro_jugador][3])+" PDV ("+to_string(puntos[otro_jugador][5])+" lanzamientos)",33," ");
    }

    //Sumar bonus
    //txt_bonus[0]=calcular_caracteres("0 PDV  de BONUS",33," ");
    //txt_bonus[1]=calcular_caracteres("0 PDV  de BONUS",33," ");
    txt_bonus[0]=calcular_caracteres(to_string(bonus[0][1])+" PDV  de BONUS",33," ");
    txt_bonus[1]=calcular_caracteres(to_string(bonus[1][1])+" PDV  de BONUS",33," ");
    //cout<<endl<<"Valor de BONUS"<<bonus[0][0]<<endl;
    //cout<<endl<<"Valor de BONUS"<<bonus[1][0]<<endl;





    //Sumar todo

    pdv[0][4]=pdv[0][0]+pdv[0][1]+pdv[0][2]+pdv[0][3]+bonus[0][1];
    pdv[1][4]=pdv[1][0]+pdv[1][1]+pdv[1][2]+pdv[1][3]+bonus[1][1];
    total[0]=calcular_caracteres(to_string(pdv[0][4])+" PDV",33," ");
    total[1]=calcular_caracteres(to_string(pdv[1][4])+" PDV",33," ");
    cout<<endl;
    cout<<" ___________________________________________________________________________________________ "<<endl;
    cout<<"|                       |                                 |                                 |"<<endl;
    cout<<"|         HITOS         |";
    rlutil::setColor(rlutil::LIGHTCYAN);
    cout<<jugador_1;
    rlutil::setColor(rlutil::WHITE);
    cout<<"|";
    rlutil::setColor(rlutil::LIGHTMAGENTA);
    cout<<jugador_2;
    rlutil::setColor(rlutil::WHITE);
    cout<<"|"<<endl;
    cout<<"|_______________________|_________________________________|_________________________________|"<<endl;
    cout<<"|                       |                                 |                                 |"<<endl;
    cout<<"|  Más TRUFAS en Total  |"<<mas_trufas[0]<<"|"<<mas_trufas[1]<<"|"<<endl;
    cout<<"|                       |                                 |                                 |"<<endl;
    cout<<"|-----------------------+---------------------------------+---------------------------------|"<<endl;
    cout<<"|                       |                                 |                                 |"<<endl;
    cout<<"|    Cada 50 TRUFAS     |"<<cada_50[0]<<"|"<<cada_50[1]<<"|"<<endl;
    cout<<"|                       |                                 |                                 |"<<endl;
    cout<<"|-----------------------+---------------------------------+---------------------------------|"<<endl;
    cout<<"|                       |                                 |                                 |"<<endl;
    cout<<"|        OINKS          |"<<can_oinks[0]<<"|"<<can_oinks[1]<<"|"<<endl;
    cout<<"|                       |                                 |                                 |"<<endl;
    cout<<"|-----------------------+---------------------------------+---------------------------------|"<<endl;
    cout<<"|                       |                                 |                                 |"<<endl;
    cout<<"|    Cerdo Codicioso    |"<<codicioso[0]<<"|"<<codicioso[1]<<"|"<<endl;
    cout<<"|                       |                                 |                                 |"<<endl;
    cout<<"+-----------------------+---------------------------------+---------------------------------+"<<endl;
    cout<<"|                       |                                 |                                 |"<<endl;
    cout<<"|    Humcerdo Primo     |"<<txt_bonus[0]<<"|"<<txt_bonus[1]<<"|"<<endl;
    cout<<"|                       |                                 |                                 |"<<endl;
    cout<<"+-----------------------+---------------------------------+---------------------------------+"<<endl;
    cout<<"| ======= TOTAL ======= |"<<total[0]<<"|"<<total[1]<<"|"<<endl;
    cout<<"+-----------------------+---------------------------------+---------------------------------+"<<endl;
    //GANADOR
    int txt_color=0;
    if(puntos[0][1]>5 &&puntos[1][1]>5)
    {
        if(pdv[0][4]>pdv[1][4])
        {
            ganador="GANÓ "+jugador[0]+" !!! con "+to_string(pdv[0][4])+" puntos de victoria.";
            txt_color=0;
            // Guardar en Estadísticas:
            for(i=0; i<10; i++)
            {
                if(pdv[0][4] >= punt_estadi[i])
                {
                    for(j=9; j>i; j--)
                    {
                        punt_estadi[j]=punt_estadi[j-1];
                        nom_estadi[j]=nom_estadi[j-1];
                    }
                    punt_estadi[i]=pdv[0][4];
                    nom_estadi[i]=jugador[0];
                    break;
                }
            }
        }
        else if(pdv[0][4]==pdv[1][4])
        {
            ganador="                  HAY EMPATE !!!";
            txt_color=2;
            // Guardar en Estadísticas Jugador 1:
            for(i=0; i<10; i++)
            {
                if(pdv[0][4] >= punt_estadi[i])
                {
                    for(j=9; j>i; j--)
                    {
                        punt_estadi[j]=punt_estadi[j-1];
                        nom_estadi[j]=nom_estadi[j-1];
                    }
                    punt_estadi[i]=pdv[0][4];
                    nom_estadi[i]=jugador[0];
                    break;
                }
            }
            // Guardar en Estadísticas Jugador2:
            for(i=0; i<10; i++)
            {
                if(pdv[1][4] >= punt_estadi[i])
                {
                    for(j=9; j>i; j--)
                    {
                        punt_estadi[j]=punt_estadi[j-1];
                        nom_estadi[j]=nom_estadi[j-1];
                    }
                    punt_estadi[i]=pdv[1][4];
                    nom_estadi[i]=jugador[1];
                    break;
                }
            }
        }
        else
        {
            ganador="GANÓ "+jugador[1]+" !!! con "+to_string(pdv[1][4])+" puntos de victoria.";
            txt_color=1;
            // Guardar en Estadísticas:
            for(i=0; i<10; i++)
            {
                if(pdv[1][4] >= punt_estadi[i])
                {
                    for(j=9; j>i; j--)
                    {
                        punt_estadi[j]=punt_estadi[j-1];
                        nom_estadi[j]=nom_estadi[j-1];
                    }
                    punt_estadi[i]=pdv[1][4];
                    nom_estadi[i]=jugador[1];
                    break;
                }
            }
        }
        if(txt_color==0)
        {
            rlutil::setColor(rlutil::LIGHTCYAN);
        }
        else if(txt_color==1)
        {
            rlutil::setColor(rlutil::LIGHTMAGENTA);
        }
        else
        {
            rlutil::setColor(rlutil::LIGHTBLUE);
        }
        cout<<endl<<"                    "<<ganador<<endl;
        rlutil::setColor(rlutil::WHITE);
    }
    else
    {
        if(pdv[0][4]>pdv[1][4])
        {
            ganador=jugador[0]+" tiene más Puntos de Victoria hasta el momento, en TOTAL: "+to_string(pdv[0][4])+" PDV ";
            txt_color=0;
        }
        else if(pdv[0][4]==pdv[1][4] && pdv[0][4] == 0)
        {
            ganador="              IGUAL CANTIDAD DE PDV, AÚN NO SE JUGARON RONDAS";
            txt_color=2;
        }
        else if(pdv[0][4]==pdv[1][4])
        {
            ganador="                Igual cantidad de PDV";
            txt_color=2;
        }
        else
        {
            ganador=jugador[1]+" tiene más Puntos de Victoria hasta el momento, en TOTAL: "+to_string(pdv[1][4])+" PDV ";
            txt_color=1;
        }
        if(txt_color==0)
        {
            rlutil::setColor(rlutil::LIGHTCYAN);
        }
        else if(txt_color==1)
        {
            rlutil::setColor(rlutil::LIGHTMAGENTA);
        }
        else
        {
            rlutil::setColor(rlutil::LIGHTBLUE);
        }
        cout<<endl<<"            "<<ganador<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<endl<<endl<<" Presione cualquier tecla y [ENTER] para volver atrás -> ";
        cin>>e;
    }
}




//Funcion para calcular espacios
string calcular_caracteres(string palabra,int longitud,string caract)
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




void msj_inicia(string nombre,int id_jugador)
{
    string jugador;
    if (id_jugador==0)
    {
        rlutil::setColor(rlutil::LIGHTCYAN);
    }
    else
    {
        rlutil::setColor(rlutil::LIGHTMAGENTA);
    }
    jugador=calcular_caracteres("INICIA ["+nombre+"]",32," ");
    cout<<endl;
    cout<<"               +-----------------------------------------------+               "<<endl;
    cout<<"               |       "<<jugador<<"        |               "<<endl;
    cout<<"               +-----------------------------------------------+               "<<endl;
    rlutil::setColor(rlutil::WHITE);
}




//Funcion PARA PANTALLA COMPLETA
void alt_enter()
{
    keybd_event(VK_MENU,
                0x38,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                KEYEVENTF_KEYUP,
                0);
    keybd_event(VK_MENU,
                0x38,
                KEYEVENTF_KEYUP,
                0);
}

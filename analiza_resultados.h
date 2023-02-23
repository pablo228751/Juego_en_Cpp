#ifndef ANALIZA_RESULTADOS_H_INCLUDED
#define ANALIZA_RESULTADOS_H_INCLUDED
#include <iostream>

using namespace std;

bool caso_1(int da2[],int cant); //Las caras son distintas entre sí y ninguna de ellas es un as
bool caso_2(int da2[],int cant); //Oink: Si las caras son iguales entre sí y no son ases.
bool caso_3(int da2[],int cant); //Las caras son distintas entre sí y hay un as entre ellas.
int caso_4_y_5(int da2[],int cant);// Si dos de las caras son iguales entre sí y son ases
bool caso_6(int da2[],int cant); //Se lanza con 3 dados y hay 2 caras iguales y una distinta (siempre que no sean ases)
bool caso_7(int da2[],int cant); //Se lanza con 3 dados y hay 2 caras iguales y un as
int resultado(int dado_1,int dado_2,int dado_3);// Funcion alternativa para resultado de dados
bool caso_8(int da2[]);
#endif // ANALIZA_RESULTADOS_H_INCLUDED


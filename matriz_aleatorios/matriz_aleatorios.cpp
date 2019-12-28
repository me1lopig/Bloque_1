// matriz_aleatorios.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// generacion de matriz de mumeros aleatorios
//

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

    int filas;
    int columnas;
    int matriz[100][100]; // ver dimensionamiento dinámico

    cout << "numero de filas="; cin >> filas;
    cout << "numero de columnas="; cin >> columnas;



    // generacion de la matriz

    srand(time(NULL));
    for (int i = 0; i < filas; i++)
    {
        
        for (int j = 0; j < columnas; j++)
        {
            
            matriz[i][j]= 1 + rand() % (101 - 1);
        }
    }


    // imprimir matriz

    cout << "Impresion de la matriz" << endl;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout <<matriz[i][j]<<"  ";
        }
        cout << endl;
    }
   


    cout << "Pulsa una tecla" << endl;
    cin.get();

    return 0;
}



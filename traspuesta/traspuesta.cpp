// traspuesta.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// traspuesta de una matriz
// se suman las matrices generadas
//

#include <iostream>

using namespace std;

void imprime_matriz(int m[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m[i][j] << "  ";
        }
        cout << endl;
    }

}



int main()
{

    int matriz[3][3];   // matriz dato
    int traspuesta[3][3]; // traspuesta de matriz
    int suma[3][3]; // matriz suma de las anteriores

    // introduccion de la matriz
    cout << "Introduce los valores de la matriz " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "[" << i << "," << j << "]=";
            cin >> matriz[i][j];
        }
    }

    // tranponemos la matriz

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            traspuesta[j][i] = matriz[i][j];
        }
    }

    // suma de matrices

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            suma[i][j]=traspuesta[i][j] + matriz[i][j];
        }
    }

    // impresion de las matrices

    cout << "Impresion de la matriz" << endl;
    imprime_matriz(matriz);

    cout << "Impresion de la matriz traspuesta" << endl;
    imprime_matriz(traspuesta);

    cout << "Impresion de la matriz suma" << endl;
    imprime_matriz(suma);
    
    cout<<"Pulsa una tecla " << endl;
    cin.get();
}



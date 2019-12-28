// matrices_1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// introduccion de los valores de una matriz por el teclado y despues obtenerla por pantalla
//

#include <iostream>

using namespace std;


int main()
{
   
    int matriz[3][3];

    // introducimos la matriz
    cout << "Introduce los datos de la matriz " << endl;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << "[" << i << "," << j << "]=";
            cin >> matriz[i][j];
        }
    }
    
   
      // imprimimos la matriz
   cout << "Valores de la matriz" << endl;

   for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout <<matriz[i][j]<<"  ";

        }
        cout << endl;
    }


    // imprimimos la diagonal de la matriz
    cout << "Diagonal de la matriz" << endl;

    for (int i = 0; i <= 2; i++)
    {
        cout << "[" << i << "," << i << "]=" << matriz[i][i] << endl;
    }

   
    cout << "Pulsa una tecla" << endl;
    cin.get();

}




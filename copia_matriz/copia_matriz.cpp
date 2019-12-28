// copia_matriz.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;


void imprime_matriz(int matriz[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"["<<i<<","<<j<<"]="<<matriz[i][j]<<endl;
        }
        cout << endl;
    }

}


int main()
{
    cout << "Copiamos una matriz en otra"<<endl;

    int matriz1[2][2] = { { 2,4 }, { 5,0 } };
    int matriz2[2][2];

    // copiamos una matriz en otra
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz2[i][j] = matriz1[i][j];
        }
    }

    cout << "Primera matriz" << endl;
    imprime_matriz(matriz1);

    cout << "segunda matriz" << endl;
    imprime_matriz(matriz2);



    cout << "Pulsa una tecla" << endl;
    cin.get();

    return 0;

}





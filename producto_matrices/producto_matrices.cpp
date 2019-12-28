// producto_matrices.cpp 
// programa para el calculo de matrices enteras de 3x3
// es posible adaptarlo a otras dimensiones
//

#include <iostream>
using namespace std;

void imprime_matriz(float matriz[3][3])
{
    // funcion para la impresion de matrices
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }

}


int main()
{
    float matriz_1[3][3] = { {1,2,3},{8,0,-5},{4,-4,1} };
    float matriz_2[3][3] = { {4,5,7},{9,8,7},{3,7,3} };

    float producto[3][3]; // matriz en la que se guarda el producto.

    // calculo del producto

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            producto[i][j] = 0;

            for (int k = 0; k < 3; k++)
            {
                producto[i][j] =producto[i][j]+ matriz_1[i][k] * matriz_2[k][j];
            }
                
        }
    }


    // impresion de las matrices

    cout << "matriz A" << endl;
    imprime_matriz(matriz_1);

    cout << "matriz B"<<endl;
    imprime_matriz(matriz_2);

    cout << "matriz AxB"<<endl;
    imprime_matriz(producto);


    cout << "Pulsa una tecla" << endl;
    cin.get();

    return 0;


}



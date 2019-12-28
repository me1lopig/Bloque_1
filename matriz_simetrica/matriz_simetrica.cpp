// matriz_simetrica.cpp
// comprobar si una matriz es simetrica
//

#include <iostream>

using namespace std;


int main()
{
    int matriz[3][3] = { {1,3,3},{2,5,4},{3,4,6} };
    int control = 0; // si es mayor que 0 la matriz no es simetrica

    // calculamos las dimensiones de la matriz
    int dimension1 = sizeof(matriz) / sizeof(matriz[0]);
    int dimension2 = sizeof(matriz[0]) / sizeof(matriz[0][0]);

   // comprobacion que la matriz es cuadrada
    if (dimension1 != dimension2)
    {
        cout << "La matriz no es cuadrada por lo tanto no puede ser simetrica" << endl;
    }

    else
    {
        for (int i=0; i < dimension1-1; i++)
        {
            for (int j = i+1; j < dimension2; j++)
            {
                if (matriz[i][j] != matriz[j][i]) control++;
            }
            if (control != 0)
            {
                cout << "La matriz es  cuadrada pero no es simetrica" << endl;
                break;
            }
        }

    }

    if (control == 0)
    {
        cout << "La matriz es cuadrada y simetrica " << endl;
    }

    return 0;

    cout << "Pulsa una tecla";
    cin.get();

}



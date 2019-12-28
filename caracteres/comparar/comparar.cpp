// comparar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<string>

using namespace std;


int main()
{
    char palabra_1[10] ;
    char palabra_2[10] ;

    cout << "Introduce la primera palabra ";
    cin >> palabra_1;

    cout << "Introduce la segunda palabra ";
    cin >> palabra_2;

    // pasamoa las cadenas a mayusculas
    _strupr_s(palabra_1);
    _strupr_s(palabra_2);


    if (strcmp(palabra_1, palabra_2) == 0)
    {
        cout << "Las dos palaras son iguales" << endl;
    }
    else if (strcmp(palabra_1, palabra_2) >0)
    {
        cout << "Las cadena " <<palabra_1<<" es mayor que "<<palabra_2<< endl;

    }
    else
    {
        cout << "Las cadena " << palabra_2 << " es mayor que " << palabra_1 << endl;
    }


    cout << "Pulsa una tecla" << endl;
    cin.get();

    return 0;

}



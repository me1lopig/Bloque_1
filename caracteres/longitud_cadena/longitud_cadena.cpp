// longitud_cadena.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<string>



using namespace std;

int main()
{
    char entrada[15];
    char copia[15]; // aqui copiamoa la otra cadena

    cout << "Introduce el texto a introducir ";
    cin.getline(entrada, 15, '\n'); // variable de entrada, tamaño y control de entrada de datos

    if (strlen(entrada) < 10)
    {
        cout << "La cadena supera los diez caracteres " << endl;
        cout << "La cadena es " << entrada << endl;
    }
    else
    {
        cout << "La cadena no supera los 10 caracteres" << endl;
    }

    // copia del contenido de una cadena 

    strcpy_s(copia, entrada);
    cout << "El contenido de la cadena nueva es " << copia << endl;


    cout << "Pulsa una tecla " << endl;
    cin.get();

    return 0;

    
}



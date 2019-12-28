// Conversion_numero.cpp
// convertir un texto en numeros
// si algun numero no es, se indica con un mensaje
//

#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    char texto_int[7];
    char texto_float[7];

    int numero_int;
    float numero_float;
    float suma=0;


    cout << "Introduce el texto del numero entero ";
    cin.getline(texto_int,7,'\n');

    cout << "Introduce el texto del numero real ";
    cin.getline(texto_float, 7, '\n');
    
    // pasamos a numeros los textos
    numero_int = atoi(texto_int);
    numero_float = atof(texto_float);


    if (numero_int == 0 || numero_float == 0)
    {
        cout << "Por lo menos un de las entradas no es un numero " << endl;
    }

    else
    {
        // suma de los dos numeros
        suma = numero_int + numero_float;

        // conversion a numero

        cout << "La suma de " << numero_int << " + " << numero_float << " = " << suma << endl;
    }

               

    cout << "Pulsa una tecla";
    cin.get();

    return 0;
}


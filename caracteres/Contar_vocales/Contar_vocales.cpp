// Contar_vocales.cpp : 
// contar vocales en un texto
//

#include <iostream>
#include<string>

using namespace std;


int main()
{
 
    char texto[100];
    int suma_a = 0, suma_e = 0, suma_i = 0, suma_o = 0,suma_u=0;
    int suma_espacio = 0;
    int suma_vocales;

    cout << "Introduce texto "<<endl;
    cin.getline(texto,sizeof(texto),'\n');

    // pasamos a minuscula para controlar el conteo 

    _strlwr_s(texto);

    cout << "El texto es " << texto << endl;

    // contamos las vocales del texto

    for (int i = 0; i < sizeof(texto)-1; i++)
    {
   
        switch (texto[i])
        {

        case 'a':
            suma_a++;
            break;

        case 'e':
            suma_e++;
            break;

        case 'i':
            suma_i++;
            break;

        case 'o':
            suma_o++;
            break;

        case 'u':
            suma_u++;
            break;
        case ' ':
            suma_espacio++;
            break;

        default:
            break;
        }
      
    }

    suma_vocales = suma_a + suma_e + suma_i + suma_o + suma_u;
    // representacion de los resultados
    cout << "\nEl resultado es :" << endl;

    cout << "El numero de vocales a es " << suma_a << endl;
    cout << "El numero de vocales e es " << suma_e << endl;
    cout << "El numero de vocales i es " << suma_i << endl;
    cout << "El numero de vocales o es " << suma_o << endl;
    cout << "El numero de vocales u es " << suma_u << endl;

    cout << "\nTotal de vocales es " << suma_vocales << endl;
    cout << "Total de espacios es " << suma_espacio << endl;
    cout << "Total de consonantes es " << strlen(texto)- suma_vocales-suma_espacio << endl;


    cout << "Pulsa una tecla ";
    cin.get();

    return 0;
}



// caracteres.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<string>



using namespace std;

int main()
{
    char palabra[] = "palabra";
    char nombre[10];


    

    cout << "la cadena " << palabra << " tiene " << strlen(palabra) << " caracteres " << endl;

    cout << "Introduce la cadena ";
    cin.getline(nombre,10,'\n'); // variable de entrada, tamaño y control de entrada de datos

    cout << "La cadena es " << nombre << endl;

 
    
    // cambio a mayusculas
    
    _strupr_s(nombre);
    cout << "La cadena en mayusculas es " << nombre << endl;

    // cambio a minusculas
    _strlwr_s(nombre);
    cout << "La cadena en minusculas es " << nombre << endl;
   


    cout << "Pulsa una tecla";
    cin.get();

    return 0;

}


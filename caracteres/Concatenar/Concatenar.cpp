// Concatenar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// añadir una cadena a otra  introducida por el teclado
//

#include <iostream>
#include<string>


using namespace std;

int main()
{
    
    string texto_1 = "Hello";
    string texto_2 = " word";
    string suma_texto;

    string texto_3;

    cout << "Introduce la cadena ";
    //cin >> texto_3;
    getline(cin,texto_3);

   // concatenamos las cadenas

    suma_texto = texto_1 + texto_2;
    cout << "El texto compuesto es " << suma_texto << endl;

    suma_texto = suma_texto + " "+texto_3;
    cout << "El texto compuesto es " << suma_texto << endl;
        
    
    cout << "Pulsa una tecla" << endl;
    cin.get();

    return 0;

}



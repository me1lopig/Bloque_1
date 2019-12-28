// Nombre.cpp 
// Introduce una cadena, si empieza por A se pasa a mayuscula
// en caso contrario no
//

#include <iostream>
#include<string>

using namespace std;

int main()
{
    char nombre[10];

    cout << "Introduce el texto ";
    cin.getline(nombre, 10, '\n');

    // comprobacion

    if (nombre[0] == 'A' || nombre[0] == 'a')
    {
       _strlwr_s (nombre); // se pasa a minusculas
    }

    else
    {
        cout << "El nombre no comienza con la letra a/A" << endl;
    }

    cout << "El texto es " << nombre<< endl;



    cout << "Pulsa una tecla" << endl;
    cin.get();

    return 0;
}



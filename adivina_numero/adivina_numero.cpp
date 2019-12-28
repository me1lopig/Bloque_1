// adivina_numero.cpp 
// adivina un numero entre 1 y 100
// indicar si el numero introducido por es mayor o menor
// indicar el numero de intentos
//

#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main()
{

	int numero;
	int aleatorio;
	int contador = 0;

	srand(time(NULL));
	aleatorio = 1 + rand()%(101 - 1);

	do 
	{
		cout << "Introduce el numero entre 1 y 100 ="; cin >> numero;

		contador++;

		if (numero > aleatorio)
		{
			cout << "el numero es menor " << endl;
		}

		if (numero < aleatorio)
		{
			cout << "el numero es mayor" << endl;
		}

	} while (numero != aleatorio);

	cout << "Has adivinado el numero es el  " << numero << endl;
	cout << "Con " << contador << " intentos" << endl;


	cout << "Pulsa una tecla para terminar" << endl;
	cin.get();

	return 0;
}



// Suma_intervalo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;


int main()
{
	int numero, suma=0;
	do 
	{
		cout << "Introducir el numero "; cin >> numero;
		if (numero > 0)
		{
			suma += numero;
		}

	} while (((numero<20)||(numero>30))&&(numero!=0));

	cout << "La suma es " << suma << endl;
}



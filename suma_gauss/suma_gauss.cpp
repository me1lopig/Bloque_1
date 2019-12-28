// suma_gauss.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;



void tabla(int numero)
{
	// tabla de multiplicar de numero
	
	for (int i = 1; i <= 10; i++)
	{
		cout << numero << "x" << i << "=" << i * numero << endl;
	}
}



int main()
{
	int numero;

	// numero usado como base
	cout << "Introduce el numero de la tabla de multiplicar entre 1 y 10" << endl;

	do 
	{
		cout << "Introduce el numero "; cin >> numero;

	} while ((numero < 1) || (numero > 10));

	// tabla de multiplicar
	tabla(numero);


}



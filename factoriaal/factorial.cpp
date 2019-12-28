// factorial.cpp : calculo del factorial de un numero;
//se añade la suma de factoriales

#include <iostream>

using namespace std;


long factorial(int n)
{
	// funcion para  el calculo del factorial de n
	
	for (int i = n-1; i >= 1; i--)
	{
		n *= i;
	}
	return n;

}


float suma_factoriales(int n)
{
	// funcion de suma de factoriales
	// hace una llamada a la funcion factorial

	float suma = 0;
	for (int i = 1; i <= n; i++)
	{
		suma+= factorial(i);

	}
	return suma;

}


int main()
{
	int numero;

	cout << "Introduce el numero entero= "; cin >> numero;
	cout << "El factorial de  "<<numero<<" es " << factorial(numero) << endl; // hacemos un llamado a la funcion
	cout << "la suma de los factoriales de  " << numero << " es " << suma_factoriales(numero) << endl; // hacemos un llamado a la funcion suma_factoriales

	return 0;

}


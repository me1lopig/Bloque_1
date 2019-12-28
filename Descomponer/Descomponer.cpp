// Descomponer.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// incluimos funciones en el mismo archivo


#include <iostream>
#include<string>
#include<cstdlib>



using namespace std;




void salida()
{
	// paramos la ejecución hasta pulsar una tecla
	cout << "Pulsa una tecla para terminar " << endl;
	cin.get();
}

int main()
{

	string numero;
	int n_digitos;


	cout << "Introduce el numero entero "; cin >> numero;

	// obtenemos el numero de digitos
	n_digitos = numero.length();

	

	//cout << "numero en texto " << numero_cadena << endl;
	cout << "numero de digitos " << n_digitos << endl;
	cout << "La descomposicion del numero " << numero << " es: " << endl;

	

	for (int i = 0; i<= n_digitos - 1; i++)
	{	
		cout << "elemento n " << i+1 << " es " << (int)(numero[i]-48)*pow(10,n_digitos-i-1)<<endl;		
	}



	salida(); // mensaje de parada y de salida

	return 0;
}


// Numeros_Romanos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// paso de numeros romanos a actuales


#include <iostream>
#include<string>

using namespace std;

int main()
{
	string numero_romano;
	int actual = 0;

	cout << "Introduce el numero romano "; cin >> numero_romano;
	//cout << "La longitud de la cadena del numero romano es " << numero_romano.length()<<endl;



	for (int i = 0; i <= numero_romano.length()-1; i++)
	{
		//cout << "Valor del elemento " << numero_romano[i] << endl;

		switch (numero_romano[i])
		{
		case 'I':
			actual += 1;
			break;

		case'V':
			actual += 5;
			break;

		case 'X':
			actual += 10;
			break;

		case 'L':
			actual += 50;
			break;

		case 'C':
			actual += 100;
			break;

		case 'D':
			actual += 500;
			break;

		case 'M':
			actual += 1000;
			break;

		}
	}

	cout << "El numero es el " << actual << endl;

	return 0;
}

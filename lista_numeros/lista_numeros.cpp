// lista_numeros.cpp : Entrada de numeros hasta cero y sacar suma de estos y el numero de entradas
//

#include <iostream>
using namespace std;


int main()
{
	float numero;
	int contador = 0;

	do
	{
		cout << "introduce el numero "; cin >> numero;
		if (numero > 0)
		{
			contador++;
		}
	
		
	} while (numero != 0);


	cout << "Se han introducido " << contador << " numeros positivos" << endl;
}



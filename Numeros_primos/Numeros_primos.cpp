// Numeros_primos.cpp 
// descomposicion en factores primos fuerza bruta
// el 1 no se considera numero primo
//

#include <iostream>
#include <math.h>

using namespace std;



int main()
{
	int numero;

	cout << "Introduce el numero a descomponer >1 "; cin >> numero;


	for (int i = 2; i <= numero; i++)
	{
		while (numero % i == 0)
		{
			cout << i << endl;
			numero /= i;
		}
	}

	cout << "Pulsa una tecla para finalizar" << endl;
	cin.get();

	return 0;
}



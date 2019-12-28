// cuatro_numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int main()
{
float n1, n2, n3, n4;

	cout << "Introduce el primer numero "; cin >> n1;
	cout << "Introduce el segundo numero "; cin >> n2;
	cout << "Introduce el tercer numero "; cin >> n3;
	cout << "Introduce el cuarto numero "; cin >> n4;

// comparamos los valores

	if (n4 == n1)
	{
		cout << "El cuarto numero es igual al primero " << n1 << endl;
	}
	else if (n4 == n2)
	{
		cout << "El cuarto numero es igual al segundo " << n2 << endl;
	}
	else if (n4 == n3)
	{
		cout << "El cuarto numero es igual al tercero " << n3 << endl;
	}
	else
	{
		cout << "El cuarto numero no es es igual a ninguno " << endl;
	}


	return 0;

}


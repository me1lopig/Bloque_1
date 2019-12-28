// introducir un numero y ver si es par o impar
// ojo si el numero es un cero

#include <iostream>


using namespace std;

int main()
{
	int n1;

	cout << "Introduce el primer numero "; cin >> n1;

	if (n1 % 2 == 0 && n1 != 0)
	{
		cout << "el numero " << n1 << " es par" << endl;
	}
	else if (n1 == 0)
	{
		cout << "El numero es cero " << endl;
	}
	else
	{
		cout << "El numero " << n1 << " es impar" << endl;
	}

	return 0;
}
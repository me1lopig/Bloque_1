// determinacion del signo de un numero
//

#include <iostream>

using namespace std;



int main()
{
	float num;

	cout << "Introduce el valor del numero "; cin >> num;

	if (num == 0)
	{
		cout << "El numero es el cero" << endl;
	}
	else if (num < 0)
	{
		cout << "El numero es negativo" << endl;
	}
	else
	{
		cout << "El mumero es positivo" << endl;
	}

	return 0;
}




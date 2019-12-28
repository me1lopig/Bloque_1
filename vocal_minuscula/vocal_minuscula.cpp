// vocal_minuscula.cpp 
// comprobar si un caracter es una vocal minuscula
//

#include <iostream>

using namespace std;


int main()
{
	char vocal;

	cout << "Introduce la vocal " ; cin >> vocal;

	if (vocal== 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u')
	{
		cout << "El caracter es una vocal minuscula" << endl;
	}
	else if (vocal == 'A' || vocal == 'E' || vocal == 'I' || vocal == 'O' || vocal == 'U')
	{
		cout << "El caracter es una vocal mayuscula" << endl;
	}
	else
	{
		cout << "El caracter no es una vocal" << endl;
	}
}



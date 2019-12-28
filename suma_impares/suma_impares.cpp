// suma_impares.cpp : suma de numeros impares hasta uno n determinado
//

#include <iostream>

using namespace std;

int main()
{
	int n; // numero de valosres
	int suma = 0; // variable que aloja la suma

	cout << "Introduce el valor de n="; cin >> n;

	for (int i=1;i<=n;i++)
	{
		suma = suma + 2*i-1; // suma solo impares
		cout << "valor de suma " << suma << endl;
		cout << "valor de i " << i << endl;
	}

	cout << "la suma es " << suma << endl;

	return 0;
}



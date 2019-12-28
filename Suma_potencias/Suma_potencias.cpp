// Suma_potencias.cpp 
// suma de los elementos 2^n
//

#include <iostream>
#include<math.h>

using namespace std;


int main()
{
	int n;
	double suma = 0;

	cout << "Introduce el valor de n="; cin >> n;

	for (int i = 1; i <= n; i++)
	{
		suma += pow(2, i);
	}
	
	cout << "el valor de la suma de los " << n << " elementos es " << suma << endl;

	return 0;

}



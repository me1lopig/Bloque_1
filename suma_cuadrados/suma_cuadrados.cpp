// suma_cuadrados.cpp 
// suma de los cuadrados de los 100 primeros numeros enteros
//

#include <iostream>
using namespace std;



int main()
{
	int suma = 0;


		for (int i = 1; i <= 10; i++)
		{
			suma += pow(i, 2);
		}

		cout << "La suma de los cuadrados de los 100 primeros numeros  es " << suma << endl;
}



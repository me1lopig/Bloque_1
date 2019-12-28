// suma_signos.cpp : Suma los valores pares y resta los impares
//

#include <iostream>
#include<math.h>

using namespace std;


int main()
{
	int n; 
	double suma=0;

	cout << "Intruduce el valor de n="; cin >> n;


	for (int i = 1; i <= n; i++)

	{
	
		if (i % 2 == 0)
		{
			// si es par resta
			suma = suma -  i;
		}
		else
		{
			// si es impar suma
			suma = suma + i;

		}	
			}

	cout << "El valor de la suma es " << suma << endl;
}




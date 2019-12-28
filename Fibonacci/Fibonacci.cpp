// Fibonacci.cpp : 
// calculo de los elementos de la serie de Fibonacci
//

#include <iostream>
#include <math.h>

using namespace std;



int main()
{
	int n; // termino
	float fibonacci; // elementos de la serie de Fibonacci

	cout << "Introduce hasta que termino llegar "; cin >> n;
	
	for(int i=0;i<=n;i++)
	{
		fibonacci = (pow((1 + sqrtf(5)) / 2, i) - pow((1 - sqrtf(5)) / 2, i)) / sqrtf(5);
		cout << "El termino " << i << " es " << fibonacci << endl;
	}
	   
	cout << "Pulsa una tecla para terminar" << endl;
	cin.get();

}



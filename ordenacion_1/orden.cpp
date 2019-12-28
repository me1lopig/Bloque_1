// ordenacion de dos numeros introducidos por el teclado

#include <iostream>

using namespace std;

int main()
{
	float n1,n2,n3;
	float mayor;

	cout << "Introduce el primer numero "; cin >> n1;
	cout << "Introduce el segundo numero "; cin >> n2;
	cout << "Introduce el tercer numeros "; cin >> n3;



	// vemos cual es el mayor numero de los tres

	if (n1 >= n2)
	{
		mayor = n1;
	}
	else
	{
		mayor = n2;
	}


	if (n3 > mayor)
	{
		mayor = n3;
	}
	

	cout << "el mayor valor es " << endl;
	cout << mayor << endl;


	return 0;


}

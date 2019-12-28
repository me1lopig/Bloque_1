// suma_caracteres.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// se unen dos vetores de caracteres en uno solo

#include <iostream>

using namespace std;

int main()
{
	// vectores de datos
	char array1[] = { 'a','e','i','o','u','1' };
	char array2[] = { 'b','c','d','f','6','8'};
	// vector de agrupacion
	char array3[sizeof(array1) / sizeof(*array1)+ sizeof(array2) / sizeof(*array2)];
    
	// dimensiones de los vectores
	int dim1 = sizeof(array1) / sizeof(*array1);
	int dim2=sizeof(array2) / sizeof(*array2);

	for (int i = 0; i <= dim1 + dim2-1; i++)
	{
		if (i <= dim1-1)
		{
			array3[i] = array1[i];
		}
		else
		{
			array3[i] = array2[i - dim1];
		}
	}

	// impresion del nuevovector

	for (int i = 0; i <= dim1 + dim2-1; i++)
	{
		cout << "Elemento[" << i << "]=" << array3[i] << endl;
	}


	cout << "Pulsa una tecla " << endl;
	cin.get();

	return 0;
}



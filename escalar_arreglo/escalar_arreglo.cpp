// escalar_arreglo.cpp 
// multiplicar un arreglo por un numero y colocarlo en otro
//

#include <iostream>

using namespace std;

int main()
{
	int array1 []= { 1,2,3,4,5 };
	const int dim = sizeof(array1) / sizeof(*array1);
	int array2[dim];// por lo que veo no deja poner variables hay que definirla como constante
	int numero; // numero por el que se multiplica el vector

	// introduce el numero
	cout << "Numero que multiplica el vector="; cin >> numero;

	// multiplicar y llenar array2
	for(int i = 0; i <= dim-1; i++)
	{
		array2[i] = numero * array1[i];
		cout << "El valor del elemento inicial [" << i << "]= " << array1[i] << endl;
		cout << "El valor del elemento multiplicado [" << i << "]= " << array2[i] << endl;
	}


	// pausa 
	cout << "Pulsa tecla para finalizar" << endl;
	cin.get();

	return 0;
    
}


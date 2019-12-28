// ejemplo de bucle
//

#include <iostream>
#include<math.h>
using namespace std;

float vector[3];
float suma=0;

int main()
{

	cout << "El tamaño del vector es " << sizeof(vector)/sizeof(*vector)<<endl;

	for (int x = 0; x <= sizeof(vector)/sizeof(*vector)-1; x++)
	{
		cout << "valores de vector[" << x << "]="; cin >> vector[x];
		suma = suma + vector[x];	
	}

	cout << "numero de elementos " << sizeof(vector) / sizeof(*vector) << endl;
	cout << "El valor de la suma es " << suma << endl;
	
	cout.precision(4);
	cout << "El valor de la media es " << suma/(sizeof(vector)/sizeof(*vector)) << endl;
	return 0;
}


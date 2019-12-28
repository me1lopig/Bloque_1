// Temperaturas.cpp : Entrada de 6 temperaturas
// cálculo de la media, valor minimo y el valor máximo
//

#include <iostream>

using namespace std;

int main()
{
	float temperatura; // datos a introducir
	float suma=0; // suma para calcular la media
	float minima=100; // valor de inicio de la temperatura minima fuera de rango
	float maxima=-100; // valor de inicio de la temperatura maxima fuera de rango
	int n_datos = 0;

    cout << "Introducir los valores de las temperaturas\n";

	for (int t = 0; t < 24; t+=4)
	{
		cout << "Valor de la temperatura a la hora " << t << " ";
		cin >> temperatura;
		
		// para el calculo de la media
		suma +=temperatura; // suma de los datos para el calculo de la media
		n_datos++;

		// calculo de la temperatura maxima
		if (temperatura>=maxima)
		{
			maxima = temperatura;
		}

		// calculo de la temperatura minima
		if (temperatura <= minima)
		{
			minima = temperatura;
		}
		
	}

	cout << "\nValores estadisticos de las temperaturas" << endl;
	cout << "La temperatura media es " << suma/n_datos<<endl;
	cout << "La temperatura maxima es " << maxima << endl;
	cout << "La temperatura minima es " << minima << endl;
}



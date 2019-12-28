// potencia.cpp : calculo de funcion potencia para numeros enteros
//

#include <iostream>
using namespace std;

int potencia(int x, int y)
{
	int potencia = 1;
		
	for (int i = 1; i <= y; i++)
	{
		potencia=potencia*x;

	}
	return potencia;
}


int main()
{
	int x, y;
	

	cout << "Calculo de x^y , con y entero positivo " << endl;
	cout << "Introduce x= "; cin >> x;
	cout << "Introduce y= "; cin >> y;

	
	cout << "El valor de " << x << "^" << y << " es " << potencia(x, y) << endl;
	
	return 0;

}



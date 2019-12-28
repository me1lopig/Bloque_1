// libreria math
// ejemplos de uso
// http://www.cplusplus.com/reference/cmath/


# include <iostream>// libreria de entrada y salida en C++
# include <math.h> // libreria matematica

using namespace std;

int main()
{
	// declaracion de variables de la ecuación a x^2 +b x+c=0
	float a;
	float b;
	float c;
	// discriminante
	float discriminante;
	// soluciones
	float x1;
	float x2;
	

	// entrada de datos en C++
	cout<<"Introducir los elementos de la ecuacion ax^2+bx+c=0"<<endl;
	cout << "Introducir a "; cin >> a;
	cout << "Introducir b "; cin >> b;
	cout << "Introducir c "; cin >> c;


	if (a == 0)
	{//filtro para comprobar si la ecuación es cuadratica o no
		cout << "No es una ecuacion de segundo grado" << endl;
		cout << "Es una ecuacion lineal" << endl;
		cout << "la solucion es " << c / b << endl;
		return 0;
	}
	discriminante = pow(b, 2) - 4 * a * c;

	if (discriminante >= 0)
	{
		cout << "La ecuacion tiene raices reales" << endl;
		x1 = (-b + (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
		x2 = (-b - (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
		// representacion de los calculos
		cout << "La solucion x1=" << x1 << endl;
		cout << "La solucion x2=" << x2 << endl;
	}

	else
	{
		cout << "La ecuacion no tiene raices reales";
	}
	   	 
	return 0;

}





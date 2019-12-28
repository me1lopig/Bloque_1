// tiro_parabolico.cpp : modelización de un tiro parabolico
//

#include <iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()

{
	// variables dependependientes espaciales
	float x;
	float y;
	// variable independiente tiempo
	float t=0.001;

	float y0; // altura inicial
	float v; // velocidad
	float pendiente; //angulo de arranque
	float xmax; // x maxima
	float ymax; // y maxima


	cout << "Introducir la altura de lanzamiento inicial [m] "; cin >> y0;
	cout << "Introducir la velocidad inicial [m/sg] "; cin >> v;
	cout << "Introducir el angulo de disparo [grados] "; cin >> pendiente;
	
	//pendiente en radianes
	pendiente = pendiente * 3.14159 / 180;
	cout << "pendiente " << pendiente << endl;


	// x maxima
	xmax = pow(v, 2) * sin(2*pendiente) / ( 9.81);
	cout << "valor de x max " << xmax << endl;

	// y maxima
	ymax= pow(v, 2) * pow(sin( pendiente),2) / (2*9.81);
	cout << "valor de y max " << ymax << endl;


	system("pause");

	do
	{
		x = v * cosf(pendiente) * t;
		y = y0 + v * sinf(pendiente) * t - 0.5 * 9.81 * powf(t, 2);
		t += 0.001;

		cout << "Valor de x=" << x << " valor de y=" << y << endl;

	} while (x < xmax);

	cout << "La distancia maxima es " << x << endl;


	// paramos la ejecución hasta pulsar una tecla
	cout << "Pulsa una tecla para terminar " << endl;
	cin.get();
    
}



// segundo bloque del curso
# include <iostream>// libreria de entrada y salida
# include <math.h> // libreria matematica

using namespace std;

// expresiones en C++
int main()
{
/*	float a;
	float b;

	cout << "Introduce el valor de a ";
	cin >> a;

	cout << "Introduce el valor de b ";
	cin >> b;

	cout.precision(3); // redondeo a dos cifras 
	cout << "El valor de la expresion a/b+1 es " << a / b + 1;

	*/

/*
	// expresion con cuatro numeros

	float a, b, c, d,e,f;
	cout << "Introduce el valor de a ";
	cin >> a;

	cout << "Introduce el valor de b ";
	cin >> b;

	cout << "Introduce el valor de c ";
	cin >> c;

	cout << "Introduce el valor de d ";
	cin >> d;

	cout << "Introduce el valor de e ";
	cin >> e;

	cout << "Introduce el valor de f ";
	cin >> f;



	cout.precision(3); // redondeo  
	cout << "El valor de la expresion (a+b/c)/(d+e/f) es " << (a+b/c) / (d+e/f)<<endl;
	*/
/*
	float a, b, c, d;
	cout << "Introduce el valor de a ";
	cin >> a;

	cout << "Introduce el valor de b ";
	cin >> b;

	cout << "Introduce el valor de c ";
	cin >> c;

	cout << "Introduce el valor de d ";
	cin >> d;
	

	cout.precision(3); // redondeo  
	cout << "El valor de la expresion (a+b/(c-d)) es " << a + b/(c-d) << endl;


	*/
/*
	// intercambio de variables

	int x;
	int y;
	int aux;

	cout << "Introduce el valor de x "; cin >> x;
	cout << "Introduce el valor de y "; cin >> y;

	cout << "\nNuevos valores de x, y"<<endl;

	aux = x;
	x = y;
	y = aux;

	cout << "Los valoes cambiados son " << x << " y " << y;

	

*/
/*
// calculo de la nota media de cuatro notas

	float nota1;
	float nota2;
	float nota3;
	float nota4;

	cout << "Introduce el valor de nota1 "; cin >> nota1;
	cout << "Introduce el valor de nota2 "; cin >> nota2;
	cout << "Introduce el valor de nota3 "; cin >> nota3;
	cout << "Introduce el valor de nota4 "; cin >> nota4;

	// el valor medio es 

	cout << "\nEl valor promedio de las tres notas es " << (nota1 + nota2 + nota3 + nota4) / 4;


	*/


	// porcentaje de notas de un alumno

	//float nota_practicas;
	//float nota_teorica;
	//float nota_participacion;
	//float nota_final;

	/*
		los porcentajes son:
		practica		30%
		teorica			60%
		participacion	10%
	
	
	*/

	//cout << "nota de practica "; cin >> nota_practicas;
	//cout << "nota de teorica "; cin >> nota_teorica;
	//cout << "nota de participacion "; cin >> nota_participacion;


	//nota_final = (nota_practicas * 0.30 + nota_teorica * 0.60 + nota_participacion * 0.10);

	//cout.precision(3);
	//cout << "\nLa nota final es " << nota_final;


	// calculo de el valor de la hipotenusa de un triangulo rectangulo

	float cateto_1;
	float cateto_2;
	float hipotenusa;

	cout << "Introduce el primer cateto "; cin >> cateto_1;
	cout << "Introduce el segundo cateto "; cin >> cateto_2;

	hipotenusa = sqrt(pow(cateto_1, 2) + pow(cateto_2, 2));

	cout.precision(3);
	cout << "\nEl valor de la hipotenusa es " << hipotenusa<<endl;



	return 0;
}
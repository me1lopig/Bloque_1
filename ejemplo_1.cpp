// primer programa del curso
# include <iostream>
using namespace std;

int main()
{// tipos de datos

	/*
	int numero1;
	int numero2;

	//Introduccion de numeros y operaciones 
	// entrada del numero 
	cout << "Introduce el primer numero " << endl;
	cin >> numero1;

	// entrada del numero 
	cout << "Introduce el segundo numero " << endl;
	cin >> numero2;

	// salida de las operaciones
	cout << "la suma de " << numero1 << " y de " << numero2 << " es " << numero1 + numero2<<endl;
	cout << "la resta de " << numero1 << " y de " << numero2 << " es " << numero1 - numero2 << endl;
	cout << "la multiplicación de " << numero1 << " y de " << numero2 << " es " << numero1 * numero2 << endl;
	cout << "la division entera de " << numero1 << " y de " << numero2 << " es " << numero1 / numero2 << endl;

	*/

	/*
	// calculo del IVA de un producto

	float precio; 
	
	cout << "Introduce el precio del producto" << endl;
	cin >> precio;

	// salida de los resultados
	cout << "El IVA de " << precio << " es " << 0.21 * precio<<" El total es "<<1.21*precio;
	*/

	// entrada de datos y mostrarlos en pantalla

	int edad;
	float altura;
	char sexo[10];

	cout << "Introduce tu edad " ;
	cin >> edad;

	cout << "Introduce tu altura ";
	cin >> altura;

	cout << "Introduce tu sexo ";
	cin >> sexo;

	cout << "\nla edad es  " << edad<< endl;
	cout << "la estatura es  " << altura << endl;
	cout << "el sexo es  " << sexo << endl;




	return 0; // se coloca como buena práctica de programación
}
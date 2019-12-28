// Invertir_cadema.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Invertir una cadena introducido por el teclado
//

#include <iostream>
#include<string>
//#include<cctype>


using namespace std;

string mayuscula(string cadena)
{
	// funcion para hacer mayusculas los elementos de una cadena
	int longitud = cadena.size();
	for (int i = 0; i < longitud; i++)
	{
		cadena[i] = (char)toupper(cadena[i]);
	}

	return cadena;
}

string minuscula(string cadena)
{
	// funcion para hacer minusculas los elementos de una cadena
	int longitud = cadena.size();
	for (int i = 0; i < longitud; i++)
	{
		cadena[i] = (char) tolower (cadena[i]);
	}
		return cadena;
}



int main()
{
	string cadena;
	string cadena2;

	

	cout << "Introduce la palabra ";
	getline(cin, cadena);

	cadena2 = cadena;
	reverse(cadena.begin(), cadena.end());

	if (cadena == cadena2)
	{
		cout << "La palabra " << cadena2 << " es un palindromo" << endl;

	}

	else 
	{
		cout << "La palabra " << cadena2 << " no es un palindromo" << endl;

	}

	// pasamos a mayusculas 
	// en string no hay funcion para pasar de mayusculas a minusculas 
	cadena = cadena2;
	cout << "La palabra " << cadena2 << " en minusculas " << minuscula(cadena) << endl;

	// pasamos a munisculas
	cadena = cadena2;
	cout << "La palabra " << cadena2 << " en mayusculas " << mayuscula(cadena) << endl;

	

	cout << "Pulsa una tecla" << endl;
	cin.get();


}


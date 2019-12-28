// arreglo_1.cpp 
// ejemplo de arreglos
// suma y multiplicaion de los elementos de un vector unidimensional
//

#include <iostream>
using namespace std;


int suma_vector(int datos[], int n_datos)
{
	int suma = 0; 

	for (int i = 0; i <= n_datos - 1; i++)
	{
		suma += datos[i];
	}

	return suma;
}


int multiplica_vector(int datos[], int n_datos)
{
	int producto = 1;

	for (int i = 0; i <= n_datos - 1; i++)
	{
		producto *= datos[i];
	}

	return producto;
}


void matriz_invertida(int datos[],int n_datos)
{
	
	for (int i = n_datos - 1; i >= 0; i--)
	{
		cout << "Elemento[" << i << "]=" << datos[i] << endl;
	}

}


void imprime_matriz(int datos[], int n_datos)
{
	for (int i = n_datos - 1; i >= 0; i--)
	{
		cout << "Elemento[" << i << "]=" << datos[i] << endl;
	}
}


int mayor_elemento(int datos[], int n_datos)

{
	// busqueda del elemento mayor del vector

	int mayor = datos[0]; // se toma como base el primer elemento para arrancar

	for (int i = 0; i <= (n_datos - 1); i++)
	{
		if (datos[i]>mayor)
		{
			mayor = datos[i];
		}
	}

	return mayor;
}


void busca_suma(int datos[], int n_datos)
{
	// busqueda de algún elemento que sea suma del resto

	int suma = suma_vector(datos, n_datos); // valor de la suma de los datos

	// rastreamos los valores
	int control = 0;
	 
	for (int i = 0; i <= n_datos - 1; i++)
	{
		if (datos[i] == (suma - datos[i]))
		{
			cout << "El dato de la posicion [" << i << "]=" << datos[i] << " es suma del resto de los valores" << endl;
			control++;
		}
		
	
	}

	if (control == 0)
	{
		cout << "No hay numeros que sean suma del resto de elementos" << endl;
	}
}





int main()
{
	// se usan funciones en el programa

	int datos[] = {4,3,16,5,4}; // definicion del vector
	int n_datos = sizeof(datos) / sizeof(int); // numero de elementos del vector
	

	cout << "Elementos del vector " << endl;

	imprime_matriz(datos, n_datos);

	cout << "Datos en orden inverso" << endl;
	
	matriz_invertida(datos, n_datos); //invocamos la funcion de salida de la matriz invertiva

	cout << "Buscamos elemento suma de los demas" << endl;
	busca_suma(datos, n_datos);

	// representacion de varios resultados

	cout << "La multiplicacion de los elementos es " << multiplica_vector(datos,n_datos) << endl;
	cout << "La suma de los elementos es  " << suma_vector(datos, n_datos) << endl;
	cout << "El mayor elemento es el " << mayor_elemento(datos, n_datos) << endl;
	  

	// pausa 
	cout << "Pulsa tecla para finalizar" << endl;
	cin.get();

	return 0;
}

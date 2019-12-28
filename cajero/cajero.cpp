// cajero.cpp : simulacion de un cajero
//

#include <iostream>
#include <stdlib.h>

using namespace std;

void presentacion()
{
	// opciones del cajero
	cout << "Bienvenido al cajero automatico" << endl;
	cout << "1. Ingresar dinero en cuenta " << endl;
	cout << "2. Retirar dinero en cuenta " << endl;
	cout << "3. Ver saldo " << endl;
	cout << "4. Salir " << endl;
}

void parada()
{
	// parada para pulsar tecla y limpiar pantalla
	// esto solo funciona bajo sistemas windows
	system("pause");
	system("cls"); // borrado de la pantalla despues de realizar la operacion
}


int main()
{
	float saldo = 1000; // saldo inicial de 1000 $
	float cantidad;
	int opcion;

	do
	{
		presentacion();

		cout << "Ingresar opcion "; cin >> opcion;
	


		switch (opcion)
		{
		case 1:
			cout << "Introduce la cantidad a ingresar "; cin >> cantidad;
			saldo += cantidad;
			break;

		case 2:
			cout << "Introduce la cantidad a sacar "; cin >> cantidad;
			if (saldo>=cantidad)
			{
				saldo -= cantidad;
			}
			else 
			{
				cout << "No dispones de saldo suficiente para retirar esa cantidad" << endl;
			}
			
			break;

		case 3:
			cout << "El saldo actual es " << saldo << endl;

			break;


		case 4:
			cout << "Adios y gracias por usar el cajero" << endl;
			break;

		default:
			cout << "Opcion no contemplada " << endl;
			break;
		}

		parada();

	} while (opcion != 4);

	return 0;
}


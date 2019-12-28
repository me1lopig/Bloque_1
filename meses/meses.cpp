// meses.cpp Introduce el mes en numero e indicar el nombre
//


#include <iostream>
#include<string>


using namespace std;


int main()
{
	string meses[12] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Novienbre","Diciembre"};
	int mes;

	cout << "Introduce el mes "; cin >> mes;

	if (mes >= 1 && mes <= 12)
	{
		cout << "El mes numero " << mes << " es " << meses[mes-1] << endl;
	}

	else
	{
		cout << "El numero introducido no corresponde a ningun mes " << endl;
	}
    
	return 0;
}



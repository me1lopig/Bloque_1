// notas_alumnos.cpp : 
// calculo de estadisticas de notas de cinco alumnos
//

#include <iostream>

using  namespace std;



int main()
{
    cout << "Introducir las notas de los cinco alumnos"<<endl;
	
	float nota1, nota2, nota3; //notas
	int todos=0, alguno=0, ultimo=0; // estadisticas

	for (int alumno = 1; alumno <= 5; alumno++)
	{
		cout << "alumno " << alumno << endl;

		
		// entrada de datos
		cout << "Nota 1 "; cin >> nota1;
		cout << "Nota 2 "; cin >> nota2;
		cout << "Nota 3 "; cin >> nota3;
			
		// procesado de los datos

		if ((nota1 >= 5) && (nota2 >= 5) && (nota3 >= 5))
		{
			todos++;
		}

		if ((nota1 >= 5) || (nota2 >= 5) || (nota3 >= 5))
		{
			alguno++;
		}

		if ((nota1 < 5) && (nota2 < 5) && (nota3 >= 5))
		{
			ultimo++;
		}

	
	}


	cout << "Alumnos que han aprobado todos los examenes " << todos << endl;
	cout << "Alumnos que han aprobado alguno de  los examenes " << alguno << endl;
	cout << "Alumnos que han aprobado unicamente el ultimo de  los examenes " << ultimo << endl;


	// impresion de las estadisticas


	cout << "Pulsa una tecla para terminar" << endl;
	cin.get();
}



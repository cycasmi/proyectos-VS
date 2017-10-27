//Nombre: Cynthia B. Castillo Millán
//Matrícula: A01374530
// Tarea1, ejercicio 3.

#include <iostream>
#include <math.h>
using namespace std;

void factorial()
{
	double suma = 0;

	double resultado = 1;

	for (int i = 100; i >= 1; i--)
	{
		resultado *= i;
	}

	cout << "El factorial de 100 es " << resultado << "\n";

	double cuentaDigitos = 0;
	while (resultado >= 1)
	{
		++cuentaDigitos;
		resultado /= 10;
		//cout << resultado << "\n";
	}

	//cout << "Su numero de digitos es:" << cuentaDigitos;

	//********************************************************************************************
	double cuentaDigitos2;
	cuentaDigitos2 = pow(10, (cuentaDigitos - 1));
	//cout << "\nEl valor de CuentaDigitos2 es:" << cuentaDigitos2 << "\n";

	//****************************************************************

	resultado = resultado*(pow(10, cuentaDigitos));
	//cout << "\n Intento de regresar al valor de resultado:" << resultado << "\n";

	double x;
	int suma2 = 0;

	for (x = (cuentaDigitos - 1); x >= 1; x--)
	{
		suma += (int)(resultado / pow(10, x));
		suma2 = (int)(resultado / pow(10, x));

		//cout << "Suma:" << suma << "\n\n";
		//cout << "Suma2:" << suma2 << "\n\n";

		resultado -= (suma2 * pow(10, x));
		//cout << "\n\n Resultado: " << resultado << "\n\n";

		suma2 = 0;
	}

	suma += resultado;

	//cout << "Suma:" << suma << "\n\n";
	//cout << "\n\n Resultado: " << resultado << "\n\n";

	cout << "y la suma de todos los digitos resultantes:" << suma << "\n\n";

}


int main()
{
	factorial();
}
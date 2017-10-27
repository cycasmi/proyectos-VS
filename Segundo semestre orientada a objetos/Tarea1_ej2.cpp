#include <iostream>
#include <math.h>
using namespace std;

void factorial()
{
	/*double resultado = 1;

	for (int i = 10; i >= 1; i--)
	{
	resultado *= i;
	}

	cout << "El factorial de 100 es " << resultado << ".\n";

	double s = 0, r;

	while (resultado>0)
	{

	}

	cout << "La suma de sus digitos es:" << s;*/
	//***********************************************************************************************************

	double suma = 0;

	double resultado = 1;

	for (int i = 40; i >= 1; i--)
	{
		resultado *= i;
	}

	cout << "El factorial de 100 es " << resultado << ".\n\n";

	double cuentaDigitos = 0;
	while (resultado >= 1)
	{
		++cuentaDigitos;
		resultado /= 10;
		cout << resultado << "\n";
	}

	cout << "Su numero de digitos es:" << cuentaDigitos;

	//********************************************************************************************
	double cuentaDigitos2;
	cuentaDigitos2 = pow(10, (cuentaDigitos - 1));
	cout << "\nEl valor de CuentaDigitos2 es:" << cuentaDigitos2 << "\n";

	//****************************************************************

	resultado = resultado*(pow(10, cuentaDigitos));
	cout << "\n Intento de regresar al valor de resultado:" << resultado << "\n";

	//resultado = resultado / cuentaDigitos2;
	//cout << "\n Numeros que cuentan:" << resultado << "\n";

	//***************************************************

	/*double x = (cuentaDigitos - 1);
	suma += (int)(resultado / pow(10, x));

	int suma2 = (int)(resultado / pow(10, x));

	cout << "Suma:" << suma << "\n\n";
	cout << "Suma2:" << suma2 << "\n\n";

	resultado -= (suma2 * pow(10, x));
	cout << "\n\n Resultado: " << resultado << "\n\n";

	suma2 = 0;

	//*****************************************
	suma += (int)(resultado / pow(10, (x-1)));
	suma2 = (int)(resultado / pow(10, (x-1)));
	cout << "Suma:" << suma << "\n\n";
	cout << "Suma2:" << suma2 << "\n\n";

	resultado -= (suma2 * pow(10, (x-1)));
	cout << "\n\n Resultado: " << resultado << "\n\n";*/


	//****************************************************

	double x;
	int suma2 = 0;

	for (x = (cuentaDigitos - 1); x >= 1; x--)
	{
		suma += (int)(resultado / pow(10, x));
		suma2 = (int)(resultado / pow(10, x));

		cout << "Suma:" << suma << "\n\n";
		cout << "Suma2:" << suma2 << "\n\n";

		resultado -= (suma2 * pow(10, x));
		cout << "\n\n Resultado: " << resultado << "\n\n";

		suma2 = 0;
	}

	suma += resultado;

	cout << "Suma:" << suma << "\n\n";
	cout << "\n\n Resultado: " << resultado << "\n\n";

}


int main()
{
	factorial();
}
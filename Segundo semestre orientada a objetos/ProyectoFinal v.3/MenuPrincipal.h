#include "Casos.h"

void menuPrincial()
{
	char eleccion;
	menuFecha();
	Fecha actual;
	
	cout << endl << endl;

	menuOriginal();
	cin >> eleccion;

	casoMenuOriginal(eleccion);

}
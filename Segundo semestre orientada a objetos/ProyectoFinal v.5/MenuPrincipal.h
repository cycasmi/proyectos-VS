#include "Casos.h"

void menuPrincial()
{
	char eleccion;
	int *numeroElem, *numeroTotal;
	numeroElem = new int;
	numeroTotal = new int;
	numeroTotal = 0;

	menuOriginal();
	cin >> eleccion;
	casoMenuOriginal(eleccion, numeroElem);
	//cout << "NumeroElem:" << *numeroElem;
	

}
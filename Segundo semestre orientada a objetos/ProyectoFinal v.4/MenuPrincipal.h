#include "Casos.h"

void menuPrincial()
{
	char eleccion;
	int *numeroElem;
	numeroElem = new int;

	menuOriginal();
	cin >> eleccion;
	casoMenuOriginal(eleccion, numeroElem);
	//cout << "NumeroElem:" << *numeroElem;
	

}
#include <string>
#include "Lacteos.h"
#include "Leche.h"
#include "LecheCondensada.h"
#include "LecheDeslactosada.h"
#include "LecheEntera.h"
#include "LecheLight.h"
#include "Queso.h"
#include "QuesoAmarillo.h"
#include "QuesoOaxaca.h"
#include "QuesoPanela.h"
#include "QuesoParmesano.h"
#include "Yogur.h"
#include "YogurGriego.h"
#include "YogurLight.h"

#include "Menus.h"
#include "Casos.h"


int main()
{
	char eleccion = 'z';
	int *numeroDeElem[15] = { 0 }, *estadoDeCuenta[15] = {0};
	int cantidadAgregar = 0;
	double *costo[15], *precio[15];

	for (int i = 4; i < 14; i++)
	{
		*costo[i] = 5.5 + i;
		*precio[i] = *costo[i] * 2;
	}

	Almacen<Lacteos*> carrito;
	Almacen<Lacteos*> productos;
	Almacen<Lacteos*> eliminar;

	casoMenuFecha();
	casoMenuOriginal(carrito, productos, eliminar, eleccion, numeroDeElem[15], estadoDeCuenta[15], cantidadAgregar, costo[15], precio[15]);

	/*
	Lacteos *jamon = new Leche("Leche", 600, 8, 12, 05, 2015);
	Lacteos *pato = new Leche("Pato", 600, 5, 14, 05, 2015);
	jamon->imprimir();
	cout << jamon->caducidad(casoMenuFecha());
	cout << pato->caducidad(casoMenuFecha());
	*/

	return 0;
}


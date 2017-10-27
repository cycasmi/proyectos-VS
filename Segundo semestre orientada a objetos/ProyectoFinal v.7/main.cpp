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

//#include "Almacen.h"


int main()
{
	int numeroTotalElem = 0;
	char eleccion = 'z';
	int *numeroDeElem[15], *estadoDeCuenta[15];
	double *costo[15], *precio[15];

	casoMenuFecha();
	casoMenuOriginal(eleccion, numeroDeElem[15]);

	Lacteos *jamon = new Leche("Leche", 600, 8, 12, 05, 2015);
	Lacteos *pato = new Leche("Pato", 600, 5, 14, 05, 2015);
	jamon->imprimir();
	cout << jamon->caducidad(casoMenuFecha());
	cout << pato->caducidad(casoMenuFecha());

	//Almacen <Lacteos*> inventario;

	

	return 0;
}


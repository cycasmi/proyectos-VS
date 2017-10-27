#include <string>
#include "Personaje.h"
#include "Elemento.h"
#include "Heroe.h"
#include "Villano.h"
#include "Princesa.h"
#include "Secuaz.h"
#include "Almacen.h"

int main()
{
	Personaje* c1 = new Heroe("Shrek", 6);
	Personaje* c2 = new Princesa("Fiona", 9);
	Personaje* c3 = new Secuaz("Minion", 5);

	//c1->imprimir();

	Almacen <Elemento*> miAlmacen;
	miAlmacen.agregar(c1, 0);
	miAlmacen.agregar(c2, 1);
	miAlmacen.agregar(c3, 2);
	miAlmacen.bubblesort();
	miAlmacen.imprimir();
}
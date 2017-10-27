#include "Almacen.h"

template <class T>
void crearElemento(class A, int *numElem)
{
	Almacen<Lacteos*> producto;
	for (i = 0; i < *numElem; i++)
		producto[i] = new class A();
}

/*void anadirInventario(Almacen<Lacteos *> prod[], int *numElem, int *numTotal)
{
	Almacen <Lacteos*> inventario;
	for (int i = 0; i < *numElem; i++)
	{
		inventario.agregar(prod, i, *numTotal);
	}
}*/
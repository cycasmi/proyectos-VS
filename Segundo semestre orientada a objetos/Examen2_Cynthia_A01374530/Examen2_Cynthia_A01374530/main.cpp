#include <string>
#include "Auto.h"
#include "Convertible.h"
#include "Deportivo.h"
#include "Sedan.h"
#include "Almacen.h"

int main()
{
	Auto* a1 = new Convertible("Convertible", "a2", "azul", "automatico", "usado", 2014, 4, 4, 13000, 9000);
	a1->imprimir();
	a1->precioF(2015);
	a1->servicio();

	Convertible* a = dynamic_cast<Convertible*>(a1);
	if (a != 0)
	{
		a->techoA("si");
		a->techoT("rigido");
	}

	Auto* a2 = new Deportivo("Deportivo", "a3", "azul", "automatico", "usado", 2015, 4, 4, 10000, 9000);
	Auto* a3 = new Sedan("Sedan", "a2", "azul", "automatico", "usado", 2016, 4, 4, 20000, 9000);

	/*
	Almacen <Auto*> miAlmacen;
	miAlmacen.agregar(a1, 0);
	miAlmacen.agregar(a2, 1);
	miAlmacen.agregar(a3, 2);
	cout << "El numero de autos existentes en el Almacen es " << miAlmacen.elementos() << endl;
	//cout << "El auto buscado se encuenta en la posicion: " << miAlmacen.buscarAnio(2014);
	miAlmacen.imprimir();
	miAlmacen.ordenPrecio();
	cout << "*******************" << endl;
	miAlmacen.imprimir();
	cout << "*******************" << endl;
	//cout << miAlmacen.buscar("Sedan", &Auto::getNombre);
	*/
	return 0;
}
#include <iostream>
using namespace std;

void menuFecha()
{
	cout << "Ingrese la fecha de hoy\n";
	cout << "(dd/mm/aaaa)\n\n";
}

void menuOriginal()
{
	cout << "Como desea ingresar?\n\n";
	cout << "a: Administrador\n";
	cout << "b: Cliente\n";
}

void menuAdministrador()
{
	cout << "Seleccione la acción que desea hacer:\n";
	cout << "a: Abastecer tienda\n";
	cout << "b: Ver estado de cuenta\n";
	cout << "c: Ver inventario\n\n";

	cout << "d: Regresar\n";
}

void menuCliente()
{
	cout << "Que desea hacer?\n";
	cout << "a: Ver productos por categoria";
	cout << "b: Buscar un producto\n";
	cout << "c: Ver carrito de compras\n";

	cout << "d: Regresar\n";
}

void menuCategorias()
{
	cout << "Seleccione la categoria de su interes:\n";
	cout << "a: Leche";
	cout << "b: Queso\n";
	cout << "c: Yogur\n";

	cout << "d: Regresar\n";
}

void menuLecheAdm()
{
	cout << "a: Leche Condensada";
	cout << "b: Leche Deslactosada\n";
	cout << "c: Leche Entera\n";
	cout << "c: Leche Light\n";

	cout << "d: Regresar\n";
}

void menuQuesoAdm()
{
	cout << "a: Queso Amarillo";
	cout << "b: Queso Oaxaca\n";
	cout << "c: Queso Panela\n";
	cout << "c: Queso Parmesano\n";

	cout << "d: Regresar\n";
}

void menuYogurAdm()
{
	cout << "a: Yogur Griego";
	cout << "b: Yogur Light\n";

	cout << "d: Regresar\n";
}
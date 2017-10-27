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
	cout << "\nSeleccione la accion que desea hacer:\n";
	cout << "a: Abastecer tienda\n";
	cout << "b: Ver estado de cuenta\n";
	cout << "c: Ver inventario\n\n";
}

void menuCliente()
{
	cout << "\nQue desea hacer?\n";
	cout << "a: Ver productos por categoria\n";
	cout << "b: Buscar un producto\n";
	cout << "c: Ver carrito de compras\n";
}

void menuCategoriasAdm()
{
	cout << "\nSeleccione la categoria de su interes:\n";
	cout << "a: Leche\n";
	cout << "b: Queso\n";
	cout << "c: Yogur\n";
}

void menuLecheAdm()
{
	cout << "\na: Leche Condensada\n";
	cout << "b: Leche Deslactosada\n";
	cout << "c: Leche Entera\n";
	cout << "c: Leche Light\n";
}

void menuQuesoAdm()
{
	cout << "\na: Queso Amarillo\n";
	cout << "b: Queso Oaxaca\n";
	cout << "c: Queso Panela\n";
	cout << "c: Queso Parmesano\n";
}

void menuYogurAdm()
{
	cout << "\na: Yogur Griego\n";
	cout << "b: Yogur Light\n";
}

void menuCategoriasCli()
{
	cout << "\nSeleccione la categoria de su interes:\n";
	cout << "a: Leche\n";
	cout << "b: Queso\n";
	cout << "c: Yogur\n";
}

void menuLecheCli()
{
	cout << "\na: Leche Condensada\n";
	cout << "b: Leche Deslactosada\n";
	cout << "c: Leche Entera\n";
	cout << "c: Leche Light\n";
}

void menuQuesoCli()
{
	cout << "\na: Queso Amarillo\n";
	cout << "b: Queso Oaxaca\n";
	cout << "c: Queso Panela\n";
	cout << "c: Queso Parmesano\n";
}

void menuYogurCli()
{
	cout << "\na: Yogur Griego\n";
	cout << "b: Yogur Light\n";
}

void menuElementos()
{
	cout << "Cuantos elementos desea agregar?\n";
}
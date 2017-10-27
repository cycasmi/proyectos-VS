#include <iostream>
using namespace std;

void menuFecha()
{
	if (!system("cls")){} else system("clear");
	cout << "Ingrese la fecha de hoy\n";
	cout << "(dd/mm/aaaa)\n\n";
}


void menuOriginal()
{
	if (!system("cls")){} else system("clear");
	cout << "Como desea ingresar?\n\n";
	cout << "a: Administrador\n";
	cout << "b: Cliente\n\n";

	cout << "c: Regresar\n";
}

void menuAdministrador()
{
	if (!system("cls")){} else system("clear");
	cout << "\nSeleccione la accion que desea hacer:\n";
	cout << "a: Abastecer tienda\n";
	cout << "b: Ver estado de cuenta\n";
	cout << "c: Ver inventario\n\n";

	cout << "d: Regresar\n";
}

void menuCliente()
{
	if (!system("cls")){} else system("clear");
	cout << "\nQue desea hacer?\n";
	cout << "a: Ver productos por categoria\n";
	cout << "b: Buscar un producto\n";
	cout << "c: Ver carrito de compras\n\n";

	cout << "d: Regresar\n";
}

void menuCategoriasAdm()
{
	if (!system("cls")){} else system("clear");
	cout << "\nSeleccione la categoria de su interes:\n";
	cout << "a: Leche\n";
	cout << "b: Queso\n";
	cout << "c: Yogur\n\n";

	cout << "d: Regresar\n";
}

void menuLecheAdm()
{
	if (!system("cls")){} else system("clear");
	cout << "\na: Leche Condensada\n";
	cout << "b: Leche Deslactosada\n";
	cout << "c: Leche Entera\n";
	cout << "d: Leche Light\n\n";

	cout << "e: Regresar\n";
}

void menuQuesoAdm()
{
	if (!system("cls")){} else system("clear");
	cout << "\na: Queso Amarillo\n";
	cout << "b: Queso Oaxaca\n";
	cout << "c: Queso Panela\n";
	cout << "d: Queso Parmesano\n\n";

	cout << "e: Regresar\n";
}

void menuYogurAdm()
{
	if (!system("cls")){} else system("clear");
	cout << "\na: Yogur Griego\n";
	cout << "b: Yogur Light\n\n";

	cout << "c: Regresar\n";
}

void menuCategoriasCli(int numEle[])
{
	if (!system("cls")){} else system("clear");
	cout << "\nSeleccione la categoria de su interes:\n";
	if (numEle[1] >= 1)
		cout << "a: Leche\n";
	if (numEle[2] >= 1)
		cout << "b: Queso\n";
	if (numEle[3] >= 1)
		cout << "c: Yogur\n\n";

	else if ((numEle[1] + numEle[2] + numEle[3]) == 0)
		cout << "Por el momento, no hay productos.\n Vuelva otro dia.\n\n";

	cout << "d: Regresar\n";
}

void menuLecheCli(int numEle[])
{
	if (!system("cls")){} else system("clear");
	if (numEle[4] >= 1)
		cout << "\na: Leche Condensada\n";
	if (numEle[5] >= 1)
		cout << "b: Leche Deslactosada\n";
	if (numEle[6] >= 1)
		cout << "c: Leche Entera\n";
	if (numEle[7] >= 1)
		cout << "d: Leche Light\n\n";

	cout << "d: Regresar\n";
}

void menuQuesoCli(int numEle[])
{
	if (!system("cls")){} else system("clear");
	if (numEle[8] >= 1)
		cout << "\na: Queso Amarillo\n";
	if (numEle[9] >= 1)
		cout << "b: Queso Oaxaca\n";
	if (numEle[10] >= 1)
		cout << "c: Queso Panela\n";
	if (numEle[11] >= 1)
		cout << "d: Queso Parmesano\n";

	cout << "e: Regresar\n";
}

void menuYogurCli(int numEle[])
{
	if (!system("cls")){} else system("clear");
	if (numEle[12] >= 1)
		cout << "\na: Yogur Griego\n";
	if (numEle[13] >= 1)
		cout << "b: Yogur Light\n\n";

	cout << "c: Regresar\n";
}

void menuElementos()
{
	cout << "Cuantos elementos desea agregar?\n";
}

void menuBuscar()
{
	cout << "Escriba la palabra que desea buscar:\n";
}


void menuPagar()
{
	if (!system("cls")){} else system("clear");
	cout << "Cual va a ser su forma de pago?\n";
	cout << "a: Efectivo\n";
	cout << "b: Taerjeta debito\n";
	cout << "c: Tarjeta credito\n\n";

	cout << "d: Regresar\n";
}
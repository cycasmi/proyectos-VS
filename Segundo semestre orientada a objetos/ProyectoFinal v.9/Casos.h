//#include "Funciones.h"

Fecha casoMenuFecha();
void casoMenuOriginal(Almacen<Lacteos*>, Almacen<Lacteos*>, Almacen<Lacteos*>, char, int *, int *, int, double *, double *);
void casoMenuAdministrador(Almacen<Lacteos*>,Almacen<Lacteos*>, Almacen<Lacteos*>, char, int *, int *, int, double *, double *);
void casoMenuCategoriasAdm(Almacen<Lacteos*>,Almacen<Lacteos*>, Almacen<Lacteos*>, char, int *, int *, int, double *, double *);
void casoMenuLecheAdm(Almacen<Lacteos*>,Almacen<Lacteos*>, Almacen<Lacteos*>, char, int *, int *, int, double *, double *);
void casoMenuQuesoAdm(Almacen<Lacteos*>,Almacen<Lacteos*>, Almacen<Lacteos*>, char, int *, int *, int, double *, double *);
void casoMenuYogurAdm(Almacen<Lacteos*>,Almacen<Lacteos*>, Almacen<Lacteos*>, char, int *, int *, int, double *, double *);

void casoMenuCliente(Almacen<Lacteos*>,Almacen<Lacteos*>, Almacen<Lacteos*>, char, int *, int *, int, double *, double *);
void casoMenuCategoriasCli(Almacen<Lacteos*>,Almacen<Lacteos*>, Almacen<Lacteos*>, char, int *, int *, int, double *, double *);
void casoMenuLecheCli(Almacen<Lacteos*>,Almacen<Lacteos*>, Almacen<Lacteos*>, char, int *, int *, int, double *, double *);
void casoMenuQuesoCli(Almacen<Lacteos*>,Almacen<Lacteos*>, Almacen<Lacteos*>, char, int *, int *, int, double *, double *);
void casoMenuYogurCli(Almacen<Lacteos*>,Almacen<Lacteos*>, Almacen<Lacteos*>, char, int *, int *, int, double *, double *);


Fecha casoMenuFecha()
{
	menuFecha();
	Fecha actual;
	cout << endl << endl;

	return actual;
}

void casoMenuOriginal(Almacen<Lacteos*> a, Almacen<Lacteos*> b, Almacen<Lacteos*> c, char ele, int numElem[], int cuenta[], int cantidad, double costo[], double precio[])
{
	do
	{

		menuOriginal();

		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuAdministrador();
			casoMenuAdministrador(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);
			break;

		case 'b':
			menuCliente();
			casoMenuCliente(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);
			break;

		case 'c':
			casoMenuFecha();
			break;

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuAdministrador(Almacen<Lacteos*> a, Almacen<Lacteos*> b, Almacen<Lacteos*> c, char ele, int numElem[], int cuenta[], int cantidad, double costo[], double precio[])
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuCategoriasAdm();
			casoMenuCategoriasAdm(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);
			break;

		case 'b':
			break;

		case 'c':
			break;

		case 'd':
			casoMenuOriginal(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);
			break;

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');

}

void casoMenuCategoriasAdm(Almacen<Lacteos*> a, Almacen<Lacteos*> b, Almacen<Lacteos*> c, char ele, int numElem[], int cuenta[], int cantidad, double costo[], double precio[])
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuLecheAdm();
			casoMenuLecheAdm(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);
			break;

		case 'b':
			menuQuesoAdm();
			casoMenuQuesoAdm(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);
			break;

		case 'c':
			menuYogurAdm();
			casoMenuYogurAdm(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);
			break;

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');

}

void casoMenuLecheAdm(Almacen<Lacteos*> a, Almacen<Lacteos*> b, Almacen<Lacteos*> c, char ele, int numElem[], int cuenta[], int cantidad, double costo[], double precio[])
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
		case 'b':
		case 'c':
		case 'd':
			menuElementos();
			break;

		case 'e':
			casoMenuCategoriasAdm(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuQuesoAdm(Almacen<Lacteos*> a, Almacen<Lacteos*> b, Almacen<Lacteos*> c, char ele, int numElem[], int cuenta[], int cantidad, double costo[], double precio[])
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
		case 'b':
		case 'c':
		case 'd':
			menuElementos();
			break;

		case 'e':
			casoMenuCategoriasAdm(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuYogurAdm(Almacen<Lacteos*> a, Almacen<Lacteos*> b, Almacen<Lacteos*> c, char ele, int numElem[], int cuenta[], int cantidad, double costo[], double precio[])
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
		case 'b':
			menuElementos();
			break;

		case 'c':
			casoMenuCategoriasAdm(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');

}

void casoMenuCliente(Almacen<Lacteos*> a, Almacen<Lacteos*> b, Almacen<Lacteos*> c, char ele, int numElem[], int cuenta[], int cantidad, double costo[], double precio[])
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuCategoriasCli(numElem);
			casoMenuCategoriasCli(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);
			break;

		case 'b':

			break;

		case 'c':

			break;

		case 'd':
			casoMenuOriginal(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);
			break;

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuCategoriasCli(Almacen<Lacteos*> a, Almacen<Lacteos*> b, Almacen<Lacteos*> c, char ele, int numElem[], int cuenta[], int cantidad, double costo[], double precio[])
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuLecheCli(numElem);
			casoMenuLecheCli(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);
			break;
		case 'b':
			menuQuesoCli(numElem);
			casoMenuQuesoCli(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);
			break;
		case 'c':
			menuYogurCli(numElem);
			casoMenuYogurCli(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);
			break;

		case 'd':
			casoMenuCategoriasCli(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuLecheCli(Almacen<Lacteos*> a, Almacen<Lacteos*> b, Almacen<Lacteos*> c, char ele, int numElem[], int cuenta[], int cantidad, double costo[], double precio[])
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
		case 'b':
		case 'c':
		case 'd':

			break;

		case 'e':
			casoMenuCategoriasCli(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuQuesoCli(Almacen<Lacteos*> a, Almacen<Lacteos*> b, Almacen<Lacteos*> c, char ele, int numElem[], int cuenta[], int cantidad, double costo[], double precio[])
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
		case 'b':
		case 'c':
		case 'd':

			break;

		case 'e':
			casoMenuCategoriasCli(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuYogurCli(Almacen<Lacteos*> a, Almacen<Lacteos*> b, Almacen<Lacteos*> c, char ele, int numElem[], int cuenta[], int cantidad, double costo[], double precio[])
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
		case 'b':

			break;

		case 'c':
			casoMenuCategoriasCli(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');

}
#include "Funciones.h"

Fecha casoMenuFecha();
void casoMenuOriginal(char, int *, int);
void casoMenuAdministrador(char, int *, int);
void casoMenuCategoriasAdm(char, int *, int);
void casoMenuLecheAdm(char, int *, int);
void casoMenuQuesoAdm(char, int *, int);
void casoMenuYogurAdm(char, int *, int);

void casoMenuCliente(char, int *, int);
void casoMenuCategoriasCli(char, int *, int);
void casoMenuLecheCli(char, int *, int);
void casoMenuQuesoCli(char, int *, int);
void casoMenuYogurCli(char, int *, int);


Fecha casoMenuFecha()
{
	menuFecha();
	Fecha actual;
	cout << endl << endl;

	return actual;
}

void casoMenuOriginal(char ele, int numElem[], int id)
{
	do
	{

		menuOriginal();

		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuAdministrador();
			casoMenuAdministrador(ele, numElem, id);
			break;

		case 'b':
			menuCliente();
			casoMenuCliente(ele, numElem, id);
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

void casoMenuAdministrador(char ele, int numElem[], int id)
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuCategoriasAdm();
			casoMenuCategoriasAdm(ele, numElem, id);
			break;

		case 'b':
			break;

		case 'c':
			break;

		case 'd':
			casoMenuOriginal(ele, numElem, id);
			break;

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');

}

void casoMenuCategoriasAdm(char ele, int numElem[], int id)
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuLecheAdm();
			casoMenuLecheAdm(ele, numElem, id);
			break;

		case 'b':
			menuQuesoAdm();
			casoMenuQuesoAdm(ele, numElem, id);
			break;

		case 'c':
			menuYogurAdm();
			casoMenuYogurAdm(ele, numElem, id);
			break;

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');

}

void casoMenuLecheAdm(char ele, int numElem[], int id)
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
			casoMenuCategoriasAdm(ele, numElem, id);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuQuesoAdm(char ele, int numElem[], int id)
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
			casoMenuCategoriasAdm(ele, numElem, id);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuYogurAdm(char ele, int numElem[], int id)
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
			casoMenuCategoriasAdm(ele, numElem, id);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');

}

void casoMenuCliente(char ele, int numElem[], int id)
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuCategoriasCli(numElem);
			casoMenuCategoriasCli(ele, numElem, id);
			break;

		case 'b':
			
			break;

		case 'c':
			
			break;

		case 'd':
			casoMenuOriginal(ele, numElem, id);
			break;

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuCategoriasCli(char ele, int numElem[], int id)
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuLecheCli(numElem);
			casoMenuLecheCli(ele, numElem, id);
			break;
		case 'b':
			menuQuesoCli(numElem);
			casoMenuQuesoCli(ele, numElem, id);
			break;
		case 'c':
			menuYogurCli(numElem);
			casoMenuYogurCli(ele, numElem, id);
			break;

		case 'd':
			casoMenuCategoriasCli(ele, numElem, id);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuLecheCli(char ele, int numElem[], int id)
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
			casoMenuCategoriasCli(ele, numElem, id);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuQuesoCli(char ele, int numElem[], int id)
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
			casoMenuCategoriasCli(ele, numElem, id);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuYogurCli(char ele, int numElem[], int id)
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
			casoMenuCategoriasCli(ele, numElem, id);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');

}
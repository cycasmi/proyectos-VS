#include "Funciones.h"

Fecha casoMenuFecha();
void casoMenuOriginal(char, int *);
void casoMenuAdministrador(char, int *);
void casoMenuCategoriasAdm(char, int *);
void casoMenuLecheAdm(char, int *);
void casoMenuQuesoAdm(char, int *);
void casoMenuYogurAdm(char, int *);

void casoMenuCliente(char, int *);
void casoMenuCategoriasCli(char, int *);
void casoMenuLecheCli(char, int *);
void casoMenuQuesoCli(char, int *);
void casoMenuYogurCli(char, int *);


Fecha casoMenuFecha()
{
	menuFecha();
	Fecha actual;
	cout << endl << endl;

	return actual;
}

void casoMenuOriginal(char ele, int numElem[])
{
	do
	{

		menuOriginal();

		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuAdministrador();
			casoMenuAdministrador(ele, numElem);
			break;

		case 'b':
			menuCliente();
			casoMenuCliente(ele, numElem);
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

void casoMenuAdministrador(char ele, int numElem[])
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuCategoriasAdm();
			casoMenuCategoriasAdm(ele, numElem);
			break;

		case 'b':
			break;

		case 'c':
			break;

		case 'd':
			casoMenuOriginal(ele, numElem);
			break;

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');

}

void casoMenuCategoriasAdm(char ele, int numElem[])
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuLecheAdm();
			casoMenuLecheAdm(ele, numElem);
			break;

		case 'b':
			menuQuesoAdm();
			casoMenuQuesoAdm(ele, numElem);
			break;

		case 'c':
			menuYogurAdm();
			casoMenuYogurAdm(ele, numElem);
			break;

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');

}

void casoMenuLecheAdm(char ele, int numElem[])
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
			casoMenuCategoriasAdm(ele, numElem);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuQuesoAdm(char ele, int numElem[])
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
			casoMenuCategoriasAdm(ele, numElem);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuYogurAdm(char ele, int numElem[])
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
			casoMenuCategoriasAdm(ele, numElem);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');

}

void casoMenuCliente(char ele, int numElem[])
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuCategoriasCli(numElem);
			casoMenuCategoriasCli(ele, numElem);
			break;

		case 'b':
			
			break;

		case 'c':
			
			break;

		case 'd':
			casoMenuOriginal(ele, numElem);
			break;

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuCategoriasCli(char ele, int numElem[])
{
	do
	{
		cin >> ele;

		switch (ele)
		{
		case 'a':
			menuLecheCli(numElem);
			casoMenuLecheCli(ele, numElem);
			break;
		case 'b':
			menuQuesoCli(numElem);
			casoMenuQuesoCli(ele, numElem);
			break;
		case 'c':
			menuYogurCli(numElem);
			casoMenuYogurCli(ele, numElem);
			break;

		case 'd':
			casoMenuCategoriasCli(ele, numElem);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuLecheCli(char ele, int numElem[])
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
			casoMenuCategoriasCli(ele, numElem);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuQuesoCli(char ele, int numElem[])
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
			casoMenuCategoriasCli(ele, numElem);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');
}

void casoMenuYogurCli(char ele, int numElem[])
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
			casoMenuCategoriasCli(ele, numElem);

		default:
			cout << "Opcion inexistente. Seleccione otra:\n";
			ele = 'x';
			break;
		}

	} while (ele == 'x');

}
#include "Funciones.h"

void casoMenuYogurCli(char ele, int *elem)
{
	if (ele == 'a')
	{
		cout << "Te adro";
	}

	if (ele == 'b')
	{
		cout << "Te adro";
	}

}

void casoMenuQuesoCli(char ele, int *elem)
{
	if (ele == 'a')
	{
		cout << "Te adro";
	}

	if (ele == 'b')
	{
		cout << "Te adro";
	}

	if (ele == 'c')
	{
		cout << "Te adro";
	}
}

void casoMenuLecheCli(char ele, int *elem)
{
	if (ele == 'a')
	{
		cout << "Te adro";
	}

	if (ele == 'b')
	{
		cout << "Te adro";
	}

	if (ele == 'c')
	{
		cout << "Te adro";
	}
}

void casoMenuCategoriasCli(char ele, int *elem)
{
	if (ele == 'a')
	{
		menuLecheCli();
		cin >> ele;
		casoMenuLecheCli(ele, elem);

	}

	if (ele == 'b')
	{
		menuQuesoCli();
		cin >> ele;
		casoMenuQuesoCli(ele, elem);
	}

	if (ele == 'c')
	{
		menuYogurCli();
		cin >> ele;
		casoMenuYogurCli(ele, elem);
	}
}

void casoMenuCliente(char ele, int *elem)
{
	if (ele == 'a')
	{
		menuCategoriasCli();
		cin >> ele;
	}

	if (ele == 'b')
	{
		cout << "Te adro";
	}

	if (ele == 'c')
	{
		cout << "Te adro";
	}
}

void casoMenuYogurAdm(char ele, int *elem)
{
	if (ele == 'a')
	{
		menuElementos();
		cin >> *elem;
	}

	if (ele == 'b')
	{
		menuElementos();
		cin >> *elem;
	}

}

void casoMenuQuesoAdm(char ele, int *elem)
{
	if (ele == 'a')
	{
		menuElementos();
		cin >> *elem;
	}

	if (ele == 'b')
	{
		menuElementos();
		cin >> *elem;
	}

	if (ele == 'c')
	{
		menuElementos();
		cin >> *elem;;
	}
}

void casoMenuLecheAdm(char ele, int *elem)
{
	if (ele == 'a')
	{
		menuElementos();
		cin >> *elem;
	}

	if (ele == 'b')
	{
		menuElementos();
		cin >> *elem;
	}

	if (ele == 'c')
	{
		menuElementos();
		cin >> *elem;
	}
}

void casoMenuCategoriasAdm(char ele, int *elem)
{
	if (ele == 'a')
	{
		menuLecheAdm();
		cin >> ele;
		casoMenuLecheAdm(ele, elem);

	}

	if (ele == 'b')
	{
		menuQuesoAdm();
		cin >> ele;
		casoMenuQuesoAdm(ele, elem);
	}

	if (ele == 'c')
	{
		menuYogurAdm();
		cin >> ele;
		casoMenuYogurAdm(ele, elem);
	}
}

void casoMenuAdministrador(char ele, int *elem)
{
	if (ele == 'a')
	{
		menuCategoriasAdm();
		cin >> ele;
		casoMenuCategoriasAdm(ele, elem);
	}

	if (ele == 'b')
	{
		cout << "Te adro";
	}

	if (ele == 'c')
	{
		cout << "Perfecto!";
	}
}

void casoMenuOriginal(char ele, int *elem)
{
	if (ele == 'a')
	{
		menuAdministrador();
		cin >> ele;
		casoMenuAdministrador(ele, elem);
	}

	if (ele == 'b')
	{
		menuCliente();
		cin >> ele;
		casoMenuCliente(ele, elem);
	}
}


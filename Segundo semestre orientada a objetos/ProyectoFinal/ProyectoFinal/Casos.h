Fecha casoMenuFecha();
void casoMenuOriginal(Almacen<Lacteos*>, Almacen<Lacteos*>, Almacen<Lacteos*>, char, int [], int[], int, double[] , double[] );
void casoMenuAdministrador(Almacen<Lacteos*>, Almacen<Lacteos*>, Almacen<Lacteos*>, char, int [], int[], int, double[] , double[] );
void casoMenuCategoriasAdm(Almacen<Lacteos*>, Almacen<Lacteos*>, Almacen<Lacteos*>, char, int [], int[], int, double[] , double[] );
void casoMenuLecheAdm(Almacen<Lacteos*>, Almacen<Lacteos*>, Almacen<Lacteos*>, char, int [], int[], int, double[] , double[] );
void casoMenuQuesoAdm(Almacen<Lacteos*>, Almacen<Lacteos*>, Almacen<Lacteos*>, char, int [], int[], int, double[] , double[] );
void casoMenuYogurAdm(Almacen<Lacteos*>, Almacen<Lacteos*>, Almacen<Lacteos*>, char, int [], int[], int, double[] , double[] );

void casoMenuCliente(Almacen<Lacteos*>, Almacen<Lacteos*>, Almacen<Lacteos*>, char, int [], int[], int, double[] , double[] );
void casoMenuCategoriasCli(Almacen<Lacteos*>, Almacen<Lacteos*>, Almacen<Lacteos*>, char, int [], int[], int, double[] , double[] );
void casoMenuLecheCli(Almacen<Lacteos*>, Almacen<Lacteos*>, Almacen<Lacteos*>, char, int [], int[], int, double[] , double[] );
void casoMenuQuesoCli(Almacen<Lacteos*>, Almacen<Lacteos*>, Almacen<Lacteos*>, char, int [], int[], int, double[] , double[] );
void casoMenuYogurCli(Almacen<Lacteos*>, Almacen<Lacteos*>, Almacen<Lacteos*>, char, int [], int[], int, double[] , double[] );


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
			cout << "Estado de cuenta\n\n";
			cout << "Total de articulos vendidos: " << cuenta[0] << endl;
			cout << "Total de leches vendidas: " << cuenta[1] << endl;
			cout << "Total de quesos vendidos: " << cuenta[2] << endl;
			cout << "Total de yogures vendidos: " << cuenta[3] << endl;
			cout << "Total de leches condensada vendida: " << cuenta[4] << endl;
			cout << "Total de leches deslactosadas vendidas: " << cuenta[5] << endl;
			cout << "Total de leches enteras vendidas: " << cuenta[6] << endl;
			cout << "Total de leches lights vendidas: " << cuenta[7] << endl;
			cout << "Total de quesos amarillos vendidos: " << cuenta[8] << endl;
			cout << "Total de quesos oaxacas vendidos: " << cuenta[9] << endl;
			cout << "Total de quesos panelas vendidos: " << cuenta[10] << endl;
			cout << "Total de quesos parmesanos vendidos: " << cuenta[11] << endl;
			cout << "Total de yogures griegos vendidos: " << cuenta[12] << endl;
			cout << "Total de yogures lights vendidos: " << cuenta[13] << endl;
			for (int i = 4; i < 13; i++)
				cuenta[14] += (int)(precio[i] - costo[i])*cuenta[i];
			cout << "Total de ganancias: " << cuenta[14] << endl;
			break;

		case 'c':
			cout << "Inventario\n\n";
			cout << "Total de articulos: " << numElem[0] << endl;
			cout << "Total de leches: " << numElem[1] << endl;
			cout << "Total de quesos: " << numElem[2] << endl;
			cout << "Total de yogures: " << numElem[3] << endl;
			cout << "Total de leches condensada: " << numElem[4] << endl;
			cout << "Total de leches deslactosadas: " << numElem[5] << endl;
			cout << "Total de leches enteras: " << numElem[6] << endl;
			cout << "Total de leches lights: " << numElem[7] << endl;
			cout << "Total de quesos amarillos: " << numElem[8] << endl;
			cout << "Total de quesos oaxacas: " << numElem[9] << endl;
			cout << "Total de quesos panelas: " << numElem[10] << endl;
			cout << "Total de quesos parmesanos: " << numElem[11] << endl;
			cout << "Total de yogures griegos: " << numElem[12] << endl;
			cout << "Total de yogures lights: " << numElem[13] << endl;
			cout << "Total de prod. caducados: " << numElem[14] << endl;
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
			menuElementos();
			cin >> cantidad;
			b.agregar(numElem, costo, precio, 4, cantidad);
			//ele = 'w';
			break;
		case 'b':
			menuElementos();
			cin >> cantidad;
			b.agregar(numElem, costo, precio, 5, cantidad);
			ele = 'w';
			break;
		case 'c':
			menuElementos();
			cin >> cantidad;
			b.agregar(numElem, costo, precio, 6, cantidad);
			ele = 'w';
			break;
		case 'd':
			menuElementos();
			cin >> cantidad;
			b.agregar(numElem, costo, precio, 7, cantidad);
			ele = 'w';
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
			menuElementos();
			cin >> cantidad;
			b.agregar(numElem, costo, precio, 8, cantidad);
			ele = 'w';
			break;
		case 'b':
			menuElementos();
			cin >> cantidad;
			b.agregar(numElem, costo, precio, 9, cantidad);
			ele = 'w';
			break;
		case 'c':
			menuElementos();
			cin >> cantidad;
			b.agregar(numElem, costo, precio, 10, cantidad);
			ele = 'w';
			break;
		case 'd':
			menuElementos();
			cin >> cantidad;
			b.agregar(numElem, costo, precio, 11, cantidad);
			ele = 'w';
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
			menuElementos();
			cin >> cantidad;
			b.agregar(numElem, costo, precio, 12, cantidad);
			ele = 'w';
			break;
		case 'b':
			menuElementos();
			cin >> cantidad;
			b.agregar(numElem, costo, precio, 13, cantidad);
			ele = 'w';
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
		string d;

		switch (ele)
		{
		case 'a':
			menuCategoriasCli(numElem);
			casoMenuCategoriasCli(a, b, c, ele, numElem, cuenta, cantidad, costo, precio);
			break;

		case 'b':
			cout << "Escriba la palabra que desea buscar:\n";
			cin >> d;
			//a.buscarString(d);

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
			menuElementos();
			cin >> cantidad;
			a.comprar(numElem, cuenta, costo, precio, 4, cantidad);
			ele = 'w';
			break;
		case 'b':
			menuElementos();
			cin >> cantidad;
			a.comprar(numElem, cuenta, costo, precio, 5, cantidad);
			ele = 'w';
			break;
		case 'c':
			menuElementos();
			cin >> cantidad;
			a.comprar(numElem, cuenta, costo, precio, 6, cantidad);
			ele = 'w';
			break;
		case 'd':
			menuElementos();
			cin >> cantidad;
			a.comprar(numElem, cuenta, costo, precio, 7, cantidad);
			ele = 'w';
			break;

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
			menuElementos();
			cin >> cantidad;
			a.comprar(numElem, cuenta, costo, precio, 8, cantidad);
			ele = 'w';
			break;
		case 'b':
			menuElementos();
			cin >> cantidad;
			a.comprar(numElem, cuenta, costo, precio, 9, cantidad);
			ele = 'w';
			break;
		case 'c':
			menuElementos();
			cin >> cantidad;
			a.comprar(numElem, cuenta, costo, precio, 10, cantidad);
			ele = 'w';
			break;
		case 'd':
			menuElementos();
			cin >> cantidad;
			a.comprar(numElem, cuenta, costo, precio, 11, cantidad);
			ele = 'w';
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
			menuElementos();
			cin >> cantidad;
			a.comprar(numElem, cuenta, costo, precio, 12, cantidad);
			ele = 'w';
			break;
		case 'b':
			menuElementos();
			cin >> cantidad;
			a.comprar(numElem, cuenta, costo, precio, 13, cantidad);
			ele = 'w';
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
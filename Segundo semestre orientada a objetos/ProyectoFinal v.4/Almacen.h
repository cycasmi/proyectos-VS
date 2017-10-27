template <class T>
class Almacen
{
private:
	T* almacen;
	int size;
	int numElems;

public:
	Almacen()
	{
		size = 10;
		almacen = new T[size];
		numElems = 0;
	}

	int elementos()
	{
		return numElems;
	}

	void agregar(T elemento, int pos)
	{
		almacen[pos] = elemento;
		numElems++;

		if (numElems == size)
		{
			T *newAlmacen = new T[size + 10]; //Se definió nuevo arreglo. Ahora se debe copiar los elementos a éste.
			for (int i = 0; i < numElems; i++)
			{
				newAlmacen[i] = almacen[i];
			}

			delete[]almacen; //Ahora borramos este que no nos sirve, el apuntador;
			almacen = newAlmacen;
		}

	}

	void imprimir()
	{
		for (int i = 0; i < (numElems); i++)
		{
			almacen[i]->imprimir();
		}
	}


	void ordenAnio()
	{
		T c;

		for (int a = 0; a < numElems; a++)
		{
			for (int b = 1; b < (numElems - a); b++)
			{
				if ((almacen[b - 1]->getAnio()) < (almacen[b]->getAnio()))
				{
					c = almacen[b - 1];
					almacen[b - 1] = almacen[b];
					almacen[b] = c;
				}
			}
		}
	}

	void ordenPrecio()
	{
		T c;

		for (int a = 0; a < numElems; a++)
		{
			for (int b = 1; b < (numElems - a); b++)
			{
				if ((almacen[b - 1]->getPrecio()) >(almacen[b]->getPrecio()))
				{
					c = almacen[b - 1];
					almacen[b - 1] = almacen[b];
					almacen[b] = c;
				}
			}
		}
	}

	int buscarAnio(int anio)
	{
		for (int i = 0; i < numElems; i++)
		{
			//Se le pone flechita pork el arreglo tiene apuntadores
			//como en graphic no tiene getName, solo lo tienen los personajes, almacen no puede acceder. Para hacerlo hacemos un dynamic cast
			//if (name == almacen[i]->getName())

			//convirtiendo del padre al hijo
			Auto* temporal = dynamic_cast<Auto*> (almacen[i]);

			if (temporal != 0)//Esto es para evitar un segmentation fault
			{
				//temporal ya es un personaje
				if (anio == temporal->getAnio())
				{
					return i;
				}
			}
			else
				cout << "No se encontro el anio " << anio << endl;

		}

		return 0;
	}



	int buscarModelo(string modelo)
	{
		for (int i = 0; i < numElems; i++)
		{
			//Se le pone flechita pork el arreglo tiene apuntadores
			//como en graphic no tiene getName, solo lo tienen los personajes, almacen no puede acceder. Para hacerlo hacemos un dynamic cast
			//if (name == almacen[i]->getName())

			//convirtiendo del padre al hijo
			Auto* temporal = dynamic_cast<Auto*> (almacen[i]);

			if (temporal != 0)//Esto es para evitar un segmentation fault
			{
				//temporal ya es un personaje
				if (modelo == temporal->getModelo())
				{
					return i;
				}
			}
			else
				cout << "No se encontro el anio " << modelo << endl;

		}

		return 0;
	}

	int eliminarElem(int pos)
	{
		delete almacen[pos];
	}

	int eliminarLast(int pos)
	{
		delete almacen[numElems - 1];
		numElems--;
	}
};
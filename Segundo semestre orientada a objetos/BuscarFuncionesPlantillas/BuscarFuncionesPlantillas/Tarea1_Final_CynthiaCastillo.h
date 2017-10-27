#include "Auto.h"

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

	template <class Q, class W>
	void orden(Q orden, W metodo)
	{
		T c;

		for (int a = 0; a < numElems; a++)
		{
			for (int b = 1; b < (numElems - a); b++)
			{
				if (orden == "ascendente")
				{
					if ((almacen[b - 1]->*metodo)()) >(almacen[b]->*metodo)()))
					{
						c = almacen[b - 1];
						almacen[b - 1] = almacen[b];
						almacen[b] = c;
					}
				}

				if (orden == "descendente")
				{
					if ((almacen[b - 1]->*metodo)()) < (almacen[b]->*metodo)()))
					{
						c = almacen[b - 1];
						almacen[b - 1] = almacen[b];
						almacen[b] = c;
					}
				}
			}
		}
	}

	template <class Q, class W>
	int buscar(Q objeto, W metodo)
	{
		
		for (int i = 0; i < numElems; i++)
		{
			Auto* temporal = dynamic_cast<Auto*> (almacen[i]);

			if (temporal != 0)//Esto es para evitar un segmentation fault
			{
				if (objeto == (temporal->*metodo)())
				{
					return i;
				}
			}
			else
				cout << "No se encontro el elemnto" << endl;

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
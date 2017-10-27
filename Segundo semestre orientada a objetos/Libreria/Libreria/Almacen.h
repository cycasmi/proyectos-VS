#include "Personaje.h"

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

	void imprimir(string nombre)
	{
		for (int i = 0; i < numElems; i++)
		{
			//Se le pone flechita pork el arreglo tiene apuntadores
			//como en graphic no tiene getName, solo lo tienen los personajes, almacen no puede acceder. Para hacerlo hacemos un dynamic cast
			//if (name == almacen[i]->getName())

			//convirtiendo del padre al hijo
			Personaje* temporal = dynamic_cast<Personaje*> (almacen[i]);

			if (temporal != 0)//Esto es para evitar un segmentation fault
			{
				//temporal ya es un personaje
				if (name == temporal->getName())
				{
					almacen[i]->imprimir();
				}
			}

		}

		if (temporal == 0)
			cout << "No se encontro a " << name << endl;

		return 0;
	}

	void bubblesort()
	{
		T c;

		for (int a = 0; a < numElems; a++)
		{
			for (int b = 1; b < (numElems - a); b++)
			{
				if ((almacen[b - 1]->getPopularidad()) < (almacen[b]->getPopularidad()))
				{
					c = almacen[b - 1];
					almacen[b - 1] = almacen[b];
					almacen[b] = c;
				}
			}
		}
	}

	int buscar(string name)
	{
		for (int i = 0; i < numElems; i++)
		{
			//Se le pone flechita pork el arreglo tiene apuntadores
			//como en graphic no tiene getName, solo lo tienen los personajes, almacen no puede acceder. Para hacerlo hacemos un dynamic cast
			//if (name == almacen[i]->getName())

			//convirtiendo del padre al hijo
			Personaje* temporal = dynamic_cast<Personaje*> (almacen[i]);

			if (temporal != 0)//Esto es para evitar un segmentation fault
			{
				//temporal ya es un personaje
				if (name == temporal->getName())
				{
					return i;
				}
			}

		}
		
		if (temporal == 0)
			cout << "No se encontro a " << name << endl;

		return 0;
	}

	int eliminar(string name)
	{
		for (int i = 0; i < numElems; i++)
		{
			Personaje* temporal = dynamic_cast<Personaje*> (almacen[i]);

			if (temporal != 0)//Esto es para evitar un segmentation fault
			{
				if (name == temporal->getName())
				{
					for (int j = i; j < numElems; j++)
					{
						almacen[j] = almacen[j+1];
					}
					numElems--;
				}
			}

		}

		if (temporal == 0)
			cout << "No se encontro a " << name << endl;

		return 0;
	}
};
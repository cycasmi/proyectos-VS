/*
#pragma once;
#include "Aggregate.h"

template <class T>
class Iterator
{
public:
	Iterator(const Aggregate<T> &lista) //Agregando el const, se evita que el iterador modifique la lista.
	{
		this->lista = lista;
		idx = 0; //index
	}

	T next()
	{
		if (hasNext())

			return lista->lista[idx++]:
		//return lists->lista[idx++]
		else
			return NULL;
	}

	bool hasNext()
	{
		return (idx < getSize)
	}

	~Iterator(){}

private:
	Iterator(){}
	Aggregate<T>* lista;
	int idx;
};

*/
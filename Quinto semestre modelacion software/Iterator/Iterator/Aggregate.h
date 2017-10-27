/*

//Para solucionar referencias circulares, es necesario hacer un forward declaration
#pragma once;
#include "Iterator.h"

template <class T>
class Aggregate
{
public:

	//friend class Iterator<T>;

	Aggregate() : pos(0), lista(new T[size])
	{
		lista = n;
	}

	void add(T element)
	{
		lista[pos++] = element;
	}

	Iterator<T> getIterator()
	{
		return new Iterator<T>(*this); //this es un APUNTADOR a la misma clase. Si le pusiera *this, estaría mandando una copia de la cosa
		//Aquí le paso al iterador un aggregate (una lista) para que pueda moverse por ésta
	}

	~Aggregate(){}
	
	//hacde una función siiala
	T getElement(int pos)
	{
		return lista[pos];
	}

private:
	T* lista;
	int pos = o;
	int size = 10;
}; 

class Persona
{
public:
	Persona (int edad); edad(edad){}
	int getEdad(){}
	~Persona ();

private:
	int edad;
};
*/
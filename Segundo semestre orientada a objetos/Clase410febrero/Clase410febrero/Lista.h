#pragma once
#include <iostream>
using namespace std;

template <class T>
class Lista
{
private:
	T* container;
	int size;
	int numElems;

public:
	Lista();//Constructor
	Lista(int sizeParametro);//Constructor
	Lista(const Lista& original);//Creando copia de constructor. Se pone const, nombre de ella misma y despu�s de d�nde va a tomar los valores.

	~Lista(); //Si no hay apuntadores no es necesario un destructor.

	int getSize();

	//Ya que le faltan elementos, hay que pedirlos
	void addElement(T element);

	//Para imprimir...
	void print();

	void deleteLast();

};

//Implementaci�n. Se hace aqu� mismo porque estamos utilizando plantillas.

template <class T>
Lista<T>::Lista() //Construyendo implementaci�n del constructor por default. En este caso, despu�s del nombre de la clase se pone el tipo de dato (por lo general se hace en el main)
{
	size = 5;
	container = new T[size]; //le reservo el memoria para un tipo de dato T y se predetermina el tama�o en 10.
	numElems = 0;//Hay 10 espacios pero no guardo ning�n elemento.
}

template <class T>
Lista<T>::Lista(int sizeParametro)//implementando constructor por referencia
{
	//This es un apuntador a la clase. Ya que size est� dentro accede al valor de size.
	this->size = sizeParametro; //Asigna el valor size que para como par�metro 

	//(*this).sizeParametro; Esto es lo mismo que arriba con otra notaci�n.
	
	container = new T[size]; //Este size ya es el de aqu�.

	numElems = 0;
}

template <class T>
Lista<T>::Lista(const Lista& original)//Estamos creando lo que llamamos en la copia
{
	container = new T[original.size]; //Esto as� nada mas marcar�a error ya que size es privado. Para esto definimos un get en la clase y despu�s lo desarrollamos abajo.
	size = original.getSize();
	numElems = 0;


}

template <class T>
int Lista<T>::getSize()
{
	return size;
}

template <class T> //Implementando el destructor.
Lista<T>::~Lista()
{
	//Aqu� eliminamos el arreglo mas no el apuntador.
	delete []container; //Se le colocan corchetes adelante pork es un arreglo. Sino s�lo borrar�a el primer elemento.
}

//Implementacion para hacer el arreglo m�s grande y poder agregar m�s elementos
template <class T>
void Lista<T>::addElement(T element)
{
	container[numElems] = element;
	numElems++;

	if (numElems == size)
	{
		if (numElems == size)
		{
			T *newContainer = new T[size + 10]; //Se defini� nuevo arreglo. Ahora se debe copiar los elementos a �ste.
			for (int i = 0; i < numElems; i++)
			{
				newContainer[i] = container[i];
			}

			delete[]container; //Ahora borramos este que no nos sirve, el apuntador;
			container = newContainer;
		}
		
		//container[numElems] = element;
		//size = size + 10;
		
	}
}


//implementando m�todo
template<class T>
void Lista<T>::print()
{
	for (int i = 0; i < numElems; i++)
	{
		cout << container[i] << " ";
	}
	cout << endl << endl;
}

//M�todo para borrar.
template <class T>
void Lista<T>::deleteLast()
{
	//Si s�lo le pongo el delete, borra el espacio y no lo puedo volver a utilizar.
	if (numElems >=1)
		numElems--;
}
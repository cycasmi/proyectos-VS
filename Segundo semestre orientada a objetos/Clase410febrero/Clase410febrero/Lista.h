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
	Lista(const Lista& original);//Creando copia de constructor. Se pone const, nombre de ella misma y después de dónde va a tomar los valores.

	~Lista(); //Si no hay apuntadores no es necesario un destructor.

	int getSize();

	//Ya que le faltan elementos, hay que pedirlos
	void addElement(T element);

	//Para imprimir...
	void print();

	void deleteLast();

};

//Implementación. Se hace aquí mismo porque estamos utilizando plantillas.

template <class T>
Lista<T>::Lista() //Construyendo implementación del constructor por default. En este caso, después del nombre de la clase se pone el tipo de dato (por lo general se hace en el main)
{
	size = 5;
	container = new T[size]; //le reservo el memoria para un tipo de dato T y se predetermina el tamaño en 10.
	numElems = 0;//Hay 10 espacios pero no guardo ningún elemento.
}

template <class T>
Lista<T>::Lista(int sizeParametro)//implementando constructor por referencia
{
	//This es un apuntador a la clase. Ya que size está dentro accede al valor de size.
	this->size = sizeParametro; //Asigna el valor size que para como parámetro 

	//(*this).sizeParametro; Esto es lo mismo que arriba con otra notación.
	
	container = new T[size]; //Este size ya es el de aquí.

	numElems = 0;
}

template <class T>
Lista<T>::Lista(const Lista& original)//Estamos creando lo que llamamos en la copia
{
	container = new T[original.size]; //Esto así nada mas marcaría error ya que size es privado. Para esto definimos un get en la clase y después lo desarrollamos abajo.
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
	//Aquí eliminamos el arreglo mas no el apuntador.
	delete []container; //Se le colocan corchetes adelante pork es un arreglo. Sino sólo borraría el primer elemento.
}

//Implementacion para hacer el arreglo más grande y poder agregar más elementos
template <class T>
void Lista<T>::addElement(T element)
{
	container[numElems] = element;
	numElems++;

	if (numElems == size)
	{
		if (numElems == size)
		{
			T *newContainer = new T[size + 10]; //Se definió nuevo arreglo. Ahora se debe copiar los elementos a éste.
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


//implementando método
template<class T>
void Lista<T>::print()
{
	for (int i = 0; i < numElems; i++)
	{
		cout << container[i] << " ";
	}
	cout << endl << endl;
}

//Método para borrar.
template <class T>
void Lista<T>::deleteLast()
{
	//Si sólo le pongo el delete, borra el espacio y no lo puedo volver a utilizar.
	if (numElems >=1)
		numElems--;
}
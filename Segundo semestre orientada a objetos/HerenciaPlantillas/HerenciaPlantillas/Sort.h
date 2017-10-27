#pragma once
#include <iostream>
using namespace std;

template <class T>
class Sort
{
public:
	//método para ordenar cualquier cosa. Aquí puedo usar una plantilla, pero en lenguajes sin Templates, puedo hacerlo creando una clase.
	//de ésta última forma, le pasamos como parámetro un objeto de tipo Objeto que es la que está en la parte más alta de la herencia.
	//Esto con la finalidad de que pueda recibir cualquier cosa. 
	//ordenar(Object o)

	//tengo un arreglo de tipo T.
	virtual T *ordenar(T* o) = 0;
	//virtual Collection sort(Collection o) = 0; //Le ponemos que sea virtual puro para que todos los hijos lo puedan tener su sort.

	Sort();
	~Sort();
};




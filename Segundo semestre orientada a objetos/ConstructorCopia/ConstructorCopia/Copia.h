#pragma once
#include <iostream>
using namespace std;

class Copia
{
private:
	int* pointer;
	int size;

public:
	Copia()
	{
		size = 10;
		pointer = new int[size];
	}

	Copia llamadaAcopia(Copia a) //Copia &a llamada por referencia. si hago eso, se modifica el objeto original
	{
		//No puedo pasar por referencia nada que sólo sea creado dentro de una función pork es temporal y desaparece. 
		//por lo tanto no es correcto escribir Copia& llamadaAcopia(Copia a)
		Copia z = a;
		return z;
	}

	//El constructor copia siempre es constante
	Copia(const Copia& original)
	{
		size = original.getSize();//como le puse const, se supone que no se modifica y como estoy llamando una función que posiblemente la modifique, me marca error.
		//pointer = original.pointer INCORRECTO porque sino modificaría el pointer original y no el del copia.
		pointer = new int[size];
		for (int i = 0; i < size; i++)
			pointer[i] = original[i]; //accede al elemento I de pointer y accede al elemento i de original. para eso es encesario SOBRECARGAR los []
		
		cout << "Estoy en el constructor copia" << endl;
	}

	//SOBRECARGA DE CORCHETES
	int& operator[](int index) const //con el ampersand puedo modificar el valor de ese elemento ya que en la función en sí no modifico los valores.
	{
		return pointer[index];
	}

	void setSize(int size)
	{
		this->size = size;
	}

	//Este será el que use el copy const
	int getSize()const
	{
		return size;
	}

	int getSize()
	{
		return size;
	}

};


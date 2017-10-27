/*#include <map> //permite definir pares de valores   map<key, value> Nuestro map es una lista y debemos llenarla
#include <string>
#include <iostream>

template <class T, class Func>
class Command
{
public:
	virtual T execute(T*, T, Func) = 0; //uno es un arreglo de funciones y el tama�o, y el comportamiento
};

//Aqu� el Func no se usar�. Originalmente la clase s�lo utilizaba T, heredaba de Command y
//se ten�a que crear una nueva funci�n por cada comportamiento distinto (como este	que es una suma)
//sin embargo, al agregarle a la clase Command el tipo de dato Func se evita hacer eso, se hace a�n m�s gen�rico.
//Esta es s�lo una prueba adicional de otra forma de hacer lo mismo, m�s orientada a objeto.
template <class T, class Func>
class Sum : public Command<T, Func>
{
public:
	T execute(T* arr, T size, Func f)
	{
		T acum = 0;
		for (int i = 0; i < size; i++)
		{
			acum += arr[i];
		}
		return acum;
	}
};

template <class T, class Func>
class Operaciones
{
private:
	std::map<std::, Func> operacionesConApuntadores;
	std::map<std::string, Command<T, Func> *> operaciones;
	
public:
	Operaciones()
	{
		operaciones.insert(std::make_pair("suma", new Sum<T, Func>));
	}

	void insert(std::string, Func f)
	{
		operacionesConApuntadores.insert(make_pair(s, f));
	}

	Func getOpFunc(std:: string )

	Command<T, Func>* getOperation(std::string op)
	{
		typename std::map<std::string, Command<T, Func>*>::iterator it; //variable de tipo iterador al que se le define como de tipo de dato map
		it = operacionesConApuntadores.find(op);
		if (it != operacionesConApuntadores.end()) //el end me devuelve el lugar siguiente al �ltimo dato
		{
			return it->second(); //me va a devolver el segundo elemento del map, es decir, el value.
		}
		return NULL;
	}
};

int main()
{
	Operaciones<double, int> op; //este int realmente no hace nada en el ejemplo, solo es para evitar un error

	op.insert();

	double* arrD = new double[]{2.1, 3.5, 2.3, 4.3, 1.4};
	Command<double, int>* c = op.getOperation("suma");
	std::cout << c->execute(arrD, 5, 0);
}
*/

/*

Patr�n Command aplicado a un arreglo gen�rico
*Esta implementaci�n corresponde
a una implementaci�n de plantillas y funciones (apuntadores a funciones)
*/

#include<map>
#include<string>
#include<iostream>

using namespace std;

class Command
{
public:
	template<class T, class Func>
	T execute(T* arr, int size, Func fun)
	{
		return fun(arr, size);
	}
};


template<class T>
T sum(T* arr, int size)
{
	T acum = 0;
	for (int i = 0; i<size; i++)
		acum += arr[i];
	return acum;
}

typedef int(*signature)(int*, int);

int main()
{
	double* arrD = new double[5]{2.1, 3.5, 2.3, 4.3, 1.4};
	char* arrC = new char[5]{'A', 'R', 'I', 'E', 'L'};
	int* arrI = new int[2]{12, 22};
	Command c;

	cout << c.execute<double, double(*)(double*, int)>(arrD, 5, sum) << endl; //Aplicar la funci�n a un arreglo de enteros

	cout << c.execute<char, char(*)(char*, int)>(arrC, 5, sum) << endl; //aplicar la funci�n a un arreglo de chars

	cout << c.execute<int, signature>(arrI, 5, sum) << endl; //aplicar la funci�n a un arreglo de ints, pero guardando la definici�n de la funci�n en un typedef

	signature f = &sum<int>;
	f<arrI, 2>;
}
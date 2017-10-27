#pragma once
#include <iostream>
using namespace std;

template <class T>
class Incremento
{
protected:
	int *a;
	int *b;
	double *c;
	double *d;

public:
	Incremento()
	{
		a = new int(4);
		b = new int(5);
		c = new double(6.4);
		d = new double(7.7);
	}

	int& setGetA(){ return *a; }
	int& setGetB(){ return *b; }
	double& setGetC(){ return *c; }
	double& setGetD(){ return *d; }

	template<class T, class Func>
	void incremento(T value, Func metodo)
	{
		//aquí digo que traduzca el objeto con el método quitándole la referencia usando el asterisco y lo aplica los cambios 
		(this->*metodo)() += value;
	}


	virtual ~Incremento()
	{
		delete a;
		delete b;
		delete c;
		delete d;
	}

	template <class Q, class W>
	void inc(Q value, W metodo)
	{
		metodo(*this) += value;
	}

	template<class valor, class objeto, class funcion>
	void incre(valor v, objeto o, funcion f)
	{
		(o->*f)() += v;
	}
};
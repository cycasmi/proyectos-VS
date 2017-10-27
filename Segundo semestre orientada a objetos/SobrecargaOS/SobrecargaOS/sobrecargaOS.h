#pragma once
#include <iostream>
using namespace std;

template <class T>
class sobrecargaOS
{
public:
	template <class Q> //esta, al ponerle el friend, se vuelve en una función externa, por lo que necesita una plantilla distinta. Si no ocupas plantillas no es necesario
	friend ostream& operator << (ostream& os, const SobrecargaOS<Q>& s)


	sobrecargaOS();
	~sobrecargaOS();
};

template <class Q>
ostream& operator << (ostream& os, const SobrecargaOs<Q>& s)
{

}
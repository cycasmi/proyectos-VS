#include "Enteros.h"
#include "Multiplicacion.h"
#include <string>

int main()
{
	Enteros a(5), b(6);

	Multiplicacion x;

	x.multiplicar(a, b);


	string name;
	cin >> name;
	string message("hi");
	cout << name << message;

}
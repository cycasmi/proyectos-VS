#include"Numero.h"

int main()
{
	Numero uno(34);
	Numero dos(50);
	Numero tres(10);

	//Numero tres = uno + dos;
	//sobrecarga y copy constructor. No lo definimos porque no tiene apuntadores y no fue necesario.
	Numero cuatro = uno + dos + tres;

	cout << cuatro.getValue() << endl;

	//Sobre carga de operador ==
	//Para que escriba true o false en lugar de 0 y 1, usamos un if ternario
	cout << ((uno == dos) ? "True" : "False") << endl;

	//cout << uno << endl << dos << endl << tres << endl;

	return 0;
}
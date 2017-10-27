//Nombre: Cynthia B. Castillo Millán
//Matrícula: A01374530

#include "Lavadora.h"

int main()
{
	Lavadora grande = Lavadora(100, "rojo", 3670, 55);
	cout << "Lavadora grande" << endl;
	grande.print();

	Lavadora mediana;
	cout << "Lavadora mediana" << endl;
	mediana.print();

	Lavadora pequena = Lavadora(12, "azul", 120, 18);
	cout << "Lavadora pequena" << endl;
	pequena.print();
}
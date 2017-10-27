//Nombre: Cynthia B. Castillo Millán
//Matrícula: A01374530
// Tarea1, ejercicio 1.

#include <iostream>
using namespace std;

void numbers()
{
	double suma = 0;

	for (int n = 2; n < 1000000; n++)
	{
		if ((n == 2) || (n == 3) || (n == 5) || (n == 7))
			suma += n;

		else if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0) || (n % 7 == 0))
			continue;

		else
			suma += n;
	}
	cout << "La suma de todos los numeros primos de uno a un millon es: " << suma << "\n\n";
}

int main()
{
	numbers();
	return 0;
}
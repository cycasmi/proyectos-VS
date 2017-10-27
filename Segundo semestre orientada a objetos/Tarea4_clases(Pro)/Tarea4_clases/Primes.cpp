#include "Primes.h"

int Primes::area() //Este es el cuerpo del método llamado area
{
	for (int i = 2; i < n; i++)
	{
		if ((n == 2) || (n == 3) || (n == 5) || (n == 7))
			return true;

		else if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0) || (n % 7 == 0))
			return false;

		else
			return true;
	}
}

//Constructor por Default
Primes::Primes()
{
}

//Constructor con Parámetros
Primes::Primes(int n)
{
	this->n = n;
}

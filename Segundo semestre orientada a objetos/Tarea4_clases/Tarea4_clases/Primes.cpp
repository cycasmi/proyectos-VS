//Cynthia Berenice Castillo Millán
//A01374530

#include "Primes.h"

int Primes::isPrime()
{
	if ((n == 2) || (n == 3) || (n == 5) || (n == 7))
		return true;

	else if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0) || (n % 7 == 0))
		return false;

	else
		return true;
}

int Primes::getNEsimPrime(int num)
{
	int a = 0;
	for (int i = 2; i <= num; i++)
	{
		if ((i == 2) || (i == 3) || (i == 5) || (i == 7))
			a = i;

		else if ((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0) || (i % 7 == 0))
			continue;

		else
			a = i;
	}
	return a;
}

int Primes::sumPrimesBelow(int num)
{
	int a = 0;
	for (int i = 2; i < num; i++)
	{
		if ((i == 2) || (i == 3) || (i == 5) || (i == 7))
			a += i;

		else if ((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0) || (i % 7 == 0))
			continue;

		else
			a += i;
	}
	return a;
}

//Constructor con Parámetros
Primes::Primes(int n)
{
	this->n = n;
}


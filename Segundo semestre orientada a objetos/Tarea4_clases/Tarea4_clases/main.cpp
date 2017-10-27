//Cynthia Berenice Castillo Millán
//A01374530

#include "Primes.h"

int main()
{
	//Ejercicio 1
	Primes a = Primes(71);
	Primes b = Primes(22);
	Primes c = Primes(2);
	cout << "El resultado de evaluar si 71 es primo es: " << a.isPrime() << endl;
	cout << "El resultado de evaluar si 22 es primo es: " << b.isPrime() << endl;
	cout << "El resultado de evaluar si 2 es primo es: " << c.isPrime() << endl << endl;

	//Ejercicio 2
	Primes s(1);
	cout << "El ultimo numero primo encontrado hasta el numero 20 es:" << s.getNEsimPrime(20) << endl;

	//Ejercicio 3
	Primes x(1);
	cout << "La suma de los numeros primos menores al numero 10 es:" << x.sumPrimesBelow(10) << endl;
}
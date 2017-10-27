#include "Primes.h"

int main()
{
	//Aqui estoy definiendo un objeto llamado C
	//llanado al constructor por parámetros
	Primes c = Primes(71);
	cout << c.area() << endl;

	//Creando un objeto nuevo
	Primes *z = new Primes(4);
	Primes x = *z;
	cout << x.area();


}
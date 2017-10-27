/*El objetivo es clonar cada una de las subclases permitiendo que cada subclase devuelva una copia de s� misma
Esta implementaci�n tiene los siguientes problemas:

a) Cada subclase debe implementar el m�todo clonar el cual es practicamente igual en todas
las subclases

b) Los objetos que se clonan son del tipo del padre por lo que las operaciones disponobles
son solo aquellas definidas en el padre. Si se quiere acceder a las funciones del hijo,
entonces hay que hacer un dynamic o static cast para convertirlo a un hijo


Esto se podr�a automatizar usando el CRTP (curiously recurring template pattern)

*/


#include <iostream>
using namespace std;

class Personaje
{
public:
	virtual void correr() = 0;
	virtual Personaje* clonar() = 0;
};

class Principe : public Personaje
{
public:
	void seleccionarArma();
	void atacar();
	void correr()
	{
		cout << "El principe corre r�pido" << endl;
	}
	Personaje* clonar()
	{
		return new Principe(*this);
	}
};

class Princesa : public Personaje
{
public:
	void gritar();
	void correr()
	{
		cout << "La princesa corre medio lento" << endl;
	}
	Personaje* clonar()
	{
		return new Princesa(*this);
	}
};

class Villano : public Personaje
{
public:
	void atacar();
	void atraparPricnesa();
	void correr()
	{
		cout << "El villano no necesita correr" << endl;
	}
	Personaje* clonar()
	{
		return new Villano(*this);
	}
};

int main()
{
	Villano v;
	Princesa p;
	Principe pri;

	Personaje* pe = v.clonar();
	pe->correr();

	return 1;
}
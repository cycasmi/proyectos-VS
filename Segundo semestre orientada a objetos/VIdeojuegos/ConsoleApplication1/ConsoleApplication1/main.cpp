#include "Character.h"
#include "Hero.h"
#include "Villain.h"
#include "Minion.h"
#include "Princess.h"

template <class T>
class Almacen
{
	T* almacen;

public:
	Almacen()
	{
		almacen = new T[10];
	}

	void agregar (T elemento, int pos)
	{
		almacen[pos] = elemento;
	}

	void imprimir()
	{
		for (int i = 0; i < 4; i++)
		{
			almacen[i]->printMe();
		}
	}

	//Solo me va a poder buscar personajes pork son los unicos que tienen un nombre
	//aquí hicimos el ciclo predefinido en 10
	int buscar(string name)
	{
		for (int i = 0; i < 10; i++)
		{
			//Se le pone flechita pork el arreglo tiene apuntadores
			//como en graphic no tiene getName, solo lo tienen los personajes, almacen no puede acceder. Para hacerlo hacemos un dynamic cast
			//if (name == almacen[i]->getName())

			//convirtiendo del padre al hijo
			Character* temporal = dynamic_cast<Character*> (almacen[i]);
			
			if (temporal != 0)//Esto es para evitar un segmentation fault
			{
				//temporal ya es un personaje
				if (name == temporal->getName())
				{
					return i;
				}
			}
			
		}
		return -1;
	}
};


int main()
{
	Character* c1 = new Hero("Shrek", 10); //Se le pone apuntador para poder cambiar los personajes.
	Character* c2 = new Princess("Fiona", 10);
	Character* c3 = new Villain("Joker", 10);
	Character* c4 = new Minion("MiniMinion", 5);


	//como es un apuntador y fue devuelto por referencia, se puede usar como Get y Set.
	c1->getSetStrength() = 10;

	cout << c1->getSetStrength();

	c1->printMe();
	c4->printMe();
	c4->attack();

	//Character* c = new Hero("SuperShrek", 10);

	//(dynamic_cast<Princess*>(c2))->scream();//aquí no tiene polimorfismo y por lo tanto, como aquí scream no está definido en la clase padre, se tiene que hacer un cast. DownCasting

	//crea un apuntador a princesa.,l El dynamic_cast permite el uso del método en princesa
	Princess* p = dynamic_cast<Princess*>(c2);
	//Esto para validar que existe una princesa.
	if (p != 0)
		//cout << "si";
		p->scream();

	//Otra forma de hacerlo de manera implicita es:
	//(dinamic_cast<Princess*>(c2))->scream();) //Es una instancia temporal a princesa.

	//Almacen<Graphic> miAlmacen Esto me va a generar un ERROR porque Graphic es una clase abstracta
	//Este es un arreglo de apuntadores a Graphic
	Almacen <Graphic*> miAlmacen;
	miAlmacen.agregar(c1, 0);
	miAlmacen.agregar(c2, 1);
	miAlmacen.agregar(c3, 2);
	miAlmacen.agregar(c4, 3);
	miAlmacen.imprimir();
	
	cout << "Fiona se encuentra en la posicion: " << miAlmacen.buscar("MiniMinion");

	return 0;
}
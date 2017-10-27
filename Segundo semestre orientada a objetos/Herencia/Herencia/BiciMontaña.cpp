#include "BiciMontaña.h"

//LISTAS DE IMPLEMENTACIÓN
//implementando el con constructor sin parámetros
//Dos puntos despues de un metodo. Dos puntos después de una clase es herencia.
//aquí editamos bicicleta, llamando el constructor del padre y dándole valores
BiciMontaña::BiciMontaña() : Bicicleta("verde", 24, "bmx"), suspensionDelantera(true) //implementando Bicileta con sus valores. Esta es una lista de inicialización.
{
	//reservando memoria para obligatorioM
	obligatorioM = new int;
}

//Aquí estamos accediendo al padre.
BiciMontaña::BiciMontaña(string _color, int _size, string _marca, bool sDelantera, bool sTrasera)
// haciendo lista de inicialización
: Bicicleta(_color, _size, _marca), suspensionDelantera(sDelantera), suspensionTrasera(sTrasera)
{
	obligatorioM = new int;
}

BiciMontaña::~BiciMontaña()
{
	delete obligatorioM;
	cout << "Estoy en el destructor de bici de Montaña" << endl;
}
#include "BiciMonta�a.h"

//LISTAS DE IMPLEMENTACI�N
//implementando el con constructor sin par�metros
//Dos puntos despues de un metodo. Dos puntos despu�s de una clase es herencia.
//aqu� editamos bicicleta, llamando el constructor del padre y d�ndole valores
BiciMonta�a::BiciMonta�a() : Bicicleta("verde", 24, "bmx"), suspensionDelantera(true) //implementando Bicileta con sus valores. Esta es una lista de inicializaci�n.
{
	//reservando memoria para obligatorioM
	obligatorioM = new int;
}

//Aqu� estamos accediendo al padre.
BiciMonta�a::BiciMonta�a(string _color, int _size, string _marca, bool sDelantera, bool sTrasera)
// haciendo lista de inicializaci�n
: Bicicleta(_color, _size, _marca), suspensionDelantera(sDelantera), suspensionTrasera(sTrasera)
{
	obligatorioM = new int;
}

BiciMonta�a::~BiciMonta�a()
{
	delete obligatorioM;
	cout << "Estoy en el destructor de bici de Monta�a" << endl;
}
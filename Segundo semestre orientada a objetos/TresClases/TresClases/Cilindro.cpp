#include "Cilindro.h"

float Cilindro::area()
{
	//area de la tapa
	return 2 * pi*radio*(altura + radio);
}


Cilindro::Cilindro()
{
}


Cilindro::~Cilindro()
{
}

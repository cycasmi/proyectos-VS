#include "Circulo.h"

float Circulo::area() //Este es el cuerpo del método llamado area
{
	//cout << *pi << " " << radio << endl; impresion para saber si se estan pasando correctamente los datos
	return (*pi * radio * radio);
}

//Constructor por Default
Circulo::Circulo()
{
}

//Constructor con Parámetros
Circulo::Circulo(float radio, float* pi)
{
	//pi = new float; para evitar tener que hacer esto varias veces y reservar memoria varias veces, se prefiere hacerlo en el main.
	//*pi = 3.1416;
	this->pi = pi; //Si no fuera un apuntador, en lugar de ponerle this-> (operador dereferenciador) se pone this.
	//(this).pi  (notación opcional)
	this->radio = radio;
}

//Constructor copia
Circulo::Circulo(const Circulo& c)//copia todo lo de otro constructor sin embargo, en el caso de apuntadores, no te copia el contenido de éste.
{
	//estas lineas no son necesarias por que es una copia pero lo pondremos
	this->pi = c.pi;
	radio = c.radio;
}
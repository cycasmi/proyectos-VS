#include "Circulo.h"

int main()
{
	float* pi = new float;
	*pi = 3.1416;

	//Aqui estoy definiendo un objeto llamado C
	//llanado al constructor por parámetros
	Circulo c = Circulo(34.4, pi);
	cout << c.area() << endl;

	//llamada a la copia
	Circulo d = c;
	cout << d.area() << endl;

	//Creando un objeto nuevo
	Circulo *z = new Circulo(5.3, pi);
	Circulo x = *z;
	cout << x.area();


}
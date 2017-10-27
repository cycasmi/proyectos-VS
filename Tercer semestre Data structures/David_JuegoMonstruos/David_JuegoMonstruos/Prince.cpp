#include "Monstruo.h"
#include "Hoyo.h"

int main()
{
	Monstruo asesino(5, 5, 'A');
	cout << "El monstruo asesino te hizo un daño de: " << asesino.danio();

	cout << endl;

	Hoyo grande(5, 5, 10);
		//cout << ((grande.danio() == -1)? "El hoyo te ha roto la pierna\n" : "El hoyo no sirve");

		if (grande.danio() == -1)
			cout << "El hoyo te ha roto la pierna\n";
		else 
			"El hoyo no sirve";

	return 0;
}

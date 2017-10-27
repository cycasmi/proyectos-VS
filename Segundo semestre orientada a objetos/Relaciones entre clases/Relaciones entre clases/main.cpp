#include "Persona.h"
#include "Matrimonio.h"
#include "Mujer.h"
#include "Marido.h"

int main()
{
	Marido m("Ariel", "Garcia");
	Mujer e("Megan", "Fox");

	m.setMujer(&e);
	e.setMarido(&m);

	m.printMaritales();
	
	cout << "***************" << endl;

	e.printMaritales();

	return 0;
}
#include "Lista.h"

int main()
{
	Lista<int> list; //Creando una instancia. list es un objeto de tipo lista. Aqu� podemos ponerle el tipo de dato que sea ya que en lo dem�s usamos plantillas.
	//Lista<double> ld;

	list.addElement(11);//Le agrego el valor de 11
	list.addElement(12);
	list.addElement(13);
	list.addElement(14);
	list.addElement(15);
	list.addElement(13);
	list.addElement(14);
	list.addElement(15);

	//Para ver la lista, le ponemos un cout ya sea en el main o en el .h con una funci�n
	list.print();

	return 0;
}


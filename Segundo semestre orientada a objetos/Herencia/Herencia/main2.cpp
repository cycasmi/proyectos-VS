#include "BiciMonta�a.h"

int main()
{
	/*BiciMonta�a* bm = new BiciMonta�a();
	delete bm; //aqu� como elimino primero al hijo, elimino ambos.*/

	//Cada vez que creo un apuntados, necesito mandar a  llamar el delete.
	Bicicleta* b = new BiciMonta�a();
	delete b;//Aparece el mensaje bicicleta pero no bici de monta�a. Entonces hay espacio de memoria sin liberar.

	b->frenar();


	return 0;
}
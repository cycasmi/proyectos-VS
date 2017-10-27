#include "BiciMontaña.h"

int main()
{
	/*BiciMontaña* bm = new BiciMontaña();
	delete bm; //aquí como elimino primero al hijo, elimino ambos.*/

	//Cada vez que creo un apuntados, necesito mandar a  llamar el delete.
	Bicicleta* b = new BiciMontaña();
	delete b;//Aparece el mensaje bicicleta pero no bici de montaña. Entonces hay espacio de memoria sin liberar.

	b->frenar();


	return 0;
}
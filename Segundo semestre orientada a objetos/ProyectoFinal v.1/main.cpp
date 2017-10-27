#include <string>
#include "Lacteos.h"
#include "Leche.h"
#include "LecheCondensada.h"
#include "LecheDeslactosada.h"
#include "LecheEntera.h"
#include "LecheLight.h"
#include "Queso.h"
#include "QuesoAmarillo.h"
#include "QuesoOaxaca.h"
#include "QuesoPanela.h"
#include "QuesoParmesano.h"
#include "Yogur.h"
#include "YogurGriego.h"
#include "YogurLight.h"

#include "Menus.h"

int main()
{
	//menuOriginal();

	Fecha actual(13, 05, 2015);
	Lacteos *jamon = new Leche("Leche", 600, 800, 1200, 12, 05, 2015);
	jamon->imprimir();
	cout << jamon->caducidad(actual);

	return 0;
}


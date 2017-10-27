#include "Enemigo.h"

class Hoyo : public Enemigo {
private:
	int diametro;

public:
	Hoyo();
	Hoyo(int x, int y, int di);

	int getDiametro();
	void setDiametro(int di);

	int danio();
};

#include "Enemigo.h"

class Monstruo : public Enemigo {
private:
	char tipo;

public:
	Monstruo();
	Monstruo(int x, int y, char t);

	int getTipo();
	void setTipo(char t);

	int danio();

};

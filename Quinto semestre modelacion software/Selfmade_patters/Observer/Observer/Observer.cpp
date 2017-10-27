#include <iostream>
#include <vector>
using namespace std;


class Intendencia {
	vector < class Oficina * > views;
	int numeroOficinas;
public:
	void attach(Oficina *obs) {
		views.push_back(obs);
	}
	void setNumeroOficinas(int val) {
		numeroOficinas = val;
		notify();
	}
	int getNumeroOficinas() {
		return numeroOficinas;
	}
	void notify();
};

class Oficina {
	Intendencia *model;
	bool asistencia;
	int numeroOficina;
public:
	Oficina(Intendencia *mod, bool asist, int oficina) {
		model = mod;
		asistencia = asist;
		numeroOficina = oficina;
		model->attach(this);
	}
	virtual void update() = 0;
protected:
	Intendencia *getIntendencia() {
		return model;
	}
	bool getAsistencia() {
		return asistencia;
	}
	int getNumeroOficina(){
		return numeroOficina;
	}
};

void Intendencia::notify() {
	for (int i = 0; i < views.size(); i++)
	{
		numeroOficinas++;
		views[i]->update();
	}
	cout << "Numero de oficinas limpiadas " << getNumeroOficinas() << endl;
}

class DivOficina : public Oficina {
public:
	DivOficina(Intendencia *mod, bool asist, int numeroOficina) : Oficina(mod, asist, numeroOficina){}
	void update() {
		bool asistencia = getAsistencia();
		int oficina = getNumeroOficina();
		if (asistencia)
		{
			cout << "Si limpio oficina numero " << oficina << endl;
		}
		else
		{
			cout << "No limpio oficina numero " << oficina << endl;
		}
	}
};

/* Cada empleado de intendencia le es asignado ciertas oficinas a limpiar, una vez que la oficina es limpiada el
* dueño de dicha oficina registra que su oficina fue limpiada
*/

int main() {


	Intendencia pablito;
	DivOficina jefe1(&pablito, true, 4401);
	DivOficina jefe2(&pablito, false, 4402);
	pablito.notify();

}
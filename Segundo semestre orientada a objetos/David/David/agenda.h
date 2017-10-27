#include <iostream>
#include <string>

using namespace std;

class Agenda {

private:

	//Atributos
	string nombre;
	int telefono;
	string correo;
	string direccion;


public:
	//Constructor

	Agenda();

	Agenda(string nom, int tel, string mail, string casa, string direccion);

	//Metodos get y set para modificar atributos

	string getNombre();
	void setNombre(string n);

	int getTelefono();
	void setTelefono(int e);

	string getCorreo();
	void setCorreo(string c);

	string getDireccion();
	void setDireccion(string d);

};

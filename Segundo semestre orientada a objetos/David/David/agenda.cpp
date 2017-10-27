#include "agenda.h" 

//Constructor

Agenda::Agenda()
{

}

string Agenda::getNombre()
{
	return nombre;
}

void Agenda::setNombre(string n)
{
	nombre = n;
}



int Agenda::getTelefono()
{
	return telefono;
}

void Agenda::setTelefono(int e)
{
	telefono = e;
}



string Agenda::getCorreo()
{
	return correo;
}

void Agenda::setCorreo(string c)
{
	correo = c;
}



string Agenda::getDireccion()
{
	return direccion;
}

void Agenda::setDireccion(string dir)
{
	direccion = dir;
}


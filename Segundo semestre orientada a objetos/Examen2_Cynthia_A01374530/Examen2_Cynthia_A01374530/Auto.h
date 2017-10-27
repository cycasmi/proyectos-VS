#pragma once
#include <iostream>
#include <string>
using namespace std;

class Auto
{
protected:
	string nombre;
	string modelo;
	string color;
	string automatico;
	string uso;
	int* anio;
	int* pasajeros;
	int* numPuertas;
	int* precio;
	int* kilometraje;

	Auto(){}

public:
	Auto(string nombre, string modelo, string color, string automatico, string uso, int anio, int pasajeros, int numPuertas, int precio, int kilometraje) : nombre(nombre), modelo(modelo), color(color), automatico(automatico), uso(uso), anio(new int(anio)), pasajeros(new int(pasajeros)), numPuertas(new int(numPuertas)), precio(new int(precio)), kilometraje(new int(kilometraje)){ }

	int edad()
	{
		return *anio;
	}
	void precioF(int actual)
	{
		float devaluacion = (float)actual - *anio;
		cout << "El precio actual del auto es " << (*precio - (*precio*devaluacion*0.2)) << endl;
	}
	void servicio()
	{
		for (int i = 10000; i <= 100000; i += 10000)
		{
			if (*kilometraje < i)
			{
				if ((i == 10000) || (i == 30000) || (i == 50000) || (i == 70000) || (i == 90000)){
					cout << "Faltan " << i - *kilometraje << " para el siguiente servicio. El servicio que correcponde es Basico" << endl;
					break;
				}

				if ((i == 20000) || (i == 60000)){
					cout << "Faltan " << i - *kilometraje << " para el siguiente servicio. El servicio que correcponde es Medio" << endl;
					break;
				}

				if ((i == 40000) || (i == 80000)){
					cout << "Faltan " << i - *kilometraje << " para el siguiente servicio. El servicio que correcponde es Completo" << endl;
					break;
				}

				if (i == 100000){
					cout << "Faltan " << i - *kilometraje << " para el siguiente servicio. El servicio que correcponde es Completo Plus" << endl;
					break;
				}

			}
		}
	}


	virtual void imprimir() = 0;
	string getNombre(){ return nombre;  }
	string getModelo(){return modelo;}
	string getColor() { return color; }
	string getAutomatico() { return automatico; }
	string getUso() { return uso;  }
	int& getAnio() { return *anio;  }
	int& getPasajeros() { return *pasajeros; }
	int& getNumPuertas() { return *numPuertas; }
	int& getPrecio() { return *precio; }
	int& getKilometraje() { return *kilometraje; }
};
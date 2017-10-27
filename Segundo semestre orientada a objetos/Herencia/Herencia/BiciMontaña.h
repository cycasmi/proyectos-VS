#include "Bicicleta.h"

class BiciMonta�a : public Bicicleta//Existe herencia publica, protegida y privada.
{
public:
	//aqu� primero se agregan los valores desde bicicleta y despu�s se le agrega en biciMonta�a la suspensi�n, lista de inicializaci�n.
	//Esto es lo que ir�a en el cpp: BiciMonta�a() : Bicicleta("verde", 24, "bmx"), suspensionDelantera(true). En el .h realmente va BiciMonta�a();
	//constructor sin par�metros
	BiciMonta�a();//implementando Bicileta con sus valores. Esta es una lista de inicializaci�n.
	//constructor con par�metros
	BiciMonta�a(string _color, int _size, string _marca, bool sDelantera, bool sTrasera);

	void frenar(int potencia)
	{
		Bicicleta::frenar();
	}
	
	void frenar()
	{
		cout << "freno en biciMonta�a";
	}

	~BiciMonta�a();

protected:
	int* obligatorioM;
	bool suspensionDelantera; //aqu� no puedo agregar valores. S�lo en el objeto. En la implementaci�n del constructor ah� puedo definirlo.
	bool suspensionTrasera;
};
#include "Bicicleta.h"

class BiciMontaña : public Bicicleta//Existe herencia publica, protegida y privada.
{
public:
	//aquí primero se agregan los valores desde bicicleta y después se le agrega en biciMontaña la suspensión, lista de inicialización.
	//Esto es lo que iría en el cpp: BiciMontaña() : Bicicleta("verde", 24, "bmx"), suspensionDelantera(true). En el .h realmente va BiciMontaña();
	//constructor sin parámetros
	BiciMontaña();//implementando Bicileta con sus valores. Esta es una lista de inicialización.
	//constructor con parámetros
	BiciMontaña(string _color, int _size, string _marca, bool sDelantera, bool sTrasera);

	void frenar(int potencia)
	{
		Bicicleta::frenar();
	}
	
	void frenar()
	{
		cout << "freno en biciMontaña";
	}

	~BiciMontaña();

protected:
	int* obligatorioM;
	bool suspensionDelantera; //aquí no puedo agregar valores. Sólo en el objeto. En la implementación del constructor ahí puedo definirlo.
	bool suspensionTrasera;
};
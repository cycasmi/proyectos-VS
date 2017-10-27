#include <iostream>
#include <string>
using namespace std;

class Avion
{
private:
	int numSerie;
	string marca;
	string modelo;
	Motor* motor;
	string alas;

public:
	string getMarca() { return marca;  }
	void setMarca(string laMarca) { marca = laMarca; }
	void setModelo(string elModelo) { modelo = elModelo; }
	void setMotor(Motor* elMotor) { motor = elMotor; }
	void setAlas(string lasAlas) { alas = lasAlas; }
};

class Motor
{
	float posicion;
	string marca;
	int numSerie;
};

class Alas
{
private:
	string marca;
	int numSerie;
	int hipersustentador;

public:
	string getMarca() { return marca; }
	void setMarca(string laMarca) { marca = laMarca; }
	void setNumSerie(int elNumSerie) { numSerie = elNumSerie; }
	void sethipersustentador(int elSustentador) { hipersustentador = elSustentador; }
};

class Piloto
{

};

class Builder
{
protected:
	Avion* avion;
public:
	Avion* getAvion()
	{
		return avion;
	}
	Avion createAvion()
	{
		avion = new Avion();
	}

	virtual void buildAlas() = 0;
	virtual void buildMotor() = 0;
	virtual void buildMarca() = 0;
	virtual void buildModelo() = 0;
	virtual void buildNumSerie() = 0;

};

class BuilderBoeing : public Builder
{
	void buildAlas()
	{
		Alas * lasAlas = new Alas();
		lasAlas->setMarca("Boeing");
		avion->setAlas("lasAlas");
	}

	void buildMotor()
	{
		Motor* elMotor = new Motor();
		elMotor->setPotencia("3500");
		avion->setMotor(elMotor);
	}

	void buildMarca()
	{
		avion->setMarca("Boeing");
	}

	void buildModelo()
	{

	}
};

class Director
{
private:
	Builder* builder;

protected:
	void setBuilder(Builder* bd)
	{
		builder = bd;
	}

	Avion* getAvion()
	{
		return builder->getAvion();
	}

	void construct()
	{
		builder->createAvion();
		builder->buildModelo();
		builder->buildNumSerie();
		builder->buildMarca();
		builder->buildMotor();
	}
};


int main()
{
	Director* dir = new Director();
	dir->setBuilder(new BuilderBoeing());
	dir->construct();

	Avion* miAvion = dir->getAvion();
	cout << miAvion->getMarca();
	return 0;
}
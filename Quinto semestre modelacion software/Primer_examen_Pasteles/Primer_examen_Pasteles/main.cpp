#include<iostream>
using namespace std;



class Sucursales
{
public:
	virtual void ingredientes() = 0;
};

class Aguascalientes
{
public:
	void ingredientes()
	{
		cout << "Leche, huevo, mantequilla";
	}
};

class DistritoF
{
public:
	void ingredientes()
	{
		cout << "Chocolate, frutas, merengue";
	}
};

class Pastel
{

};

class  Builder
{
protected:
	Pastel* pastel;

public:
	Pastel createPastel()
	{
		pastel = new Pastel();
	}

	virtual void batido() = 0;
	virtual void amasado() = 0;
	virtual void horneado() = 0;
	virtual void decorado() = 0;
	virtual void empacado() = 0;
};

class Leche : public Builder
{
	void batido()
	{
		cout << "Batido para pastel de 3 leches.";
	}
	void amasado()
	{
		cout << "Amasado para pastel de 3 leches.\n";
	}
	void horneado()
	{
		cout << "Horneado para pastel de 3 leches.\n";
	}
	void decorado()
	{
		cout << "Decorado para pastel de 3 leches.\n";
	}
	void empacado()
	{
		cout << "Empacado para pastel de 3 leches.\n";
	}
};

class Sacher : public Builder
{
	void batido()
	{
		cout << "Batido para pastel Sacher.";
	}
	void amasado()
	{
		cout << "Amasado para pastel Sacher.\n";
	}
	void horneado()
	{
		cout << "Horneado para pastel Sacher.\n";
	}
	void decorado()
	{
		cout << "Decorado para pastel Sacher.\n";
	}
	void empacado()
	{
		cout << "Empacado para pastel Sacher.\n";
	}
};

class Imposible : public Pastel
{

};

template<class T>
class Iterator;

template<class T>
class Aggregate
{
public:
	friend class Iterator<T>;
	Aggregate()
	{
		pos = 0;
		size = 10; //tamaño predefinido, pero deberíamos hacer que el arreglo fuera dinámico
		lista = new T[size];
	}
	void add(T element)
	{
		if (pos < size)
			lista[pos++] = element;
	}
	Iterator<T>* getIterator()
	{
		return new Iterator<T>(this);
	}

	~Aggregate()
	{
		delete[] lista;
	}

	T getElementAt(int pos){
		return lista[pos];
	}

	int getPos()
	{
		return pos;
	}

private:
	T* lista;
	int size;
	int pos;
};

template<class T>
class Iterator
{
public:
	Iterator(Aggregate<T>* aggregate) : idx(0), aggregate(aggregate)
	{}

	T next()
	{
		if (hasNext())
			//return aggregate->getElementAt(idx++);
			return aggregate->lista[idx++];
		else
			return 0;
	}

	bool hasNext()
	{
		return (idx < aggregate->getPos());
	}
	~Iterator(){}

private:
	Iterator(){}
	Aggregate<T>* aggregate;
	int idx;
};

class Creator
{
private:

protected:
	Creator() {}
public:
	virtual Builder* factoryMethod(string) = 0;

	Builder* createProduct(string type)
	{
		Builder* product = factoryMethod(type);
		product->batido();
		product->amasado();
		product->horneado();
		product->decorado();
		product->empacado();
		return product;
	}

};

class ConcreteCreatorP : public Creator
{
private:
	ConcreteCreatorP(){}
	static bool instanceFlag;
	static ConcreteCreatorP *single;

	Builder* factoryMethod(string type)
	{
		if (type.compare("Leche") != 1){
			return new Leche;
		}
		else if (type.compare("Sacher") != 1){
			return new Sacher;
		}
		else if (type.compare("Algo") != 1){
			return new Leche;
		}
	}

public:
	static ConcreteCreatorP* getInstance();

	~ConcreteCreatorP()
	{
		instanceFlag = false;
	}
};

bool ConcreteCreatorP::instanceFlag = false;
ConcreteCreatorP* ConcreteCreatorP::single = NULL;

ConcreteCreatorP* ConcreteCreatorP::getInstance()
{
	if (!instanceFlag)
	{
		single = new ConcreteCreatorP();
		instanceFlag = true;
		return single;
	}
	else
	{
		//return single;
		single = new ConcreteCreatorP();
		instanceFlag = true;
		return single;
	}
}

class ConcreteCreatorS : public Creator
{
private:
	ConcreteCreatorS(){}
	static bool instanceFlag;
	static ConcreteCreatorS *single;

	Builder* factoryMethod(string type)
	{
		if (type.compare("Leche") != 1){
			return new Leche;
		}
		else if (type.compare("Sacher") != 1){
			return new Sacher;
		}
		else if (type.compare("Algo") != 1){
			return new Leche;
		}
	}

public:
	static ConcreteCreatorS* getInstance();

	~ConcreteCreatorS()
	{
		instanceFlag = false;
	}
};

bool ConcreteCreatorS::instanceFlag = false;
ConcreteCreatorS* ConcreteCreatorS::single = NULL;

ConcreteCreatorS* ConcreteCreatorS::getInstance()
{
	if (!instanceFlag)
	{
		single = new ConcreteCreatorS();
		instanceFlag = true;
		return single;
	}
	else
	{
		//return single;
		single = new ConcreteCreatorS();
		instanceFlag = true;
		return single;
	}
}

int main()
{
	Creator* aguascalientes,* distrito;
	aguascalientes = ConcreteCreatorP::getInstance();
	Builder* leches = aguascalientes->createProduct("Leche");


	distrito = ConcreteCreatorP::getInstance();;
	Aggregate<Creator*> algo;
	algo.add(distrito);
	Iterator<Creator*>* i;
	for (i = algo.getIterator(); i->hasNext();)
	{
		(i->next())->createProduct("Sacher");
	}
}
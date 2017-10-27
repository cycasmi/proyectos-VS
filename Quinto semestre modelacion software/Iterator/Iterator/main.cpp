#include<iostream>
using namespace std;

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

class Persona
{
public:
	Persona(){}
	Persona(int edad){ this->edad = edad; }
	~Persona(){}
	int getEdad()
	{
		return edad;
	}
private:
	int edad;
};

int main()
{
	Persona a(17);
	Persona b(18);
	Persona c(19);
	Persona d(20);
	Persona e(21);
	Persona f(22);
	Persona g(23);
	Persona h(24);
	Persona o(25);
	Persona j(26);
	Persona k(27);
	Persona l(28);
	Aggregate<Persona> p;
	p.add(a);
	p.add(b);
	p.add(c);
	p.add(d);
	p.add(e);
	p.add(f);
	p.add(g);
	p.add(h);
	p.add(o);
	p.add(j);
	p.add(k);
	p.add(l);
	Iterator<Persona>* i;
	for (i = p.getIterator(); i->hasNext();)
	{
		cout << i << " " << (i->next()).getEdad() << endl;
	}
	delete i;
}
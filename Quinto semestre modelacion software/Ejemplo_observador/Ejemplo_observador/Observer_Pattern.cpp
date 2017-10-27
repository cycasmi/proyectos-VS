#include <iostream>

class Observer
{
protected:
	Observer() {}


public:
	virtual void update(int state) = 0;

};

class ConcreteObserver : Observer
{
protected:
	ConcreteObserver() {}

public:
	void update(int state)
	{
		std::cout << "EL estado del objeto ahora es: " + state;
	}
};

class Subject
{
protected:
	Subject() {}

public:
	virtual void addObserver(ConcreteObserver o) = 0;

	virtual void removeObserver(ConcreteObserver o) = 0;

	virtual void notifyObservers() = 0;
};

class ConcreteSubject : Subject
{
private:
	//ConcreteSubject() {}
	ConcreteObserver observers[10];
	int size = 0;


public:
	void addObserver(ConcreteObserver o)
	{

	}

	void removeObserver(ConcreteObserver o)
	{

	}

	void notifyObserver()
	{

	}
};



int main()
{
	return 0;
}
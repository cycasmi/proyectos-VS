#include <iostream>

class ArrayPositiveInts;

class Proxy
{
private:
	ArrayPositiveInts& arr;
	int index;

public:
	Proxy(ArrayPositiveInts& arr, int _index)
		: arr(arr), index(_index){}

	Proxy& operator = (int value);
};

class ArrayPositiveInts
{
private:
	int *values;
	int size;

public:
	friend class Proxy;
	ArrayPositiveInts()
	{
		size = 100;
		values = new int[size];
	}

	Proxy operator[] (int index)
	{
		return Proxy(*this, index);
	}

	int get(int pos)
	{
		return values[pos];
	}

};

Proxy & Proxy::operator=(int value)
{
	if (value >= 0)
	{
		*(arr.values + index) = value;
		return *this;
	}
	else
	{
		std::cout << "error" << std::endl;
		return *this;
	}
}

int main()
{
	ArrayPositiveInts a;

	a[0] = -1;
	//std::cout << a.get(0) << std::endl;
	a[0] = 1;
	std::cout << a.get(0);
	//a[0] = -1;
	//std::cout << a.get(0);

	return 0;
}
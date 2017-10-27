#include "Enteros.h"

class Multiplicacion : public Enteros
{
public:

	virtual void multiplicar(Enteros a, Enteros b)
	{
		int result = convertor(a) * convertor(b);

		cout << result << endl;
	}
};

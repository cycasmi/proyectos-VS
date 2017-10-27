#include "matriz.h"

int main()
{
	matriz<int> m;
	//m.print();

	//cout << m[0][0];

	//Para poderlo modificar, le pusimos un & para poder modificarlo
	m[0][0] = 10000;
	cout << m[0][0];

	return 0;
}

#include <iostream>
using namespace std;

void incremento(short *a, int *b, long *c, float *d, double *e)
{
	*a += *a / 2;
	*b += *b / 2;
	*c += *c / 2;
	*d += *d / 2;
	*e += *e / 2;
}

int main()
{
	short *a = new short; 
	*a = 2;
	int *b = new int;
	*b= 4;
	long *c = new long;
	*c = 6;
	float *d = new float;
	*d = 5.6;
	double *e = new double;
	*e = 14.7;

	incremento(a, b, c, d, e);

	cout << *a << endl << *b << endl << *c << endl << *d << endl << *e << endl;

	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int variable;
	int another;
	int* pointer;

	variable = 345;
	pointer = &variable;

	cout << "Value of 'variable': " << variable << endl;
	cout << "Address of 'variable': " << &variable << endl;
	cout << "Value of 'pointer': " << pointer << endl;
	cout << "Address of 'pointer': " << &pointer << endl;
	cout << "Value pointed by 'pointer': " << *pointer << endl;

	return 0;
}
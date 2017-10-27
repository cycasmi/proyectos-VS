/*PUNTOS IMPORTANTES

*/

#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long number)
{
	if (number <= 1)
		return number;
	else
		return fibonacci(number - 1) +  fibonacci (number - 2);
}

int main()
{
	long result, number;

	cout << "Teclee un numero entero: ";
	cin >> number;
	result = fibonacci(number);
	cout << "Fibonacci(" << number << ") = " << result << endl;

	return 0;
}
#include <iostream>
using namespace std;

float interest_return(int y, float n)
{
	if (y == 0)
		return n;

	else
		return (1 + (0.1)) * interest_return(y-1, n);

}

int main()
{
	cout << interest_return(5, 1000);

	return 0;
}
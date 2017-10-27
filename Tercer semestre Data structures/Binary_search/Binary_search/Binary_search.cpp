#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void fill_random_sorted(int base_array[], int array_size)
{
	int total = 0, num;

	for (int i = 0; i < array_size; i++)
	{
		num = rand() % 10;
		total += num;
		base_array[i] = total;
	}
}

void binary_search()
{

}

int main()
{

	return 0;
}
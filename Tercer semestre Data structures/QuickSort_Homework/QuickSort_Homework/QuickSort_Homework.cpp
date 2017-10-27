// Name: Cynthia Berenice Castillo Millán.
// Student no. A01374530
// Homework 3 Quicksort

#include <iostream>
#include <cstdlib> //for functions srand and rand
#include <ctime> // for function time
using namespace std;

void createArray(int array[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		//fill array with random numbers from 0 to 99
		array[i] = (10 + rand() % 90);
		cout << array[i] << " ";
	}
	cout << endl;
}

int subArrays(int start, int end, int arrayA[])
{
	int temp;
	int leftIndex = start;
	int rightIndex = end;
	int pivot = arrayA[start];

	while (leftIndex < rightIndex)
	{
		while (arrayA[rightIndex] > pivot)
			rightIndex--;

		while ((leftIndex < rightIndex) && (arrayA[leftIndex] <= pivot))
			leftIndex++;

		if (leftIndex < rightIndex)
		{
			temp = arrayA[leftIndex];
			arrayA[leftIndex] = arrayA[rightIndex];
			arrayA[rightIndex] = temp;
		}
	}

	temp = arrayA[rightIndex];
	arrayA[rightIndex] = arrayA[start];
	arrayA[start] = temp;

	return rightIndex;

}

void quickSort(int start, int end, int arrayA[])
{
	int pivot;

	if (start < end)
	{
		pivot = subArrays(start, end, arrayA);

		quickSort(start, pivot - 1, arrayA);

		quickSort(pivot + 1, end, arrayA);
	}

}

int binarySearch(int low, int high, int arrayA[], int word)
{
	int middle = (low + high) / 2;

	if (high < low)
	{
		return -1;
	}

	else
	{
		if (arrayA[middle] > word)
			binarySearch(low, middle - 1, arrayA, word);
		else if (word > arrayA[middle])
			binarySearch(middle + 1, high, arrayA, word);
		else
			return middle;
	}
}


int main()
{
	//srand(time(0));

	const int size = 30; //array size
	int unsortedArray[size];

	cout << "Unsorted array\n\n";
	//function that creates an unsorted array of ints.
	createArray(unsortedArray, size);

	//function that sort the unsorted array.
	quickSort(0, size - 1, unsortedArray);

	cout << "\nSorted array\n\n";
	//prints the array sorted
	for (int i = 0; i < size; i++)
	{
		cout << unsortedArray[i] << " ";
	}
	cout << endl;

	int pos = binarySearch(0, size - 1, unsortedArray, 34);

	if (unsortedArray[pos] == 34)
		cout << pos;

	return 0;
}
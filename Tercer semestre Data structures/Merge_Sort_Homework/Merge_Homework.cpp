#include <iostream>
using namespace std;

#include <cstdlib> // prototypes for functions srand and rand
using std::rand;
using std::srand;

#include <ctime> // prototype for function time
using std::time;

void createArray(int array[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		array[i] = (10 + rand() % 90);
		cout << array[i] << " ";
	}
	cout << endl;
}

void merge(int left, int middle1, int middle2, int right, int arrayA[], int arrayB[], int arrayC[])
{
	int leftIndex = left;
	int rightIndex = middle2;
	int combinedIndex = left;

	while (leftIndex <= middle1 && rightIndex <= right)
	{
		if (arrayA[leftIndex] <= arrayA[rightIndex])
			arrayC[combinedIndex++] = arrayA[leftIndex++];
		else
			arrayC[combinedIndex++] = arrayA[rightIndex++];	
	}

	if (leftIndex == middle2) // if at end of left vector          
	{
		while (rightIndex <= right) // copy in rest of right vector
			arrayC[combinedIndex++] = arrayA[rightIndex++];
	} // end if                                                     
	else // at end of right vector                                   
	{
		while (leftIndex <= middle1) // copy in rest of left vector
			arrayC[combinedIndex++] = arrayA[leftIndex++];
	} // end else  

	// copy values back into original vector
	for (int i = left; i <= right; i++)
		arrayA[i] = arrayC[i];
}


//low is 0, high is the array size-1
void subArrays(int low, int high, int arrayA[], int arrayB[], int arrayC[])
{
	//test base case. If the size of the parts equals 1
	if ((high - low) >= 1)
	{
		int middle1 = (low + high) / 2;
		int middle2 = middle1 + 1;

		//recursive calls
		subArrays(low, middle1, arrayA, arrayB, arrayC);
		subArrays(middle2, high, arrayA, arrayB, arrayC);

		// merge two sorted vectors after split calls return
		merge(low, middle1, middle2, high, arrayA, arrayB, arrayC);
	}
}

int main()
{
	srand(time(0));

	const int size = 30; //array size
	int unsortedArray[size];
	int temporalArray[size];
	int sortedArray[size*2];

	//function that creates an unsorted array of ints.
	createArray(unsortedArray, size);

	subArrays(0, size - 1, unsortedArray, temporalArray, sortedArray);

	for (int i = 0; i < size; i++)
	{
		cout << unsortedArray[i] << " ";
	}
	cout << endl;

	return 0;
}
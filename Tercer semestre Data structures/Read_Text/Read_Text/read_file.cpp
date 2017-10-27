#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string filename = "ASOIF_names.txt";
	std::string line;

	std::ifstream txtfile(filename.c_str());
	if (txtfile.is_open())
	{
		while (getline(txtfile, line))
		{
			std::cout << line << std::endl;
		}
		txtfile.close();
	}
	else std::cout << "Unable to open file: " << filename << std::endl;
}

/*

// Name: Cynthia Berenice Castillo Millán.
// Student no. A01374530
// Homework 4 Search names

#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;

int getNames(string arrayNames[])
{
int i = 0;
string filename = "ASOIF_names.txt";
string line;

ifstream txtfile(filename.c_str());
if (txtfile.is_open())
{
while (getline(txtfile, arrayNames[i]))
i++;

txtfile.close();
}
else std::cout << "Unable to open file: " << filename << std::endl;

return i;
}

void merge(int left, int middle1, int middle2, int right, string arrayA[], string arrayC[])
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
void subArrays(int low, int high, string arrayA[], string arrayC[])
{
//test base case. If the size of the parts equals 1
if ((high - low) >= 1)
{
int middle1 = (low + high) / 2;
int middle2 = middle1 + 1;

//recursive calls
subArrays(low, middle1, arrayA, arrayC);
subArrays(middle2, high, arrayA, arrayC);

// merge two sorted vectors after split calls return
merge(low, middle1, middle2, high, arrayA, arrayC);
}
}

int binarySearch(int low, int high, string arrayA[], string word)
{
int middle = (low + high) / 2;
int pos = arrayA[middle].find(word);
if (pos >= 0); else pos = 0;
int lenght = word.length();

if (high < low)
{
return -1;
}

else
{
if (arrayA[middle].substr(pos, lenght) > word)
return binarySearch(low, middle - 1, arrayA, word);
else if (word > arrayA[middle].substr(pos, lenght))
return binarySearch(middle + 1, high, arrayA, word);
else
{
if (arrayA[middle].substr(pos, lenght) == word)
return middle;
else
return -1;
}
}
}


int main()
{
int i, j = 0;
int pos;
string word;
string names[50];
string temp[50];

for (i = 0; i < getNames(names); i++)
{
cout << i << " = " << names[i] << endl;
j++;
}

subArrays(0, j - 1, names, temp);

cout << endl << endl;
for (i = 0; i < j; i++)
{
cout << i << " = " << names[i] << endl;
}

/*word = "joy";
pos = names[21].find(word);
if (pos >= 0);
else
pos = 0;
int lenght = word.length();

if (names[21].substr(pos, lenght) == word)
cout << "EXITO";
else
cout << "No existe ahi";

cout << "\n\nWrite a name to search:";
cout << "\n(sensible to upper and lower cases)\n";
do
{
	cin >> word;
	cout << endl << binarySearch(0, j - 1, names, word) << endl;

	cout << "\nWrite a name to search:";
} while (word != "*");

return 0;
}*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void getTable(int table[][3], int* numPairs); //Stores each pair in a matrix, and gets the number of pairs.


int main()
{
	int numElems;
	int table[50][3];
	getTable(table, &numElems); //Fill the matrix with the pairs 

	string::size_type size; //Size of the substring with the specified data type
	string enterNum;
	int numSize;
	cin >> enterNum;
	numSize = enterNum.size();
	cout << numSize;

	for (int i = 0; i < numSize; i++)
	{
		enterNum[i];
	}
	
	return 0;
}

//Stores each pair in a matrix, and gets the number of pairs.
void getTable(int table[][3], int *numPairs)
{
	string::size_type size; //Size of the substring with the specified data type
	string states;
	cout << "Escriba el numero de estados:";
	getline(cin, states);
	*numPairs = stoi(states, &size); //Convert string to int

	int state;

	for (int i = 0; i < *numPairs; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			cin >> state;
			table[i][j] = state;
		}
	}

	for (int i = 0; i < *numPairs; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			cout << table[i][j];
		}
		cout << endl;
	}
	/*string::size_type size; //Size of the substring with the specified data type
	string text;//Reads name of the file
	string line; //Reads each line of the file

	cout << "Escriba el nombre del archivo de texto:";
	getline(cin, text);
	ifstream file(text + ".txt"); //adds the type of text to its name

	if (file.is_open())
	{
		getline(file, line);
		*numPairs = stoi(line, &size); //Convert string to int

		//Stores values of the file in a matrix
		for (int i = 0; i < *numPairs; i++)
		{
			getline(file, line);
			//cout << line;

			for (int j = 0; j < 3; j++)
			{
				if (j == 0){
					table[i][j] = line[j];
				}
				else{
					table[i][j] = (j % 2 == 1) ? line[j * 2] : line[j + j];
				}
			}
		}
		file.close();
	}
	else cout << "No se encuentra el archivo";*/
}
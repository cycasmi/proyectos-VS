/* Nombre: Cynthia Berenice Castillo Millán
   Matrícula: A01374530
   Proyecto 1: Propiedades de las relaciones de conjuntos.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void getPairs(char pairs[][2], int* numPairs); //Stores each pair in a matrix, and gets the number of pairs.
int set_S(char s[], char pairs[][2], int* numPairs); //Creates the set S

//Check if the relation has these properties
bool reflexive(char s[], int s_elems, char pairs[][2], int* numPairs);
bool irreflexive(char s[], int s_elems, char pairs[][2], int* numPairs);
bool symmetric(char s[], int s_elems, char pairs[][2], int* numPairs);
bool asymmetric(char s[], int s_elems, char pairs[][2], int* numPairs);
bool transitive(char s[], int s_elems, char pairs[][2], int* numPairs);

int main() {
	int numPairs; //Number of pairs in the file
	char pairs[50][2]; //Matrix formed by the pairs of the file
	getPairs(pairs, &numPairs); //Fill the matrix with the pairs 
	char s[100]; //Create the possible pairs needed to satisfy the closure in each relation
	int s_elems = set_S(s, pairs, &numPairs); //Returns the number of elements in S and fill S array.
	
	//Print set S
	cout << "El conjunto S es: {";
	for (int i = 0; i < s_elems; i++){
		cout << s[i] << ((i+1 == s_elems)? "" : ", ");
	}
	cout << "} \n\n";

	//Print the existing properties in the relation
	cout << "La relacion es: ";
	int ref = 0, irref = 0, sym = 0, asym = 0, trans = 0;
	ref = reflexive(s, s_elems, pairs, &numPairs);
	cout << ((ref == 1)? "Reflexiva, " : "");
	irref = irreflexive(s, s_elems, pairs, &numPairs);
	cout << ((irref == 1) ? "Irreflexiva, " : "");
	sym = symmetric(s, s_elems, pairs, &numPairs);
	cout << ((sym == 1) ? "Simetrica, " : "");
	asym = asymmetric(s, s_elems, pairs, &numPairs);
	cout << ((asym == 1) ? "Asimetrica, " : "");
	trans = transitive(s, s_elems, pairs, &numPairs);
	cout << ((trans == 1) ? "Transitiva, " : "");
	cout << endl;

	//Check if it has no relation properties
	if ((ref + irref + sym + asym + trans) == 0)
		cout << "No cumple ninguna propiedad. \n";

	return 0;
}

//Stores each pair in a matrix, and gets the number of pairs.
void getPairs(char pairs[][2], int *numPairs)
{
	string::size_type size; //Size of the substring with the specified data type
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
			for (int j = 0; j < 2; j++)
			{
				if (j == 0){
					pairs[i][j] = line[j];
				}
				else{
					pairs[i][j] = (j % 2 == 1) ? line[j * 2] : line[j + j];
				}
			}
		}
		file.close();
	} 
	else cout << "No se encuentra el archivo";
}


//Creates the set S of the pairs.
int set_S(char s[], char pairs[][2], int* numPairs)
{	
	s[0] = pairs[0][0]; //stores the first value of the pair in the s array
	int s_numElems = 1; //number of elements in s
	
	//extracts each value of the pairs to form s
	for (int i = 0; i < *numPairs; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int b = 0; b < s_numElems; b++)
			{
				if (s[b] == pairs[i][j])
					break;
				else if (b == (s_numElems - 1)){
					s[s_numElems] = pairs[i][j];
					s_numElems++;
				}
			}
		}
	}

	return s_numElems;
}

bool reflexive(char s[], int s_elems, char pairs[][2], int* numPairs)
{
	int closure = 0; //number of reflexive cases found

	for (int a = 0; a < s_elems; a++)
	{
		for (int i = 0; i < *numPairs; i++)
		{
			//Compairs the pairs to check if its reflexive
			if ((pairs[i][0] == s[a]) && (pairs[i][1] == s[a])){
				closure++;
				break;
			}
		}
	}

	if (closure == s_elems) //check if the reflexive property is satisfied
		return true;
	else
		return false;
}

bool irreflexive(char s[], int s_elems, char pairs[][2], int* numPairs)
{
	int closure = 0; //number of reflexive cases found

	for (int a = 0; a < s_elems; a++)
	{
		for (int i = 0; i < *numPairs; i++)
		{
			if ((pairs[i][0] == s[a]) && (pairs[i][1] == s[a])){
				closure++;
				break;
			}
		}
		if (closure > 0)
			break;
	}

	if (closure > 0) //If a relfexive case is found, its irreflexive
		return false;
	else
		return true;
}


bool symmetric(char s[], int s_elems, char pairs[][2], int* numPairs)
{
	int closure = 0;
	char left_elem; //stores the expected value in the right side of other pair
	char right_elem; //stores the expected value in the left side of other pair

	for (int i = 0; i < *numPairs; i++)
	{
		left_elem = pairs[i][0];
		right_elem = pairs[i][1];

		for (int a = 0; a < *numPairs; a++)
		{
			//if the symmetric expected pair is found, the closure value increase
			if ((pairs[a][0] == right_elem) && (pairs[a][1] == left_elem)){
				closure++;
				break;
			}
		}
	}

	if (closure == *numPairs) //Number of pairs must be equal to closure
		return true;
	else
		return false;

}


bool asymmetric(char s[], int s_elems, char pairs[][2], int* numPairs)
{
	int closure = 0;
	char left_elem; //stores the expected value in the right side of other pair
	char right_elem; //stores the expected value in the left side of other pair

	for (int i = 0; i < *numPairs; i++)
	{
		left_elem = pairs[i][0];
		right_elem = pairs[i][1];

		for (int a = 0; a < *numPairs; a++)
		{
			//If it founds a symmetric case, it increase closure
			if ((pairs[a][0] == right_elem) && (pairs[a][1] == left_elem)){
				closure++;
				break;
			}
		}
		if (closure > 0) //If a symmetric case is found, it ends loops
			break;
	}

	if (closure > 0)
		return false;
	else
		return true;
}

bool transitive(char s[], int s_elems, char pairs[][2], int* numPairs)
{
	int transitive_pairs = 0; //Number of transitive pairs expected to find
	int closure = 0; //Number of transitive pairs found
	char left_elem; 
	char right_elem;
	char transitive_left;
	char transitive_right;

	for (int i = 0; i < *numPairs; i++)
	{
		left_elem = pairs[i][0];
		right_elem = pairs[i][1];

		for (int i_2 = 0; i_2 < *numPairs; i_2++)
		{
			if (right_elem == pairs[i_2][0]){ //find if there's any transitive pair to found 
				transitive_pairs++;
				for (int i_3 = 0; i_3 < *numPairs; i_3++){ 
					if ((pairs[i_3][0] == left_elem) && (pairs[i_3][1] == pairs[i_2][1])){ //Search for the expected pair
						closure++;
						break;
					}
				}
			}
		}
	}

	if (closure == transitive_pairs) //checks if it is or not trasitive
		return true;
	else
		return false;
}
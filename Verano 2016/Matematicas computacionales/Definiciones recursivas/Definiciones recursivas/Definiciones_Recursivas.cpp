#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void getBasis(string basis[], string inductiveStep[], int* basisElems, int*inductiveElems);
void getVaribles(string inductiveStep, char variables[], int *variableElems);
void getVaribles(string inductiveStep[], char variables[],  int inductiveElems, int *variableElems);
void noRepeat(string function[], string word, int *index);
void noRepeat(char function[], char word, int *index);
string remplazar(string word, char letter, string replacement);
void copyValues(string basis[], string words[], int* basisElems, int* wordElems);
void cases(char letter, string inductiveStep[], string words[], int *inductiveElems, int *wordElems);
void createWords(int time, string basis[], string words[], char variables[], int* basisElems, int* wordElems, int* variableElems);
void getLiterals(string word, int *numliterals, char literals[]);
void solutionFill(string solucion[], int sol, string inductiveElem, int var, int basisElems);
void createWords(int times, string inductive[], int induc, string solucion[], int* sol, char variable[], int* var, string basis[], int* basisElems);

int main()
{
	string::size_type size; //Size of the substring with the specified data type

	const int basisSize = 50;
	const int inductiveSize = 20;
	string timeS;
	int numliterals = 0;
	int times;
	int basisElems = -1;
	int inductiveElems = -1;
	int variableElems = 0;
	int wordElems = 0;
	int limit = 0;
	int sol = 0;

	string basis[basisSize]; //the current words created
	string inductiveStep[inductiveSize];
	char variables[6]; //u, v, w, x, y, z
	string words[50]; //existing words in language
	char literals[6];
	string solution[50];

	cout << "Inserte el numero de veces que desea aplicar el paso recursivo: ";
	getline(cin, timeS);
	times = stoi(timeS, &size);

	getBasis(basis, inductiveStep, &basisElems, &inductiveElems);

	/*for (int i = 0; i < basisElems; i++)
	{
		cout << basis[i] << ", ";
	}
	cout << endl << endl;

	for (int i = 0; i < inductiveElems; i++)
	{
		cout << inductiveStep[i] << ", ";
	}
	cout << endl << endl;*/

	//getVaribles(inductiveStep, variables, inductiveElems, &variableElems);
	
	for (int a = 0; a <= times; a++)
	{
		createWords(a, inductiveStep, inductiveElems, solution, &sol, variables, &variableElems, basis, &basisElems);
	}

	/*for (int i = 0; i < basisElems; i++)
	{
		cout << basis[i] << ", ";
	}*/

	/*for (int i = 0; i < variableElems; i++)
	{
		cout << variables[i] << ", ";
	}*/

	//getLiterals(inductiveStep[0], &numliterals, literals);


	//solutionFill(solution, sol, inductiveStep[0], 2, 2);

}

void getBasis(string basis[], string inductiveStep[], int* basisElems, int* inductiveElems)
{
	string input;

	while (input != "-1")
	{
		cout << "Escriba un caso base: ";
		getline(cin, input);
		basis[(*basisElems)+1] = input;
		(*basisElems)++;
	}

	input = '0';
	while (input != "-1")
	{
		cout << "Escriba un caso recursivo: ";
		getline(cin, input);
		inductiveStep[(*inductiveElems)+1] = input;
		(*inductiveElems)++;
	}
}

void noRepeat(string function[], string word, int *index)
{
	if (*index == 0){
		function[0] = word;
		(*index)++;
	}

	for (int i = 0; i < *index; i++)
	{
		if (word == function[i])
			break;
		else if (i == (*index- 1)){
			function[*index] = word;
			(*index)++;
		}
	}
}

void noRepeat(char function[], char word, int *index)
{
	if (*index == 0){
		function[0] = word;
		(*index)++;
	}

	for (int i = 0; i < *index; i++)
	{
		if (word == function[i])
			break;
		else if (i == ((*index) - 1)){
			function[*index] = word;
			(*index)++;
		}
	}
}

void getVaribles(string inductiveStep, char variables[], int *variableElems)
{
	for (int j = 0; j < inductiveStep.size(); j++)
	{
		switch ((inductiveStep[j]))
		{
		case'u':
			noRepeat(variables, inductiveStep[j], variableElems);
			break;
		case 'v':
			noRepeat(variables, inductiveStep[j], variableElems);
			break;
		case'w':
			noRepeat(variables, inductiveStep[j], variableElems);
			break;
		case 'x':
			noRepeat(variables, inductiveStep[j], variableElems);
			break;
		case'y':
			noRepeat(variables, inductiveStep[j], variableElems);
			break;
		case 'z':
			noRepeat(variables, inductiveStep[j], variableElems);
			break;
		default:
			break;
		}
	}
}

void getVaribles(string inductiveStep[], char variables[], int inductiveElems, int *variableElems)
{
	for (int i = 0; i < inductiveElems; i++)
	{
		for (int j = 0; j < inductiveStep[i].size(); j++)
		{
			switch ((inductiveStep[i][j]))
			{
			case'u':
				noRepeat(variables, inductiveStep[i][j], variableElems);
				break;
			case 'v':
				noRepeat(variables, inductiveStep[i][j], variableElems);
				break;
			case'w':
				noRepeat(variables, inductiveStep[i][j], variableElems);
				break;
			case 'x':
				noRepeat(variables, inductiveStep[i][j], variableElems);
				break;
			case'y':
				noRepeat(variables, inductiveStep[i][j], variableElems);
				break;
			case 'z':
				noRepeat(variables, inductiveStep[i][j], variableElems);
				break;
			default:
				break;
			}
		}
	}
}

string remplazar(string word, char letter, string replacement)
{
	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == letter)
		{
			word.replace(i, 1, replacement);
		}
	}

	return word;
}

void copyValues(string basis[], string words[], int* basisElems, int* wordElems)
{
	for (int i = 0; i < *basisElems; i++){
		words[*wordElems] = basis[i];
		(*wordElems)++;
	}

}

void cases(char letter, string inductiveStep[], string words[], int *inductiveElems, int *wordElems)
{

	/*switch ()
	{
	case'u':
		break;
	case 'v':
		break;
	case'w':
		break;
	case 'x':
		break;
	case'y':
		break;
	case 'z':
		break;
	default:
		break;
	}*/
}

void getLiterals(string word, int *numliterals, char literals[])
{
	for (int j = 0; j < word.size(); j++)
	{
		switch (word[j])
		{
		case'u':
			noRepeat(literals, word[j], numliterals);
			break;
		case 'v':
			noRepeat(literals, word[j], numliterals);
			break;
		case'w':
			noRepeat(literals, word[j], numliterals);
			break;
		case 'x':
			noRepeat(literals, word[j], numliterals);
			break;
		case'y':
			noRepeat(literals, word[j], numliterals);
			break;
		case 'z':
			noRepeat(literals, word[j], numliterals);
			break;
		default:
			break;
		}
	}
}

void solutionFill(string solucion[], int sol, string inductiveElem, int var, int basisElems)
{
	int limit = pow(basisElems, var);

	for (int i = sol; i < sol + limit; i++)
	{
		solucion[i] = inductiveElem;
	}

	/*for (int i = sol; i < limit; i++)
	{
		cout << solucion[i] << endl;
	}*/

}

void createWords(int times, string inductive[], int induc, string solucion[], int* sol, char variable[], int* var, string basis[], int* basisElems)
{
	int s, original;
	original = *sol;
	s = *sol;

	if (times == 0)
	{
		cout << "\n" << times << " veces: ";
		for (int x = 0; x < *basisElems; x++)
		{
			cout << basis[x] << ", ";
		}
	}

	if (times >= 0)
		cout << "\n" << times + 1 << " veces: ";
		

	for (int i = 0; i < induc; i++)
	{
		*var = 0;
		getVaribles(inductive[i], variable, var);
		//cout << "S = " << s << endl;
		//cout << "Num variables encontradas en: " << inductive[i] << "es: " << *var << endl;
 		solutionFill(solucion, *sol, inductive[i], *var, *basisElems);
		for (int j = 0; j < *var; j++)
		{
			for (int variableB = 0; variableB < *basisElems; variableB++)
			{
				solucion[s] = remplazar(solucion[s], variable[j], (basis[variableB] == " ") ? "" : basis[variableB]);
				//cout << solucion[s] << " ";
				s++;
			}
			s = *sol;

			for (int k = 0; k < *basisElems; k++)
			{
				for (int l = 0; l < *var; l++)
				{
					solucion[s] = remplazar(solucion[s], variable[l], (basis[k] == " ")? "":basis[k]);
					(k %2 == 0)? s++ : s--;
				}
				(k % 2 == 0) ? s = (*sol)+ (*var)-1 : s = *sol;
			}
			((j == 0) && (j == (*var - 1))) ? (*sol = *sol + 1 * *basisElems) : (*sol = *sol + ((j == 0 && *var ==1) ? 1: j * *basisElems));
			s = *sol;
		}
	}
	if (times >= 0)
	{
		//cout <<"original: " << original << "sol: " << *sol << endl;
		for (int a = original; a < *sol; a++)
		{
			cout << solucion[a] << ", ";
			noRepeat(basis, solucion[a], basisElems);
		}
		original = *sol;
	}
}

//********************************************************************************************
//Tests (just paste in main to prove)
/*

//PRINTING NULLS
char a = NULL;
cout << a; //Shows a blank space

cin >> noskipws >> a;
cout << (a == ' ' ? NULL : 1); //if TRUE shows a 0

//prints blank spaces were prueba is equal to NULL
char prueba[5];
for (int i = 0; i < 5; i++)
{
	if (i == 2)
		//prueba[i] = 'a';
		prueba[i] = '1';
	else
		prueba[i] = NULL;

	cout << prueba[i];
}

//*******************************************
//LINKING STRINGS

string prueba = "Mama ";
string prueba2 = "Hola";
string prueba3 = "ya hay comida";

//insert string in a certain position
//prueba.insert(5, prueba3); //prueba = Mama ya hay comida

//inserts at position 5 the 4th(skips 3 chars) letter of prueba3 and the next 4 chars
//prueba.insert(5, prueba3, 3, 4); //prueba = Mama hay ;
//prueba.insert(5, "ya hay comida", 3, 4);

//Insert comma in the middle
//prueba.insert(4, 1, ','); //prueba = Mama, ;

//Repets 3 times the ? symbol at the end or the begining
//prueba.insert(prueba.end(), 3, '?');
//prueba.insert(prueba.begin(), 3, '?');

//Inserts string Hola at the begining and a space after prueba2
//prueba.insert(0, prueba2 + ' ');
//prueba.insert(0, prueba2 + ", " + prueba3 + ' ') //prueba = Hola, ya hay comida Mama
cout << prueba;

//******************************************
//PASSING STRING ARRAYS BY REFERENCE
string prueba[3];

for (int i = 0; i < 2; i++)
{
cin >> prueba[i];
}

test(prueba);

for (int i = 0; i < 3; i++)
{
cout << prueba[i];
}

void test(string prueba[])
{
prueba[2] = "miau";
}

*/
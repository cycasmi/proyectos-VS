#include <iostream>
#include <string>
#include "Queue.h"
#include "LinkedList.h"
using namespace std;

void menu(string *word, LinkedList<char> *variables, LinkedList<char> *constants, string *inicialVariable, LinkedList<LinkedList<string>> *productions);
void readValues(string *word, string *inicialVariable, LinkedList<LinkedList<string>> *productions);
void readText(){}
void askForProductions(LinkedList<LinkedList<string>> *productions);
void printProductions(LinkedList<LinkedList<string>> productions);
void getConstants(LinkedList<LinkedList<string>> productions, LinkedList<string> *constants);
string menuDerivations();
void leftDerivation(string initialVariable, string word, LinkedList<LinkedList<string>> productions, Queue<string> *result);
string recReplace(Node<LinkedList<string>> *head, Node<string> *internalHead, string word, LinkedList<string> *preDerivations, Node<string> *preDerivHead);
int searchLeft(string word);

void menu(string *word, LinkedList<string> *variables, LinkedList<string> *constants, string *inicialVariable, LinkedList<LinkedList<string>> *productions)
{
	string option;

	cout << "Seleccione como desea introducir los valores:\n";
	cout << "a) A mano\n";
	cout << "b) Leerlo de un archivo de texto\n";
	getline(cin, option);

	if (option == "a")
		readValues(word, inicialVariable, productions);
	else if (option == "b")
		readText;

}

void readValues(string *word, string *inicialVariable, LinkedList<LinkedList<string>> *productions)
{
	cout << "Inserte la palabra terminal a usar en las derivaciones: ";
	getline(cin, *word);

	cout << "Inserte las variable inicial: ";
	getline(cin, *inicialVariable);

	cout << endl;
	askForProductions(productions);
}

void askForProductions(LinkedList<LinkedList<string>> *productions)
{
	LinkedList<string> *variable;
	string substitute;

	cout << "Inserte la variable de las producciones: ";
	getline(cin, substitute);

	do {
		variable = new LinkedList<string>;
		do {
			variable->insertTail(substitute);
			cout << "Inserte las producciones de la variable: ";
			getline(cin, substitute);
		} while (substitute != " ");
		productions->insertTail(variable->getHead());

		cout << "Inserte la variable de las producciones: ";
		getline(cin, substitute);

	} while (substitute != " ");
}

void printProductions(LinkedList<LinkedList<string>> productions)
{
	Node<LinkedList<string>> *head;
	head = productions.getHead();

	while (head != nullptr)
	{
		cout << "Los elementos de la produccion son:\n";
		head->getData().printList();
		head = head->getNext();
	}
}

void getConstants(LinkedList<LinkedList<string>> productions, LinkedList<string> *constants)
{
	Node<LinkedList<string>> *head;
	head = productions.getHead();

	while (head != nullptr)
	{
		constants->insertTail(head->getData().getHead()->getData());
		head = head->getNext();
	}
}

string menuDerivations()
{
	string option;

	cout << "Seleccione el tipo de derivacion que desea realizar:\n";
	cout << "a) Todas las derivaciones.\n";
	cout << "b) Una derivacion por la izquierda\n";
	cout << "c) Una derivacion por la derecha\n";
	getline(cin, option);

	return option;
}

void leftDerivation(string initialVariable, string word, LinkedList<LinkedList<string>> productions, Queue<string> *result)
{
	string leftConstant;
	int constant_index;
	LinkedList<string> *preDerivations;
	Node<string> *preDerivHead;
	string substitute;

	Node<LinkedList<string>> *head;
	head = productions.getHead();

	Node<string> *internalHead;
	internalHead = head->getData().getHead();

	preDerivations = new LinkedList<string>;
	preDerivations->insertTail(initialVariable);
	preDerivHead = preDerivations->getHead();

	constant_index = searchLeft(preDerivHead->getData());
	cout << "Primer index: " << constant_index << endl;

	if (constant_index == 0)
	{
		recReplace(head, internalHead, word, preDerivations, preDerivHead);
		//preDerivations->insertTail();
		if (preDerivations->getTail()->getData() == word)
			preDerivations->printList();
		else
			cout << "No es derivable\n";
	}
	else
		preDerivations->insertTail(recReplace(head, internalHead, word, preDerivations, preDerivHead));
}

string recReplace(Node<LinkedList<string>> *head, Node<string> *internalHead, string word, LinkedList<string> *preDerivations, Node<string> *preDerivHead)
{
	int constant_index;
	constant_index = searchLeft(preDerivations->getTail()->getData());

	if (constant_index == 0 || (preDerivations->getTail()->getData().length() > word.length()))
	{
		if (preDerivations->getTail()->getData() == word)
		{
			cout << "Entro: " << preDerivations->getTail()->getData() << " " << endl;
		}
	}
	else
	{
		while (head != nullptr)
		{
			internalHead = head->getData().getHead();
			if (preDerivations->getTail()->getData()[constant_index] == head->getData().getHead()->getData()[0])
			{
				internalHead = internalHead->getNext();
				while (internalHead != nullptr)
				{
					preDerivations->getTail()->getData().replace(constant_index, 1, internalHead->getData());
					return preDerivations->getTail()->getData();
					recReplace(head, internalHead, word, preDerivations, preDerivHead);
					internalHead = internalHead->getNext();
				}
			}
			head = head->getNext();
		}
	}

}

int searchLeft(string word)
{
	for (int i = 0; i < word.size(); i++)
	{
		if (((int)word[i] >= 65) && ((int)word[i] <= 90))
		{
			return i;
		}
	}
	return -1;
}


int main()
{
	string derivationType = "";
	int sustitutionsN = 0;
	int derivationsM = 0;
	string word = "";
	string initialVariable = "";
	LinkedList<string> variables;
	LinkedList<string> constants;
	LinkedList<LinkedList <string>> productions;
	Queue<string> result;

	
	menu(&word, &variables, &constants, &initialVariable, &productions);
	cout << "La palabra buscada es: "<<word << endl;
	cout << initialVariable << endl;
	printProductions(productions);
	getConstants(productions, &constants);

	derivationType = "b";
	if (derivationType == "a")
	{

	}
	else if (derivationType == "b")
	{
		//leftDerivation(initialVariable, word, productions, &result);
	}
	else if (derivationType == "c")
	{

	}

	return 0;
}
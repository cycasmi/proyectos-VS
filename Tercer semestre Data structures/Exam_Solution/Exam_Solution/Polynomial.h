/*
Cynthia Berenice Castillo Millán

Class for a Polynomial stored as a linked list
Inherits from the LinkedList class
http://stackoverflow.com/questions/8810224/inheriting-from-a-template-class-in-c
*/

#include <cmath>
#include "LinkedList.h"
#include "Term.h"

class Polynomial : public LinkedList<Term> {
public:
	// Class specific methods
	void insertOrdered(Node<Term> * item);
	void insertOrdered(const Term & data);
	double evaluate(double value);
	void simplify();
	friend void printPolynomial(Node<Term> head);
	friend void printInverted(Node<Term> head);
};

/*
Inserts node elements in their corresponding place, in increasing order of exponent
*/
void Polynomial::insertOrdered(Node<Term> * new_item)
{
	Node<Term> *item;
	Node<Term> *previous;

	if (this->head == nullptr || new_item->getData() < this->head->getData())
	{
		new_item->setNext(this->head);
		this->head = new_item;
	}

	else
	{
		previous = this->head;
		item = previous->getNext();
		
		while (item != nullptr && new_item->getData() > item->getData())
		{
			previous = item;
			item = item->getNext();
		}

		previous->setNext(new_item);
		new_item->setNext(item);
	}

	this->length++;
}

/*
Inserts new terms in the polynomial list, in increasing order of exponent
*/
void Polynomial::insertOrdered(const Term & data)
{
	Node<Term> *item = new Node<Term>(data);
	this->insertOrdered(item);
}

/*
Evaluate the whole polynomial with the value given for the variable X
*/
double Polynomial::evaluate(double value)
{
	double sum = 0;
	Node<Term> *item = this->head;

	while(item != nullptr)
	{
		sum += item->getData().getConstant() * pow(value, item->getData().getExponent());
		item = item->getNext();
	}

	return sum;
}

/*
Method to simplify the terms in a polynomial
Terms with the same exponent are added together into a single term
Having an ordered list will simplify this method, so that you can check
two contiguous terms, if they have the same exponent, remove them and add
a new one with the addition of the contants
*/
void Polynomial::simplify()
{
	Node<Term> *item_1;
	Node<Term> *item_2;
	Term sum;
	int index = 0;

	if (this->length < 2)
		return;

	item_1 = this->head;
	item_2 = item_1->getNext();

	while (item_2 != nullptr)
	{
		if (item_1->getData() == item_2->getData())
		{
			sum = item_1->getData() + item_2->getData();
			removeItemAt(index);
			removeItemAt(index);
			insertOrdered(sum);

			item_1 = getItemAt(index);
			item_2 = item_1->getNext();
		}
		index++;
		item_1 = item_2;
		//sin esto se supone que crashea.
		if (item_2 != nullptr)
			item_2 = item_2->getNext();
	}

}


/*
Friend function to print the elements of a polynomial in reverse order
That is, with the terms of higher exponent first
This function should be implemented using recursion
*/
void printInverted(Node<Term> * list_item)
{
	if (list_item == nullptr)
		return;

	printInverted(list_item->getNext());
	std::cout << list_item->getData() << " ";

}



/*
Friend function that can be used to print the contents of Polynomial
*/
void printPolynomial(Polynomial * list)
{
	Node<Term> * item;

	item = list->getHead();
	// Print the first term without a sign
	if (item != nullptr)
	{
		std::cout << item->getData();
		item = item->getNext();
	}
	// Print the rest of the terms with a + sing between them
	while (item != nullptr)
	{
		std::cout << " + " << item->getData();
		item = item->getNext();
	}
	std::cout << std::endl;
}



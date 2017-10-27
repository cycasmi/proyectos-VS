/*
Gilberto Echeverria

Polynomials using lists
*/

#include <iostream>
#include "Polynomial.h"


int main(void)
{
	Polynomial polynomial;
	Node<Term> * nPtr = nullptr;
	int i;

	std::cout << "Size of node: " << sizeof(Node<Term>) << std::endl;
	std::cout << "Initial length: " << polynomial.getLength() << std::endl;

	
	// Add the nodes using the method to keep the list ordered
	polynomial.insertOrdered(Term(-6, 2));
	polynomial.insertOrdered(Term(4, 1));
	polynomial.insertOrdered(Term(-3, 4));
	polynomial.insertOrdered(Term(7, 5));
	polynomial.insertOrdered(Term(2, 1));
	polynomial.insertOrdered(Term(8, 2));
	polynomial.insertOrdered(Term(-2, 0));
	polynomial.insertOrdered(Term(4, 4));
	// NOTE: You can use the other list methods to test the other functions
	// For example:
	//polynomial.insertHead(Term (7, 5));
	

	// Evaluate the list
	std::cout << "New length: " << polynomial.getLength() << std::endl;
	std::cout << "This is the polynomial: " << std::endl;
	printPolynomial(&polynomial);
	std::cout << std::endl << "Evaluated with 2: " << polynomial.evaluate(2) << std::endl;
	std::cout << "Simplifying... " << std::endl;
	polynomial.simplify();
	std::cout << "This is the new polynomial: " << std::endl;
	printPolynomial(&polynomial);
	std::cout << std::endl << "Evaluated with 1: " << polynomial.evaluate(1) << std::endl;
	std::cout << "Printed in inverse order: " << std::endl;
	printInverted(polynomial.getHead());

	return 0;
}

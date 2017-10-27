/*
   Gilberto Echeverria

   Sample program to use the Stack list library
*/

/*
RECURSIONS always uses stacks

Infix
3 + 4 * 2 - 7 

postfix
3 4 2 * + 7 -

if number
	write in postfix

if operator
	if empty stack
		write in stack

	if top is < precedence
		write to stack

	while top is >= precedence
		write top to stack, pop (o sea del stack y ponerlo en la operación)
		write to stack

	if '('
		wirte in stack
	if ')'
		while in stack != '('
			pop stack
		pop '('



Infix
(3 + 5) + (4 * 6)^2

Postfix
3 5 + 4 6 * 2 ^ %


*/

/*
#include <iostream>
#include "Stack.h"

int main(void)
{
    Stack<std::string> test_stack;
    Node<std::string> * item = nullptr;
    std::string * tmp_string;
    int i;

    std::cout << "Initial length: " << test_stack.getLength() << std::endl;

    tmp_string = new std::string("Mercury");
    test_stack.push(*tmp_string);
    tmp_string = new std::string("Venus");
    test_stack.push(*tmp_string);
    tmp_string = new std::string("Mars");
    test_stack.push(*tmp_string);
    tmp_string = new std::string("Earth");
    test_stack.push(*tmp_string);
    tmp_string = new std::string("Jupiter");
    test_stack.push(*tmp_string);
    tmp_string = new std::string("Saturn");
    test_stack.push(*tmp_string);

    std::cout << "New length: " << test_stack.getLength() << std::endl;
    std::cout << "This is the stack now: " << std::endl;
    test_stack.printList();

    item = test_stack.pop();
    std::cout << "Item popped out: " << item->getData() << std::endl;
    delete item;
    item = test_stack.pop();
    std::cout << "Item popped out: " << item->getData() << std::endl;
    delete item;
    item = test_stack.pop();
    std::cout << "Item popped out: " << item->getData() << std::endl;
    delete item;

    std::cout << "New length: " << test_stack.getLength() << std::endl;
    std::cout << "This is the stack now: " << std::endl;
    test_stack.printList();


    return 0;
}
*/
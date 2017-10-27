#include <iostream>
#include "LinkedList.h"
#include "Vector_3D.h"

int main(void)
{
	LinkedList<Vector3D> test_list;
	Node<Vector3D> * item;
	Vector3D resultantVector(0, 0 , 0);
	
	LinkedList<Vector3D> upperVector_list;

	LinkedList<Vector3D> downVector_list;

	item = new Node<Vector3D> ;
	item->setData(Vector3D(5.8, -3.1, 2.9));
	
	std::cout << "Size of node: " << sizeof(Node<Vector3D>) << std::endl;
	std::cout << "Initial length: " << test_list.getLength() << std::endl;


	//These are nodes
	// Insert at the end
	test_list.insertTail(item);
	test_list.insertTail(Vector3D(-6.1, 2.8, 5.9));
	test_list.insertTail(Vector3D(0.5, -7.3, -4.2));
	test_list.insertTail(Vector3D(3.8, 4.1, -5.8));
	test_list.insertTail(Vector3D(7.9, 6, 2.4));

	// Insert at the beginning
	test_list.insertHead(Vector3D(4.5, 3.7, -5.1));
	test_list.insertHead(Vector3D(9.3, -8.1, -1.6));
	test_list.insertHead(Vector3D(-6.2, 7.2, 4.8));
	test_list.insertHead(Vector3D(-3.5, 6.4, -5));

	std::cout << "New length: " << test_list.getLength() << std::endl;
	std::cout << "This is the list now: " << std::endl;
	test_list.printList();

	item = test_list.getHead();
	while (item != nullptr)
	{
		resultantVector = resultantVector + item->getData();
		item = item->getNext();
	}
	cout << endl << "The resultant vector is: " << resultantVector << endl;

	item = test_list.getHead();
	while (item != nullptr)
	{
		if (item->getData().getZ() >= 0)
			upperVector_list.insertTail(item->getData());

		else
			downVector_list.insertTail(item->getData());

		item = item->getNext();
	}

	std::cout << "\nUp vector list:" << std::endl;
	upperVector_list.printList();

	std::cout << "\nDown vector list:" << std::endl;
	downVector_list.printList();
	
	return 0;
}

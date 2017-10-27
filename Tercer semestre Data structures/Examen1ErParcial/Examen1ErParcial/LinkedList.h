/*
Gilberto Echeverria

Implementation of the Linked list
*/

#include <iostream>
#include "DoubleNode.h"

template <class T>
class DoubleLinkedList {
protected:
	DoubleNode<T> * head = nullptr;
	DoubleNode<T> * tail = nullptr;
	DoubleNode<T> *current = nullptr;
	int length = 0;
public:
	// Constructors
	DoubleLinkedList() {}
	DoubleLinkedList(DoubleNode<T> * item) { head = item; }
	// Destructor
	~DoubleLinkedList();

	// Return the current length of the list
	int getLength() { return this->length; }
	// Get the position in the list of a given item
	int getPositionOf(DoubleNode<T> * item);
	// Get a reference to items in the list
	DoubleNode<T> * getHead() { return this->head; }
	DoubleNode<T> * getTail() { return getItemAt(this->length - 1); }
	DoubleNode<T> * getItemAt(int position);
	// Add new items to the list
	void insertOrdered(DoubleNode <T> *new_item);
	void insertOrdered(const T &data)
	void insertAtPosition(DoubleNode<T> * item, int position);
	void insertAtPosition(const T & data, int position);
	void insertHead(DoubleNode<T> * item);
	void insertHead(const T & data);
	void insertTail(DoubleNode<T> * item);
	void insertTail(const T & data);
	// Remove items from the list
	DoubleNode<T> * removeItemAt(int position);
	DoubleNode<T> * removeHead();
	DoubleNode<T> * removeTail();
	void removeDoubleNode(DoubleNode<T> item);

	bool searchFor(const T &data);
	// Print the contents of a list
	void printList();
	// Remove all DoubleNodes
	void clear();
};

// Destructor
template <class T>
DoubleLinkedList<T>::~DoubleLinkedList()
{
	// Simply call the function to delete all DoubleNodes in the list
	this->clear();
}

// Add items to the list
template <class T>
void DoubleLinkedList<T>::insertTail(DoubleNode<T> * item)
{
	// Make sure to stop the pointer in the list
	item->setNext(nullptr);

	// If the list is empty, this DoubleNode is the new head
	if (this->head == nullptr)
	{
		this->head = item;
		this->tail = item;
	}
	else
	{
		this->tail->setPrevious(item);
		item->setPrevious(this->tail);
		this->tail = item;
	}
	// Increment the size of the list
	this->length++;
}


template <class T>
void DoubleLinkedList<T>::insertTail(const T & data)
{
	DoubleNode<T> * item = new DoubleNode<T>(data);
	this->insertTail(item);
}

template <class T>
void DoubleLinkedList<T>::insertHead(DoubleNode<T> * item)
{
	if (this->head == nullptr)
		this->tail = item;

	else
		this->head->setPrevious(item);

	// Make this DoubleNode point to the previous head
	item->setNext(this->head);
	// The DoubleNode becomes the head of the list
	this->head = item;
	// Increment the size of the list
	this->length++;
}

template <class T>
void DoubleLinkedList<T>::insertHead(const T & data)
{
	DoubleNode<T> * item = new DoubleNode<T>(data);
	this->insertHead(item);
}

template <class T>
void DoubleLinkedList<T>::insertAtPosition(DoubleNode<T> * new_item, int position)
{
	int index = 1;
	DoubleNode<T> * item = this->head;

	// Return nothing for invalid positions
	if (position > this->length || position < 0)
	{
		return;
	}
	// Special case when adding at position 0
	
	if (position == this->length)
		this->tail = new_item;
	
	if (position == 0)
	{
		// Make the new item point to the current head
		new_item->setNext(this->head);
		//Make previous head point to the new one
		this->head->setPrevious(new_item);
		// Update the head
		this->head = new_item;
	}
	else
	{
		// Loop to search for the item
		while (index < position)
		{
			item = item->getNext();
			index++;
		}
		// Update the connections in the list
		new_item->setNext(item->getNext());
		new_item->setPrevious(item);
		item->getNext()->setPrevious(new_item);
		item->setNext(new_item);
	}
	// Increase the length of the list
	this->length++;
}


template <class T>
void DoubleLinkedList<T>::insertAtPosition(const T & data, int position)
{
	DoubleNode<T> * item = new DoubleNode<T>(data);
	this->insertAtPosition(item, position);
}

template <class T>
int DoubleLinkedList<T>::getPositionOf(DoubleNode<T> * item)
{
	int index = 0;
	DoubleNode<T> * test = this->head;

	while (item != nullptr && item->getData() != test->getData())
	{
		test = test->getNext();
		index++;
	}
	if (index == this->length)
		return -1;
	return index;
}

template <class T>
DoubleNode<T> * DoubleLinkedList<T>::getItemAt(int position)
{
	int index = 0;
	DoubleNode<T> * item = this->head;

	// Return nothing for invalid positions
	if (position > this->length || position < 0)
	{
		return nullptr;
	}
	// Loop to search for the item
	while (index < position && item != nullptr)
	{
		item = item->getNext();
		index++;
	}
	return item;
}

template <class T>
DoubleNode<T> * DoubleLinkedList<T>::removeHead()
{
	DoubleNode<T> * item = this->head;

	if (this->head == this->tail)
		this->tail = nullptr;

	// Check that the list is not empty
	if (this->head != nullptr)
	{
		// Make the head point to the second item
		this->head = item->getNext();
		// Make the item point to nothing
		item->setNext(nullptr);
		//Clear the previous of the new head
		this->head->setPrevious(nullptr);
		// Reduce the length of the list
		this->length--;
	}

	return item;
}

template <class T>
DoubleNode<T> * DoubleLinkedList<T>::removeTail()
{
	DoubleNode<T> * tail = this->head;
	DoubleNode<T> * item;

	// If the list is empty, return nothing
	if (this->head == nullptr)
	{
		return nullptr;
	}

	// If there is only one item in the list, return that one
	if (tail->getNext() == nullptr)
	{
		// Mark the list as empty
		this->head = nullptr;
		this->tail = nullptr;
	}
	else
	{
		previous = tail->getPrevious();
		previous->setNext(nullptr);
		// Keep the previous item before the tail
		this->tail = nullptr;
	}
	// Make the item point to nothing
	tail->setNext(nullptr);
	tail->setPrevious(nullptr);
	// Reduce the length of the list
	this->length--;

	return tail;
}


template <class T>
DoubleNode<T> * DoubleLinkedList<T>::removeItemAt(int position)
{
	int index = 1;
	DoubleNode<T> * previous = this->head;
	DoubleNode<T> * item;

	// Return nothing for invalid positions
	if (position > this->length || position < 0)
	{
		return nullptr;
	}
	// Special case when removing the first item
	if (position == 0)
	{
		// Prepare the item to return
		item = previous;
		// Update the head
		this->head = item->getNext();
	}
	else
	{
		// Keep the previous item before the tail
		item = previous->getNext();
		// Loop to search for the item
		while (index < position)
		{
			previous = item;
			item = item->getNext();
			index++;
		}
		// Update the connections in the list
		previous->setNext(item->getNext());
		item->getNext()->setPrevious(previous);
	}
	// Make the item point to nothing
	item->setNext(nullptr);
	item->setPrevious(nullptr);
	// Reduce the length of the list
	this->length--;

	return item;
}


/*
Simple function to print the contents of the list
*/
template <class T>
void DoubleLinkedList<T>::printList()
{
	DoubleNode<T> * item;
	int counter = 0;

	item = this->head;
	while (item != nullptr)
	{
		std::cout << "Item " << counter++ << " = " << item->getData() << std::endl;
		item = item->getNext();
	}
}

/*
Empty the list, and free the memory for all DoubleNodes
*/
template <class T>
void DoubleLinkedList<T>::clear()
{
	DoubleNode<T> * item;

	item = this->head;
	while (item != nullptr)
	{
		std::cout << "Deleting item " << item->getData() << std::endl;
		this->head = item->getNext();
		delete item;
		item = this->head;
	}
	this->length = 0;
	this->head = nullptr;
}

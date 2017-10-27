#include <iostream>
using namespace std;

template <class T>
class Node
{
private:
	T data;
	Node *next = nullptr;

public:
	Node(){}
	Node(T _ data) { data = _data; }

	void getData() { return this->data; }
	void setData(T new_data) { this->data = new_data}

	void getNext() { return this->next; }
	void setNext(Note* _pointer);

};
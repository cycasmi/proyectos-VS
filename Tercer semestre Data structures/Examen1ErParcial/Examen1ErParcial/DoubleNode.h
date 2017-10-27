#include "Node.h"

template <class T>
class DoubleNode : public Node
{
private:
	DoubleNode *previous = nullptr;

public:
	// Constructors
	DoubleNode() {};
	DoubleNode(T _data) { data = _data; }
	// Destructor
	~DoubleNode();

	DoubleNode *getPrevious();
	void setPrevious(DoubleNode *_pointer);
};

template <class T>
DoubleNode<T> * DoubleNode<T>::getPrevious()
{
	return this->previous;
}

template <class T>
void DoubleNode<T>::setPrevious(DoubleNode *_pointer)
{
	this->previous = _pointer;
}
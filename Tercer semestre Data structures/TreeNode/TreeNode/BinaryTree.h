#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iostream>
#include "TreeNode.h"
#include "Queue.h"

/* ***PRINTING****
*Center*
/	   \
*Left*		*Right*

PREORDER C L R

INORDER  L C R

POSTORDER L R C

Exam subjects: double linked list, stacks, queues, binary tree.

Binary trees
cases:
1. Remove leaf.
I link the root with the other leaf.
Remove the leaf (if it isn't followed by other leaf)
2.Remove node with 1 branch

3.Remove node with 2 branches (the root).
Replace it with the value of the smallest in the big right branch (all the childs at the left of it, a leaf).


*/


class BinaryTree
{
private:
	TreeNode * root;
	Queue<TreeNode*> queue;

	void recursiveInsert(TreeNode * _root, TreeNode * _node);
	void recursivePrintInorder(TreeNode * _root);
	bool recursiveSearch(TreeNode * _root, int _data);
	TreeNode * recursiveRemove(TreeNode * _root, int _data);
	TreeNode * getMin(TreeNode * _root);
public:
	BinaryTree();
	~BinaryTree();
	void insertNode(int _data);
	void insertNode(TreeNode * _node);
	bool search(int _data);
	TreeNode * getRoot();
	void setRoot(TreeNode * _root);
	void printInorder();
	void printBreadthFirst();
	void clear(TreeNode * _root);
	void remove(int _data);
};

#endif



/*
STACK - LIFO (last in, first out)
QUEUE - FIFO (first in, first out)

Depht first traversal



Breadth first traversal

Se van metiendo en una cola las raíces, una vez que sale un elemento de la cola, se agregan sus hijos.
Con salir me refiero a imprimir.

*/
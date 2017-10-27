// Name: Cynthia Berenice Castillo Millán.
// Student no. A01374530

#include "BinaryTree.h"

BinaryTree::BinaryTree()
{
	this->root = nullptr;
}

BinaryTree::~BinaryTree()
{
}

void BinaryTree::insertNode(int _data)
{
	TreeNode * new_node = new TreeNode(_data);
	this->insertNode(new_node);
}

void BinaryTree::insertNode(TreeNode * _node)
{
	if (this->root == nullptr)
	{
		this->root = _node;
	}
	else
	{
		recursiveInsert(this->root, _node);
	}
}

TreeNode * BinaryTree::getRoot()
{
	return this->root;
}

void BinaryTree::setRoot(TreeNode * _root)
{

}

void BinaryTree::printInorder()
{
	if (this->root == nullptr)
		return;
	else
		recursivePrintInorder(this->root);
	std::cout << std::endl;
}

void BinaryTree::clear(TreeNode * _root)
{

}

void BinaryTree::recursiveInsert(TreeNode * _root, TreeNode * _node)
{
	if (_root->getData() == _node->getData())
	{
		return;
	}
	// Node goes on the left branch
	else if (_node->getData() < _root->getData())
	{
		if (_root->getLeft() == nullptr)
		{
			_root->setLeft(_node);
		}
		else
		{
			recursiveInsert(_root->getLeft(), _node);
		}
	}
	// Node goes on the right branch
	else if (_node->getData() > _root->getData())
	{
		if (_root->getRight() == nullptr)
		{
			_root->setRight(_node);
		}
		else
		{
			recursiveInsert(_root->getRight(), _node);
		}
	}
}

void BinaryTree::recursivePrintInorder(TreeNode * _root)
{
	if (_root == nullptr)
	{
		return;
	}

	recursivePrintInorder(_root->getLeft());
	std::cout << _root->getData() << "\t";
	recursivePrintInorder(_root->getRight());
}

bool BinaryTree::search(int _data)
{
	if (this->root == nullptr)
		return false;
	else
		return recursiveSearch(this->root, _data);
}

bool BinaryTree::recursiveSearch(TreeNode * _root, int _data)
{
	if (_root->getData() == _data)
		return true;
	else
	{
		if (_data < _root->getData())
		{
			if (_root->getLeft() == nullptr)
				return false;
			return recursiveSearch(_root->getLeft(), _data);
		}
		else
		{
			if (_root->getRight() == nullptr)
				return false;
			return recursiveSearch(_root->getRight(), _data);
		}
	}
}

TreeNode * BinaryTree::getMin(TreeNode * _root)
{
	if (_root->getLeft() == nullptr)
		return _root;
	else
		return getMin(_root->getLeft());
}

TreeNode * BinaryTree::recursiveRemove(TreeNode * _root, int _data)
{
	if (_root == nullptr)
		return nullptr;
	if (_data < _root->getData())
	{
		_root->setLeft(recursiveRemove(_root->getLeft(), _data));
	}
	else if (_data > _root->getData())
	{
		_root->setRight(recursiveRemove(_root->getRight(), _data));
	}
	// The data is found in the root
	else
	{
		// Node has no children
		if (_root->getLeft() == nullptr && _root->getRight() == nullptr)
		{
			std::cout << "Deleting leaf" << std::endl;
			delete _root;
			_root = nullptr;
		}
		// Node has only left child
		else if (_root->getRight() == nullptr)
		{
			std::cout << "Deleting with only left branch" << std::endl;
			TreeNode * tmp = _root;
			_root = _root->getLeft();
			delete tmp;
		}
		// Node has only right child
		else if (_root->getLeft() == nullptr)
		{
			std::cout << "Deleting with only right branch" << std::endl;
			TreeNode * tmp = _root;
			_root = _root->getRight();
			delete tmp;
		}
		// Node has both children
		else
		{
			std::cout << "Deleting with both branches" << std::endl;
			TreeNode * tmp = getMin(_root->getRight());
			_root->setData(tmp->getData());
			_root->setRight(recursiveRemove(_root->getRight(), tmp->getData()));
		}
	}
	// Return the current root so that it is updated in previous recursive calls
	return _root;
}

void BinaryTree::remove(int _data)
{
	if (this->root == nullptr)
		return;
	this->root = recursiveRemove(this->root, _data);
}

//Prints the colums of the binary tree
void BinaryTree::printBreadthFirst()
{

	if (this->root == nullptr)
		return;

	else
	{
		Node<TreeNode*> node = this->root;
		//Node<TreeNode*> node = nullptr; //Could be a nullptr and do the same
		queue.insert(this->root);

		while (!queue.isEmpty())
		{
			node.setData(queue.remove()->getData());
			std::cout << node.getData()->getData() << "	" ;

			if (node.getData()->getLeft() != nullptr)
				queue.insert(node.getData()->getLeft());

			if (node.getData()->getRight() != nullptr)
				queue.insert(node.getData()->getRight());
		}
		
	}
	std::cout << std::endl;
}
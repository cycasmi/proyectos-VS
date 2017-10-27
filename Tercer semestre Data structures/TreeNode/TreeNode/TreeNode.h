#include <iostream>

class TreeNode
{
private:
	int data;
	TreeNode *left;
	TreeNode *right;

public:
	TreeNode(int _data = 0);
	~TreeNode();

	int getData();
	void setData(int _data);
	void setLeft(TreeNode *_left);
	TreeNode *getLeft();
	void setRight(TreeNode *_right);
	TreeNode *getRight();

};
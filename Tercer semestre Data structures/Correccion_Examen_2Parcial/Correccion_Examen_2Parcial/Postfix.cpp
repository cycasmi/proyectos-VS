//Name: Cynthia Berenice Castillo Mill�n

#include "Postfix.h"
//#define DEBUG

Postfix::Postfix(std::string expression)
{
	setData(expression);
}

void Postfix::setData(std::string expression)
{
	infix_expression = expression;
	postfix_expression = "";
	convertExpression();
}

std::string Postfix::getInfix()
{
	return infix_expression;
}

std::string Postfix::getPostfix()
{
	return postfix_expression;
}

/*
Returns an integer value indicating if an operator has higher precedence than another.
Positive values indicate higher precedence.
Negative values indicate lower precedence.
A value of 0 indicates equal precedence.
*/
int Postfix::precedence(char current_operator, char other_operator)
{
	char operators[] = { '^', '*', '/', '%', '+', '-', '(' };
	int values[] = { 3, 2, 2, 2, 1, 1, 0 };
	int current_value;
	int other_value;

	for (int i = 0; i < 7; i++)
	{
		if (current_operator == operators[i])
		{
			current_value = values[i];
		}
		if (other_operator == operators[i])
		{
			other_value = values[i];
		}
	}
#ifdef DEBUG
	std::cout << "Comparing: " << current_operator << " and " << other_operator << " . result = " << current_value - other_value << std::endl;
#endif
	return current_value - other_value;
}

void Postfix::convertExpression()
{
	char token;
	Stack<char> conversion_stack;
	Node<char> * item;

	for (int i = 0; i < infix_expression.length(); i++)
	{
		// Get the next character in the expression
		token = infix_expression[i];
		// Pass operands directly to the postfix string
		if (token >= '0' && token <= '9')
		{
#ifdef DEBUG
			std::cout << "Found an operand: " << token << std::endl;
#endif
			postfix_expression += token;
		}
		// Store opening parenthesis in the stack
		else if (token == '(')
		{
#ifdef DEBUG
			std::cout << "Found opening : " << token << std::endl;
#endif
			conversion_stack.push(token);
		}
		// Pop everything in the stack until finding a matching parenthesis
		else if (token == ')')
		{
#ifdef DEBUG
			std::cout << "Found closing : " << token << std::endl;
#endif
			item = conversion_stack.top();
			while (item != nullptr && item->getData() != '(')
			{
				postfix_expression += item->getData();
				conversion_stack.pop();
				item = conversion_stack.top();
			}
			// Get rid of the matching parenthesis
			if (item->getData() == '(')
			{
				conversion_stack.pop();
			}
		}
		// Put operators in the stack depending on their precedence
		else if (token == '^' || token == '*' || token == '/' || token == '%' || token == '+' || token == '-')
		{
#ifdef DEBUG
			std::cout << "Found an operator: " << token << std::endl;
#endif
			// Compare against any operator in the stack
			if (!conversion_stack.isEmpty())
			{
				// Test whether the current token is higher or lower precedence
				item = conversion_stack.top();
				while (item != nullptr && precedence(token, item->getData()) <= 0)
				{
					postfix_expression += item->getData();
					conversion_stack.pop();
					item = conversion_stack.top();
				}
			}
			conversion_stack.push(token);
#ifdef DEBUG
			conversion_stack.printList();
#endif
		}
	}
	// Put every operator still in the stack in the postfix expression
	while (!conversion_stack.isEmpty())
	{
		item = conversion_stack.pop();
		postfix_expression += item->getData();
	}
}

int Postfix::evaluate()
{
	int result = 0;
	int number;
	int op1, op2;
	char token;
	Stack<int> evaluation_stack;

	for (int i = 0; i < postfix_expression.length(); i++)
	{
		token = postfix_expression[i];
		if (token >= '0' && token <= '9')
		{
			number = token - '0';
			evaluation_stack.push(number);
		}
		else if (token == '^' || token == '*' || token == '/' || token == '%' || token == '+' || token == '-')
		{
			op2 = evaluation_stack.pop()->getData();
			op1 = evaluation_stack.pop()->getData();

			result = compute(op1, op2, token);
#ifdef DEBUG
			std::cout << op1 << token << op2 << " = " << result << std::endl;
#endif
			evaluation_stack.push(result);
		}
	}
	return evaluation_stack.pop()->getData();
}

int Postfix::compute(int num1, int num2, char sign)
{
	if (sign == '^')
	{
		return (int)pow(num1, num2);
	}
	else if (sign == '*')
	{
		return num1 * num2;
	}
	else if (sign == '/')
	{
		return num1 / num2;
	}
	else if (sign == '%')
	{
		return num1 % num2;
	}
	else if (sign == '+')
	{
		return num1 + num2;
	}
	else if (sign == '-')
	{
		return num1 - num2;
	}
	return 0;
}

void Postfix::postfixTree()
{
	char token;
	TreeNode<char> * op1 = nullptr;
	TreeNode<char> * op2 = nullptr;
	TreeNode<char> * treeNode = nullptr;
	Stack<TreeNode<char>*> conversion_stack;

	/* EXAM: FILL THIS PART OF THE FUNCTION */
	for (int i = 0; i < postfix_expression.length(); i++)
	{
		//treeNode->setData(postfix_expression[i]);
		treeNode = new TreeNode<char>(postfix_expression[i]);
		conversion_stack.push(treeNode);
	}

	/*while (!conversion_stack.isEmpty)
	{
		
		treeNode->setData(conversion_stack.pop());
		treeNode->setLeft(conversion_stack.pop());
		treeNode->setRight(conversion_stack.pop());

		conversion_stack.push(treeNode);
		
	}*/

	// Set the last node popped as the tree root
	tree_expression.setRoot(conversion_stack.pop()->getData());
}

int Postfix::recursiveTreeEvaluate(TreeNode<char> * _root)
{
	if ((_root->getLeft() == nullptr) && (_root->getRight() == nullptr))
		return _root->getData() - '0'; // We are working with chars, so, we need the number minus the first ASCII value, 0. 


	else if ((_root->getLeft() != nullptr) && (_root->getRight() != nullptr))
	{
		return compute(recursiveTreeEvaluate(_root->getLeft()), recursiveTreeEvaluate(_root->getRight()), _root->getData());
	}

	return 0;
}

int Postfix::treeEvaluate()
{
	if (tree_expression.getRoot() == nullptr)
		return 0;
	else
		return recursiveTreeEvaluate(tree_expression.getRoot());
}

void Postfix::printTree()
{
	/* EXAM: UNCOMMENT THE NEXT LINE TO TEST THE METHOD "findHeight" IN BinaryTree */
	std::cout << "Tree height: " << tree_expression.findHeight() << std::endl;
	tree_expression.printInorder();
}


#include "stdafx.h"
#include <iostream>

class BinTreeNode {
public:
	BinTreeNode(int value) {
		this->value = value;
		this->left = NULL;
		this->right = NULL;
	}
	int value;
	BinTreeNode* left;
	BinTreeNode* right;

};

BinTreeNode* tree_insert(BinTreeNode* tree, int item) {
	if (tree == NULL)
		tree = new BinTreeNode(item);
	else
		if (item < tree->value)
			if (tree->left == NULL)
				tree->left = new BinTreeNode(item);
			else
				tree_insert(tree->left, item);
		else
			if (tree->right == NULL)
				tree->right = new BinTreeNode(item);
			else
				tree_insert(tree->right, item);
	return tree;

}

void postorder(BinTreeNode* tree) {
	if (tree->left != NULL)
		postorder(tree->left);
	if (tree->right != NULL)
		postorder(tree->right);
	std::cout << tree->value << std::endl;

}

void in_order(BinTreeNode* tree) {
	if (tree->left != NULL)
		in_order(tree->left);
	std::cout << tree->value << std::endl;
	if (tree->right != NULL)
		in_order(tree->right);
}

BinTreeNode* minimumVal(BinTreeNode* tree) {
	BinTreeNode* current = tree; // current Node
	while (current->left != NULL)
		current = current->left;
	return current;
}

BinTreeNode* deleteNode(BinTreeNode* tree, int value) {
if (tree == NULL)
return tree;
if (value < tree->value)
tree->left = deleteNode(tree->left, value);
else if (value > tree->value)
tree->right = deleteNode(tree->right, value);
else
{
if (tree->left == NULL)
{
BinTreeNode * parent = tree->right;
delete tree;
return parent;
}
else if (tree->right == NULL) {
BinTreeNode* parent = tree->left;
delete tree;
return parent;
}
BinTreeNode* parent = minimumVal(tree->right);
tree->value = parent->value;
tree->right = deleteNode(tree->right, parent->value);
}
return tree;
}

int main(int argc, char *argv[])
{
	BinTreeNode* t = tree_insert(0, 6);
	tree_insert(t, 10);
	tree_insert(t, 5);
	tree_insert(t, 2);
	tree_insert(t, 3);
	tree_insert(t, 4);
	tree_insert(t, 11);
	deleteNode(t,11);
	in_order(t);
	return 0;
}

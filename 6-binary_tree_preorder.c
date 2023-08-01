#include "binary_trees.h"


/**
  * binary_tree_preorder - Binary Tree Pre-Order
  *
  * @tree: is a pointer to the root node of the tree to traverse
  * @func: pointer to a function to call for each node.
  *
  * Return:  a pointer to the created node
  */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL && func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}


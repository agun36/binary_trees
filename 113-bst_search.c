#include "binary_trees.h"

/**
* bst_search - is a function that searches for a node
*
* @tree: is the tree's root
* @value: is the value to match
* Return: is the node containing the value
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}

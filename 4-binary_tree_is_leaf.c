#include "binary_trees.h"


/**
  * binary_tree_is_leaf - Binary Checks
  *
  * @node: is a pointer to the node to check
  *
  * Return:  a pointer to the created node
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "binary_trees.h"


/**
  * binary_tree_size - binary tree size
  *
  * @tree:  is a pointer to the root node of the tree to measure the size
  * Return: returne the size of the node
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (1 + left_size + right_size);

}

#include "binary_trees.h"


/**
  * binary_tree_height - binary tree height
  *
  * @tree:  is a pointer to the root node of the tree to measure the height.
  *
  * Return:  a pointer to the created node
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return (1 + (left_h > right_h ? left_h : right_h));


}

#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Right-rotates a binary tree.
 * @tree: is a pointer to the root node of the tree to rotate.
 *
 * Return: pointer to the new root node of the tree.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *r, *tmp;

	if (tree == NULL)
		return (NULL);
	if (tree->left)
	{
		tmp = tree->left->right;
		r = tree->left;
		r->parent = tree->parent;
		r->right = tree;
		tree->parent = r;
		tree->left = tmp;
		if (tmp)
			tmp->parent = tree;
		return (r);
	}
	return (NULL);
}

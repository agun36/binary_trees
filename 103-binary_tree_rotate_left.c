#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Left-rotates a binary tree.
 * @tree: is a pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *r, *tmp;

	if (tree == NULL)
		return (NULL);
	if (tree->right)
	{
		tmp = tree->right->left;
		r = tree->right;
		r->parent = tree->parent;
		r->left = tree;
		tree->parent = r;
		tree->right = tmp;
		if (tmp)
			tmp->parent = tree;
		return (r);
	}
	return (NULL);
}

#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node, or NULL if node is NULL or
 *           the parent is NULL, or if node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If node is the left child, return the right child (sibling) */
	if (node->parent->left == node)
		return (node->parent->right);

	/* If node is the right child, return the left child (sibling) */
	if (node->parent->right == node)
		return (node->parent->left);

	/* If node has no sibling, return NULL */
	return (NULL);
}

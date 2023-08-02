#include "binary_trees.h"

/**
 * why_counters - function that count the number of nodes
 * @parents: is a pointer to the root node of the tree to check
 * Return: number of nodes
 */
size_t why_counters(const binary_tree_t *parents)
{
	if (parents == NULL)
		return (0);
	return (1 + why_counters(parents->left) + why_counters(parents->right));
}

/**
 * is_complete - sub function that check if the binary tree is complete.
 * @tree: pointer to the root node of the tree to check.
 * @index: is index.
 * @num_nodes: number of nodes.
 * Return: returns 1 if is complete, 0 otherwise.
 */
int is_complete(const binary_tree_t *tree, int index, int num_)
{
	if (tree == NULL)
		return (1);

	if (index >= num_)
		return (0);

	return (is_complete(tree->left, 2 * index + 1, num_) &&
			is_complete(tree->right, 2 * index + 2, num_));
}

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 * @tree: is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int counts = why_counters(tree);

	if (tree == NULL)
		return (0);
	return (is_complete(tree, 0, counts));
}

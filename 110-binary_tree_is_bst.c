#include "binary_trees.h"
#include <limits.h>

/**
 * isBST - checks if a given tree is a BST
 * @tree: is a pointer to the root node of the tree to check
 * @min_num: INT_MIN
 * @max_num: INT_MAX
 * Return:  return 1 if tree is a valid BST, and 0 otherwise
 */
int isBST(const binary_tree_t *tree, int min_num, int max_num)
{
	if (tree == NULL)
		return (1);
	if (tree->n < min_num || tree->n > max_num)
		return (0);
	return (isBST(tree->left, min_num, tree->n - 1) &&
	isBST(tree->right, tree->n + 1, max_num));
}

/**
 * binary_tree_is_bst - function that checks if a binary tree
 * is a valid Binary Search Tree
 * @tree: is a pointer to the root node of the tree to check
 * Return:  tree is NULL, return 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (isBST(tree, INT_MIN, INT_MAX));
}

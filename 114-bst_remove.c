#include "binary_trees.h"

/**
 * bst_s - finds the sest node from a Binary Search Tree
 * @root: a pointer to the root node of the tree
 * Return: a pointer to the sest node
 */
bst_t *bst_s(bst_t *root)
{
	bst_t *s = root;

	while (s->left)
		s = s->left;

	return (s);
}

/**
 * bst_remove - removes a node from a Binary Search Tree
 * @root: a pointer to the root node of the tree where you will remove a node
 * @value: the value to remove in the tree
 * Return: a pointer to the new root node of the tree after removal
 *         NULL on failure
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp = NULL;

	if (!root)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left)
		{
			temp = root->right;
			free(root);
			return (temp);
		}
		else if (!root->right)
		{
			temp = root->left;
			free(root);
			return (temp);
		}
		temp = bst_s(root->right);
		root->n = temp->n;
		root->right = bst_remove(root->right, temp->n);
	}
	return (root);
}

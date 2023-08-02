#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: is a double pointer to the root node of the BST to insert the value
 * @value: is the value to store in the node to be inserted
 * Return: pointer to the created node
 *         or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *curr, *new_v;

	if (tree != NULL)
	{
		curr = *tree;

		if (curr == NULL)
		{
			new_v = binary_tree_node(curr, value);
			if (new_v == NULL)
				return (NULL);
			return (*tree = new_v);
		}

		if (value < curr->n)
		{
			if (curr->left != NULL)
				return (bst_insert(&curr->left, value));

			new_v = binary_tree_node(curr, value);
			if (new_v == NULL)
				return (NULL);
			return (curr->left = new_v);
		}
		if (value > curr->n)
		{
			if (curr->right != NULL)
				return (bst_insert(&curr->right, value));

			new_v = binary_tree_node(curr, value);
			if (new_v == NULL)
				return (NULL);
			return (curr->right = new_v);
		}
	}
	return (NULL);
}

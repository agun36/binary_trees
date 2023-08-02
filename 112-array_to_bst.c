#include "binary_trees.h"

/**
 * array_to_bst - Builds a binary search tree from an array.
 * @array: is a pointer to the first element of the array to be converted.
 * @size: is the number of elements in the array.
 *
 * Return: is a pointer to the root node of the created BST, or NULL upon failure.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	int i;

	if (array != NULL)
	{
		for (i = 0; i < (int)size; i++)
		{
			bst_insert(&tree, *(array + i));
		}
	}
	return (tree);
}

#include "binary_trees.h"


/**
  * binary_trees_ancestor - binary trees ancestor
  * @first:  is a pointer to the first node
  * @second: is a pointer to the second node
  * Return: a pointer to the lowest common ancestor node of the two
  */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t **ancestors_first, **ancestors_second;
	size_t count_first, count_second  = 0;
	size_t i, j;
	binary_tree_t *common_ancestor = NULL;

	if (first == NULL || second == NULL)
		return (NULL);

	/* Create arrays to store ancestors of both nodes */
	ancestors_first = malloc(sizeof(binary_tree_t *) * 100);
	ancestors_second = malloc(sizeof(binary_tree_t *) * 100);

	if (ancestors_first == NULL || ancestors_second == NULL)
		return (NULL);

	/* Traverse first node's ancestors and store them in the array */
	while (first)
	{
		ancestors_first[count_first++] = first;
		first = first->parent;
	}
	/* Traverse second node's ancestors and store them in the array */
	while (second)
	{
		ancestors_second[count_second++] = second;
		second = second->parent;
	}
	/* Find the lowest common ancestor */
	for (i = 0; i < count_first; i++)
	{
		for (j = 0; j < count_second; j++)
		{
			if (ancestors_first[i] == ancestors_second[j])
			{
				common_ancestor = (binary_tree_t *)
					ancestors_first[i];
				break;
			}
		}
		if (common_ancestor)
			break;
	}
	/* Free dynamically allocated memory */
	free(ancestors_first);
	free(ancestors_second);
	
	return (common_ancestor);
}

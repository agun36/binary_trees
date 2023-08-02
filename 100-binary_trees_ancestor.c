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
	binary_tree_t *ancestor;

	if (first == NULL || second == NULL)
		return (NULL);
	ancestor = (binary_tree_t *)second;
	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = ancestor;
		first = first->parent;
	}
	return (NULL);
}

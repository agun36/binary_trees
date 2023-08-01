#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>


/**
  * binary_tree_node - binary tree node
  *
  * @parent: pointer to the parent node
  * @value: integer to the pointer
  *
  * Return: Pointer to the newly created node, or NULL on failure.
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*creating new node*/
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node != NULL)
	{
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	return (new_node);
}

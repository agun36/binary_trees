#include "binary_trees.h"


/**
  * binary_tree_delete - Binary Tree delete
  *
  * @tree: pointer to the root node of the tree to delete
  *
  * Return:  a pointer to the created node
  */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}

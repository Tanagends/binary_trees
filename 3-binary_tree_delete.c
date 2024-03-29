#include "binary_trees.h"

/**
 * binary_tree_delete -  A funtion that deletes a binary tree.
 * @tree: A pointer
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}

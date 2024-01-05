#include "binary_trees.h"

/**
 * binary_tree_nodes -  a function that counts the nodes with at least 1
 * child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree)
	{
		x += (tree->left || tree->right) ? 1 : 0;
		x += binary_tree_nodes(tree->left);
		x += binary_tree_nodes(tree->right);
	}
	return (x);
}

#include "binary_trees.h"

/**
 * binary_tree_height -  a function that measures the height factor of a
 * binary tree
 * @tree:  a pointer to the root node of the tree to measure the balance factor
 * Return: 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t x = 0;
		size_t y = 0;

		x = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		y = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((x > y) ? x : y);
	}
	return (0);
}
/**
 * binary_tree_balance -  a function that measures the balance factor of a
 * binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 * Return: 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

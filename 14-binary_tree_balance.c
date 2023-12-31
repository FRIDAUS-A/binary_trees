#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor
 * of a binary tree
 * @tree: address of the root node
 * Return: Allow Sucees
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_right = 0, height_left = 0;

	if (!tree)
		return (0);
	height_left = tree->left ? binary_tree_balance(tree->left) + 1 : 0;
	height_right = tree->right ? binary_tree_balance(tree->right) + 1 : 0;

	return (height_left - height_right);
}

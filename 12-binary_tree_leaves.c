#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a
 * binary tree
 * @tree: stores the address of the root node
 * Return: Allow success
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

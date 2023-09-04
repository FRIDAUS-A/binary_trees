#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a
 * binary tree
 * @tree: address of the root node of the
 * tree to measure the height
 * Return: Allow success
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);
	while (tree != NULL)
	{
		if (tree->left != NULL)
			tree = tree->left;
		else
			tree = tree->right;
		count++;
	}
	return (count - 2);
}

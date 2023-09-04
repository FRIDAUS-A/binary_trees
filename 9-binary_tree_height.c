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
	size_t count = 0;
	const binary_tree_t *tree_trav = tree;

	if (tree_trav == NULL)
		return (0);
	while (tree_trav != NULL)
	{
		if (tree_trav->left != NULL)
			tree_trav = tree_trav->left;
		else
			tree_trav = tree_trav->right;
		count++;
	}
	return (count - 1);
}

#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a given node is a root
 * @node: address of the node to check
 * Return: Allow Success
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->parent)
		return (1);
	else
		return (0);
}

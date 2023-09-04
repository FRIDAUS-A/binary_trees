#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the
 * left-child of another node
 * @parent: address of the parent node
 * @value: value of the new node
 * Return: Allow success
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!(parent->left))
		parent->left = node;
	else
	{
		(parent->left)->parent = node;
		node->left = parent->left;
		parent->left = node;
	}

	return (node);
}

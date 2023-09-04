#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the
 * right-child of another node
 * @parent: address of the parent node
 * @value: value of the new node
 * Return: Allow success
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!(parent->right))
		parent->right = node;
	else
	{
		(parent->right)->parent = node;
		node->right = parent->right;
		parent->right = node;
	}

	return (node);
}

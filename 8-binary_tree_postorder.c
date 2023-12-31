#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that goes through a
 * binary tree post-order traversal
 * @tree: address of the root node
 * @func: address of the fuction call for each node
 * Return: Allow success
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

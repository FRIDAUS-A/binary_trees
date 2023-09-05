#include "binary_trees.h"
size_t binary_tree_size_tmp(const binary_tree_t *tree);
size_t binary_tree_height_tmp(const binary_tree_t *tree);

/**
 * binary_tree_is_full - a function that checks if a binary
 * tree is full
 * @tree: stores the address of  the root node to check
 * Return: Allow Success
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t size, height, full_size = 1;

	if (!tree)
		return (0);
	size = binary_tree_size_tmp(tree);
	height = binary_tree_height_tmp(tree);
	height = height + 1;

	while (height > 0)
	{
		full_size = full_size * 2;
		height--;
	}
	full_size = full_size - 1;

	if (size == full_size)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_size_tmp - a function that measures the
 * size of a binary tree
 * @tree: address of the node
 * Return: Allow Success
 */
size_t binary_tree_size_tmp(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size_tmp(tree->left) +
		binary_tree_size_tmp(tree->right) + 1;
	return (size);
}

/**
 * binary_tree_height_tmp - a function that measures the height of a
 * binary tree
 * @tree: address of the root node of the
 * tree to measure the height
 * Return: Allow success
 */
size_t binary_tree_height_tmp(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);
	height_left = tree->left ? 1 + binary_tree_height_tmp(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_height_tmp(tree->right) : 0;

	return (height_left > height_right ? height_left : height_right);
}

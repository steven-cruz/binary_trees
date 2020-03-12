#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the size.
 * Return: if Tree is NULL must return 0, or measure the size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = tree->left ? binary_tree_size(tree->left) : 0;
	height_right = tree->right ? binary_tree_size(tree->right) : 0;

	return (height_left + height_right + 1);
}

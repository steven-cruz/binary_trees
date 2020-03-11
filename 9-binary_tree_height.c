#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to tree.
 * Return: height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (tree == NULL || (!(tree->left) && !(tree->right)))
		return (0);

	h_left = binary_tree_height(tree->left) + 1;
	h_right = binary_tree_height(tree->right) + 1;

	if (h_left >= h_right)
		return (h_left);
	else
		return (h_right);
}

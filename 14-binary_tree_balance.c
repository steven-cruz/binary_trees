#include "binary_trees.h"
#define MAX(a, b) ((a) >= (b) ? (a) : (b))

/**
 * height - cacule height.
 * @tree: left or right subtree.
 * Return: height.
 */
int height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree || (tree->left || tree->right))
		return (1 + MAX(height(tree->left),
				height(tree->right)));
	return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: balance factor of a binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (height(tree->left) - height(tree->right));
}

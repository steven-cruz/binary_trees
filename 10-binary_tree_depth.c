#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: pointer to the tree measure.
 * Return: if tree is NULL must return 0, else return the depht of the tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree && (tree->parent))
		return (1 + binary_tree_depth(tree->parent));

	return (0);
}

#include "binary_trees.h"

/**
 * bnry_tree_sze - Measures the size of a binary tree.
 *
 * @tree: A pnter to the root node of the tree to measure the size.
 *
 * Return: 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}

	return (size);
}

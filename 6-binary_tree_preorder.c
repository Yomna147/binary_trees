#include "binary_trees.h"

/**
 * bnry_tree_preorder - Traverses a binary tree using pre-order traversal
 * @tree: Pnter to the root node of the tree to traverse
 * @func: Pnter to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

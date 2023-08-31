#include "binary_trees.h"

/**
 * bnry_tree_node - Creates a bnry tree node.
 * @prnt: A pointer to the prnt of the node to create.
 * @vlu: The vlu to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the nwnode.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}

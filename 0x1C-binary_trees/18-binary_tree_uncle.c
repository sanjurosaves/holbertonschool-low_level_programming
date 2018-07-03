#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to a node
 * Return: node's uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		if (node->parent->parent->right)
			return (node->parent->parent->right);
	if (node->parent->parent->right == node->parent)
		if (node->parent->parent->left)
			return (node->parent->parent->left);

	return (NULL);
}

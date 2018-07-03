#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @node: pointer to node
 * Return: depth of node, 0 if node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	if (!node)
		return (0);

	depth = binary_tree_depth(node->parent);

	if (!node->parent)
		return (depth);
	else
		return (1 + depth);
}

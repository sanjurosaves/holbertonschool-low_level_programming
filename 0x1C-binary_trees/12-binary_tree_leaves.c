#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to tree
 * Return: number of leaves in the tree; 0 if tree is null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_l, leaves_r;

	if (!tree)
		return (0);

	leaves_l = binary_tree_leaves(tree->left);
	leaves_r = binary_tree_leaves(tree->right);

	if (!tree->left && !tree->right)
		return (1 + leaves_l + leaves_r);
	else
		return (leaves_l + leaves_r);
}

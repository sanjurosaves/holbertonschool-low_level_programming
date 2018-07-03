#include "binary_trees.h"

/**
 * max - tests for max value
 * @l: left node value
 * @r: right node value
 * Return: greater of l and r
 */
size_t max(size_t l, size_t r)
{
	return ((l > r) ? l : r);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to tree
 * Return: height of binary tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (!tree)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return (1 + max(lh, rh));
}

/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: pointer to tree
 * Return: balance of binary tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lh, rh;
	int bf;

	if (!tree)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	bf = lh - rh;

	return (bf);
}

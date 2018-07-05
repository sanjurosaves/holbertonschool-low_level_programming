#include "binary_trees.h"

/**
 * _pow_recursion - retruns the values of x to the y power for
 * non-negative co-efficients
 * @y: power
 * @x: base
 * Return: exponential expansion, unless y < 0, in which case -1 for error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}

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
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to tree nodde
 * Return: number of nodes in tree w/1+ children, 0 if tree is NULL)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	count = binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	count++;

	return (count);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to tree to check
 * Return: 1 if full, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int c, h;

	if (!tree)
		return (0);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);

	c = binary_tree_nodes(tree);
	h = binary_tree_height(tree);

	if (c == ((_pow_recursion(2, h)) - 1))
		return (1);
	else
		return (0);
}

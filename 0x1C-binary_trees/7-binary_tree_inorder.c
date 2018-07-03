#include "binary_trees.h"

/**
 * binary_tree_inorder - pre-order style traversal while printing vals
 * @tree: pointer to tree
 * @func: function pointer
 * Return - void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

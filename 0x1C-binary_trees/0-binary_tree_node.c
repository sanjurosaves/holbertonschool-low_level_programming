#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @value: integer value
 * @parent: pointer to parent
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->parent = NULL;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->n = value;

	if (parent)
		newnode->parent = parent;

	return (newnode);
}

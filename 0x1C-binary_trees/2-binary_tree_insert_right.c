#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right-child of another node
 * @value: integer value
 * @parent: pointer to parent node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *tmp;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->right == NULL)
		parent->right = newnode;
	else
	{
		tmp = parent->right;
		parent->right = newnode;
		newnode->right = tmp;
		tmp->parent = newnode;
	}

	return (newnode);
}

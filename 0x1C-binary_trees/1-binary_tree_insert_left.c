#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left == NULL)
		parent->left = newnode;
	else
	{
		tmp = parent->left;
		parent->left = newnode;
		newnode->left = tmp;
		tmp->parent = newnode;
	}

	return (newnode);
}

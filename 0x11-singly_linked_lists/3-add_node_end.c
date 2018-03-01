#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @str: string literal to be placed in node at tail of linked list
 * @head: address of the existing linked list head
 * Return: address of new node, or NULL upon failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tmp;
	unsigned int len;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
		*head = newnode;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = newnode;
	}

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
		;
	newnode->len = len;

	newnode->next = NULL;

	return (newnode);
}

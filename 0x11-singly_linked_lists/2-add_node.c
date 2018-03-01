#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @str: string literal to be placed in node at head of linked list
 * @head: address of the existing linked list head
 * Return: address of new node, or NULL upon failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return(NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
		;
	newnode->len = len;

	newnode->next = *head;

	*head = newnode;

	return (*head);
}

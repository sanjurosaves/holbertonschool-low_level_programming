#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @n: integer to be placed in node at head of linked list
 * @head: address of the existing linked list head
 * Return: address of new node, or NULL upon failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	*head = newnode;

	return (*head);
}

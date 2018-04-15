#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at end of list
 * @n: number
 * @head: address of the existing linked list head
 * Return: address of new element, or NULL upon failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *last;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	last = *head;

	newnode->n = n;

	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = newnode;

	newnode->prev = last;

	return (newnode);

}

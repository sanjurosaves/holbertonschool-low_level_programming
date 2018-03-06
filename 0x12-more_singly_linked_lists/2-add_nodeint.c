#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of linked list
 * @n: integer value
 * @head: pointer to pointer to list head
 * Return: address of the new element, or, in the event of failure, NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = *head;

	*head = new;

	return (*head);
}

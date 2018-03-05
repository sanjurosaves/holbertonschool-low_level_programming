#include "lists.h"

int pop_listint(listint_t **head)
{
	int n = (*head)->n;

	if (*head == NULL)
		return (0);

	if ((*head)->next != NULL)
		*head = (*head)->next;
	else
	{
		free(*head);
		return (0);
	}

	return (n);
}

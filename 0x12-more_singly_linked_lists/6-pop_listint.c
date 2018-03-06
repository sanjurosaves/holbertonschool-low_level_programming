#include "lists.h"

/**
 * pop_listint - deletes head node of linked list and returns deleted data
 * @head: pointer to pointer to list head
 * Return: data from what was previously the head nead
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;

	return (n);
}

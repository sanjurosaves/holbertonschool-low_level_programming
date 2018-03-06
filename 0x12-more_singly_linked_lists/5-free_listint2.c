#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: pointer to pointer to head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	free (*head);

	*head = NULL;
}

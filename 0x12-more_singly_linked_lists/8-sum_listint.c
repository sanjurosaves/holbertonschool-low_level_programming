#include "lists.h"

/**
 * sum_listint - returns the sum of all data in a linked list
 * @head: pointer to head of list
 * Return: sum, or zero if head is null
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

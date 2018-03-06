#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @index: index of node to return
 * @head: pointer to head of list
 * Return: nth node of the list, or NULL when nth node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (NULL);
}

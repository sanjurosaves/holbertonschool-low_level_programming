#include "lists.h"

/**
 * dlistint_len - returns count of elements of a list
 * @h: head of linked list to print
 * Return: count of list nodes printed
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodecount = 0;

	for (; h != NULL; nodecount++)
	{
		h = h->next;
	}

	return (nodecount);
}

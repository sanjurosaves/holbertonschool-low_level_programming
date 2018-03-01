#include "lists.h"

/**
 * list_len - counts elements of a list
 * @h: head of linked list to count
 * Return: count of list nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodecount = 0;

	for (; h != NULL; nodecount++)
	{
		h = h->next;
	}

	return (nodecount);
}

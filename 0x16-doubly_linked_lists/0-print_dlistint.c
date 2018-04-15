#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: head of linked list to print
 * Return: count of list nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodecount = 0;

	for (; h != NULL; nodecount++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (nodecount);
}

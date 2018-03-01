#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: head of linked list to print
 * Return: count of list nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nodecount = 0;

	for (; h != NULL; nodecount++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%i] %s\n", h->len, h->str);

		h = h->next;
	}

	return (nodecount);
}

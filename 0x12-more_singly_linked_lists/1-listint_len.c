#include "lists.h"

/**
 * listint_len - returns num of elements in a linked list
 * @h: pointer to list head
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h->next != NULL)
	{
		h = h->next;
		count++;
	}

	return (count + 1);
}

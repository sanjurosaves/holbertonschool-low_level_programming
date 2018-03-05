#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h->next != NULL)
	{
		h = h->next;
		count++;
	}

	return (count + 1);
}

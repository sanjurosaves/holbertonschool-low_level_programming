#include "lists.h"

/**
 * dlistint_len - returns num of elements in a linked list
 * @h: pointer to list head
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
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

/**
 * insert_dnodeint_at_index - inserts new node at a given position
 * @n: interger value
 * @idx: index of list where new node will be added
 * @h: pointer tom pointer to list head
 * Return: address of new node, or NULL upon failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 1;
	dlistint_t *new, *tmphead;

	tmphead = *h;

	if (idx > dlistint_len(*h))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while ((*h != NULL) && (count <= idx))
	{
		if (count == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->next = (*h)->next;
			(*h)->next = new;
		}
		else
			*h = (*h)->next;
		count++;
	}

	if (*h == NULL)
		return (NULL);

	*h = tmphead;

	return (new);
}

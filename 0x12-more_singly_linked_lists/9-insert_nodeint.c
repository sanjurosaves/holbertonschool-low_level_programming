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
/**
 * add_nodeint - adds new node at beginning of linked list
 * @n: integer value
 * @head: pointer to pointer to list head
 * Return: address of the new element, or, in the event of failure, NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	new->next = *head;
	*head = new;

	return (*head);
}

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @n: interger value
 * @idx: index of list where new node will be added
 * @head: pointer tom pointer to list head
 * Return: address of new node, or NULL upon failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 1;
	listint_t *new, *tmphead;

	tmphead = *head;

	if (idx > listint_len(*head))
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	while ((*head != NULL) && (count <= idx))
	{
		if (count == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->next = (*head)->next;
			(*head)->next = new;
		}
		else
			*head = (*head)->next;
		count++;
	}

	if (*head == NULL)
		return (NULL);

	*head = tmphead;

	return (new);
}

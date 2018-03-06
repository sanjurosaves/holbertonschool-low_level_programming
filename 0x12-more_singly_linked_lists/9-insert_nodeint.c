#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @n: interger value
 * @idx: index of list where new node will be added
 * @head: pointer tom pointer to list head
 * Return: address of new node, or NULL upon failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new;

	while ((*head != NULL) && (count <= idx))
	{
		if (count == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->next = *head;

			*head = new;
		}
		else
			*head = (*head)->next;

		count++;
	}

	if (*head == NULL)
		return (NULL);

	return (new);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node from linked list at specified index
 * @index: index of node to be deleted
 * @head: pointer to pointer to list head
 * Return: 1 upon success; -1 upon failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *junk, *tmphead, *tmphead2;

	if (*head == NULL)
		return (-1);

	tmphead = *head;

	if (index != 0)
	{
		while (*head != NULL)
		{
			if (count + 1 == index)
				tmphead2 = *head;
			if (count == index)
			{
				junk = *head;
				tmphead2->next = (*head)->next;
				*head = (*head)->next;
				free(junk);
				*head = tmphead;
				break;
			}
			else
			{
				*head = (*head)->next;
				if (head == NULL)
					return (-1);
			}
			count++;
		}
	}
	else
	{
				junk = *head;
				*head = (*head)->next;
				free(junk);
	}

	return (1);
}

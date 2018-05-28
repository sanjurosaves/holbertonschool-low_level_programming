#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * swap2 - swap function for doubly linked list
 *
 *@pointer: pointer to second node
 *@before: pointer to node before pointer
 *
 *Return: None/void
 */
void swap2(listint_t *pointer, listint_t *before)
{
	if (pointer->next == NULL)
	{
		before->prev->next = pointer;
		before->next = pointer->next;
		pointer->next = before;
		pointer->prev = before->prev;
		before->prev = pointer;
	}
	else if ((before->prev != NULL) && (before != NULL))
	{
		before->prev->next = pointer;
		pointer->next->prev = before;
		before->next = pointer->next;
		pointer->next = before;
		pointer->prev = before->prev;
		before->prev = pointer;
	}

	if ((before->prev == NULL) && (before != NULL))
	{
		pointer->prev = NULL;
		pointer->next->prev = before;
		before->prev = pointer;
		before->next = pointer->next;
		pointer->next = before;
	}

	if (before == NULL)
		return;
}
/**
 * insertion_sort_list - insertion sort algorhithm to sort array of integers
 *
 * @list: double pointer to array of integers
 *
 * Return: none/void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *PH = *list, *insertion;

	if (*list == NULL || list == NULL)
		return;

	while (PH != NULL)
	{
		if ((PH->next == NULL) && (PH->prev != NULL) &&
		    (PH->n < PH->prev->n))
		{
			insertion = PH;
			while ((insertion->prev != NULL) && (insertion->prev->n > insertion->n))
			{
				swap2(insertion, insertion->prev);
				if (insertion->prev == NULL)
					*list = insertion;
				print_list(*list);
			}
		}
		if (((PH->prev != NULL) && (PH->next != NULL)) &&
		    ((PH->next->n < PH->n) || (PH->n < PH->prev->n)))
		{
			insertion = PH;
			if (insertion->prev != NULL)
			{
				while ((insertion->prev != NULL) && (insertion->prev->n > insertion->n))
				{
					swap2(insertion, insertion->prev);
					if (insertion->prev == NULL)
						*list = insertion;
					print_list(*list);
				}
			}
		}
		if (PH->next != NULL)
			PH = PH->next;
		else
			break;
	}
}

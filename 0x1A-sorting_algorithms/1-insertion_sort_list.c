#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

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
		printf("value of before: %d", before->n);
}

/**
 * insertion_sort_list: use insertion sort algorhithm to sort array of integers
 *
 * @list: double pointer to array of integers
 *
 * Return: none/void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *PH = *list, *insertion;

	while (PH != NULL)
	{
		if ((PH->next == NULL) && (PH->prev != NULL))
		{
			if (PH->n < PH->prev->n)
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
		}

		if ((PH->prev != NULL) && (PH->next != NULL))
		{
			if ((PH->next->n < PH->n) || (PH->n < PH->prev->n))
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
		}

		if (PH->next != NULL)
			PH = PH->next;
		else
			break;
	}
}

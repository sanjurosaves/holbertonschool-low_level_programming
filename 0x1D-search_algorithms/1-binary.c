#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @value: value to search for
 * @size: number of elements in array
 * @array: array of sorted integers
 * Return: index of matching value; if no match return -1
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int l = 0;
	unsigned int r = size - 1;
	unsigned int m = r;
	unsigned int i = 0;

	while (l <= r)
	{
		m = (l + r) / 2;

		printf("Searching in array: ");
		i = l;
		while (i <= r)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
			else
				printf("\n");
			i++;
		}

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}

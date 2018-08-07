#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @value: value to search for
 * @size: number of elements in the array
 * @array: array of integers
 * Return: matching index; if no match return -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @value: value to search for
 * @size: number of elements in the array
 * @array: array of sorted integers
 * Return: index of matching value, if no match return -1
 */
int jump_search(int *array, size_t size, int value)
/* L == array, n == size, s == value */
{
	unsigned int a = 0;
	float b = sqrt(size);

	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);

		a = a + b;

		if (a >= size)
		{
			printf("Value found between indexes [%d] and [%d]\n", a - (int)b, a);
			a = a - (int)b;
			printf("Value checked array[%d] = [%d]\n", a, array[a]);
			return (-1);
		}

	}

	if (array[a] >= value)
		printf("Value found between indexes [%d] and [%d]\n", a - (int)b, a);

	a = a - (int)b;

	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a = a + 1;
		if (a >= size)
		{
			printf("%d\n", array[a]);
			printf("WHILE 2 %d\n", a);
			return (-1);
		}
	}

	if (array[a] == value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		return (a);
	}

	return (-1);
}

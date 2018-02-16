#include "holberton.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @max: maximum value
* @min: minimum value
* Return: pointer to new array, null on error or if min > max
*/
int *array_range(int min, int max)
{
	int i, j;
	int *arr;

	if (min > max)
		return (0);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == 0)
		return (0);

	for (i = 0, j = min; j <= max; i++, j++)
		arr[i] = j;

	return (arr);
}

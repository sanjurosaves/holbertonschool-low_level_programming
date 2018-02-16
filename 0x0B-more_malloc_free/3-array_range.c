#include "holberton.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (0);

	arr = malloc((max + 1) * sizeof(int));
	if (arr == 0)
		return (0);

	for (i = min; i <=max; i++)
		arr[i] = i;

	return (arr);
}

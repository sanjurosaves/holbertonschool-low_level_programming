#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2d array of integers
 * @height: num rows
 * @width: num colums
 * Return: NULL on failure or when either param is < 1,
 * otherwise pointer to array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if ((width < 1) || (height < 1))
		return (0);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == 0)
			return (0);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
		;
	}

	return (arr);
}

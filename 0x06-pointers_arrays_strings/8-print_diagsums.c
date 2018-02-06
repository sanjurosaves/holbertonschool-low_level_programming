#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of both diagonals of square matrix
 * @size: size of square
 * @a: pointer to int array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;

	if (size == 1)
		printf("%d, %d\n", a[0], a[0]);
	else if (size == 0)
		;
	else
	{
		for (i = 0; i < (size * size); i = (size + i + 1))
			sum += a[i];

		printf("%d, ", sum);

		sum = 0;

		for (i = (size * (size - 1)); i > 0; i -= (size - 1))
			sum += a[i];

		printf("%d\n", sum);
	}

}

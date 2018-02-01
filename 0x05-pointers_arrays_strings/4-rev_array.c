#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * reverse_array - reverses contents of array of ints
 * @a: array of integers
 * @n: number of ints in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n / 2); i++)
	{
		swap_int(&a[n - i - 1], &a[i]);
	}
}

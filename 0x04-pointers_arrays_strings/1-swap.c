#include "holberton.h"

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

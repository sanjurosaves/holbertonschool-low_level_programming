#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints array of ints separated by commasa
 * @a: array
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ((n - i) > 1)
			printf("%d ,", a[i]);
		else
			printf("%d\n", a[i]);

	}

}

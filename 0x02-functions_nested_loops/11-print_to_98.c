#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number passed from main
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 99)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}

	printf("%d \n", i);
}

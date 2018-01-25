#include "holberton.h"

/**
 * print_triangle - prints triangle followed by new line
 * @size: width of bottom of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
				_putchar(' ');

			for (j = 1; j <= (size - (size - i)); j++)
				_putchar(35);

			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}

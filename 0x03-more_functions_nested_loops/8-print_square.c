#include "holberton.h"

/**
 * print_square - prints a square with hash symbols
 * @size: width and length of square
 * Return: void
 */
void print_square(int size)
{
	short int i, j;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(35);
			_putchar('\n');
		}
	else
		_putchar('\n');
}

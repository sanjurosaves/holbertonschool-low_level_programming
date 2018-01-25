#include "holberton.h"

/**
 * print_line - prints straight line
 * @n: number of times _ should be printed
 * Return: void
 */
void print_line(int n)
{
	short int i;

	for (i = 0; i < n; i++)
		_putchar(95);

	_putchar('\n');
}

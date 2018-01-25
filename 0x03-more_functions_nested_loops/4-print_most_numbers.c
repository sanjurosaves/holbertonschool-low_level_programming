#include "holberton.h"

/**
 * print_most_numbers - prints 0 to 9 except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar((i != 2 && i != 4) ? i + '0' : 30);

	_putchar('n');
}

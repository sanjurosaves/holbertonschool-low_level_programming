#include "holberton.h"

/**
 * print_alphabet - prints a thru z
 * Return: 0 if no error
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');

}

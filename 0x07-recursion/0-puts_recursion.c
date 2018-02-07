#include "holberton.h"

/**
 * _puts_recursion - prints string followed by new line
 * @s: string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i]);
	i++;
	_puts_recursion(&s[i]);
}

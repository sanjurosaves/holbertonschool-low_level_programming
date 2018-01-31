#include "holberton.h"

/**
 * puts2 - prints odd numbered characters in a string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int c;

	c = 0;

	for (i = 0; str[i] != '\0'; i++, c++)
		;

	i = 0;

	do {
		_putchar(str[i]);
		i = i + 2;
	} while (i <= c);

	_putchar('\n');

}

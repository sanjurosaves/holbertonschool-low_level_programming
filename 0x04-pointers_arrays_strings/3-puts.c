#include "holberton.h"

/**
 * _puts - counts characters in a string
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');

}

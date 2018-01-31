#include "holberton.h"

/**
 * puts2 - prints odd numbered characters in a string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	do
	{
		_putchar(str[i]);
		i = i + 2;
	}
	while (str[i] != '\0');

	_putchar('\n');

}

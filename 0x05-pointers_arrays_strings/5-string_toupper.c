#include "holberton.h"

/**
 * string_toupper - changes lowercase chars to upper
 * @str: char string passed
 * Return: Lower case char
 */
char *string_toupper(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;

	return (str);
}

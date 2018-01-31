#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int h;
	int j;
	int k;
	char tmp[449];

	for (h = 0; s[h] != '\0'; h++)
		;

	k = h;

	for (j = 0; h > 0; h--, j++)
		tmp[j] = s[h - 1];

	for (j = 0; k > 0; k--, j++)
		s[j] = tmp[j];

	s[j + 1] = '\0';

}

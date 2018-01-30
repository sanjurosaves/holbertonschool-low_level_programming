#include "holberton.h"

/**
 * _strlen - counts characters in a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	int k;
	char tmp[98];

	i = _strlen(s);
	k = i;

	for (j = 0; i > 0; i--, j++)
		tmp[j] = s[i - 1];

	for (j = 0; k > 0; k--, j++)
		s[j] = tmp[j];

}

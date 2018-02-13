#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - counts characters in a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	if (s == NULL || *s == '\0' || s == 0)
		i = 0;

	else
	{
		for (i = 1; s[i] != '\0'; i++)
			;
	}

	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s2: string 2
 * @s1: string 1
 * Return: pointer to new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	char *new;

	new = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new == 0)
		return (0);

	for (i = 0; i < (len1); i++)
		new[i] = s1[i];

	for (j = 0 ; i < (len1 + len2); i++, j++)
		new[i] = s2[j];

	new[len1 + len2 + 1] = '\0';

	return (new);
}

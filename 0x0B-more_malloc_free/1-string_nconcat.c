#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - counts characters in a string
 * @s: string
 * Return: string length
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

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
 * string_nconcat - concatenates two strings
 * @s2: string 2
 * @s1: string 1
 * @n: max length of s2 in new string
 * Return: pointer to new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1 = _strlen(s1);
	unsigned int len2;
	char *new;

	if (_strlen(s2) > n)
		len2 = n;
	else
		len2 = _strlen(s2);

	new = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new == 0)
		return (0);

	printf("%lu\n", sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < (len1); i++)
		new[i] = s1[i];

	for (j = 0 ; i < (len1 + len2); i++, j++)
		new[i] = s2[j];

	new[len1 + len2 + 1] = '\0';

	return (new);
}

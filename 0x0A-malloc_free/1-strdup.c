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

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: pointer to string
 * Return: pointer to duplicated string, NULL on failures
 */
char *_strdup(char *str)
{
	int i;
	int len = _strlen(str);
	char *new;

	if (*str == 0 || *str == '\0' || str == NULL)
		return (0);

	new = malloc(sizeof(char) * len);
	if (new == 0)
		return (0);

	for (i = 0; i < len; i++)
		new[i] = str[i];

	return (new);
}

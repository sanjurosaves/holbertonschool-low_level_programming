#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: pointer to string
 * Return: pointer to duplicated string, NULL on failures
 */
char *_strdup(char *str)
{
	int i;
	int len;
	char *new;

	if (*str == 0 || *str == '\0' || str == NULL)
		return (0);

	for (len = 0; str[len] != '\0'; len++)
		;

	len++;

	new = malloc(sizeof(char) * len);
	if (new == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		new[i] = str[i];

	return (new);
}

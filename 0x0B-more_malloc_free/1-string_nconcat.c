#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 * @n: max length of s2
 * @s2: string 2
 * @s1: string 1
 * Return: pointer to new space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int l1, l2, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;

	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (n < l2)
		l2 = n;

	new = malloc(sizeof(char) * (l1 + l2 + 1));
	if (new == 0)
		return (NULL);

	for (i = 0; i < l1; i++)
		new[i] = s1[i];

	for (j = 0; i < (l1 + l2); i++, j++)
		new[i] = s2[j];

	new[l1 + l2 + 1] = '\0';

	return (new);
}

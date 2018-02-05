#include "holberton.h"

/**
 * _strspn - get length of a prefix substring
 * @accept: search for contents of this string
 * @s: string to search in
 * Return: count of number of bytes in s that match bytes in accept,
 * prior to non-match
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int c = 0;

	for (i = 0; s[i] != '\0' && i <= c; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
			}
		}
	}

	return (c);
}

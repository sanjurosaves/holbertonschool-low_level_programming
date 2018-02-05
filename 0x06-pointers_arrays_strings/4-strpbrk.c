#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @accept:  string of bytes to search for
 * @s: string to search in
 * Return: pointer to the first matching byte in s; 0 if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p = s;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		;
	}

	return (0);
}

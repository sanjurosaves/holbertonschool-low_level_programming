#include "holberton.h"

/**
 * _strstr - searches a string for a a substring
 * @needle: what we're searching for
 * @haystack: where we're searching
 * Return: pointer to the first byte of match; 0 if no match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, l, m;
	char *p = haystack;


	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
			if (haystack[i] == needle[j])
			{
				for (l = i, m = j; haystack[l] == needle[m];
				     l++, m++)
				{
					if (needle[m] == '\0')
					{
						p = &haystack[i];
						return (p);
					}
				}
			}
		;
	}

	return (0);
}

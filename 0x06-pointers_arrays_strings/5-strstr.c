#include "holberton.h"

/**
 * _strstr - searches a string for a a substring
 * @needle: what we're searching for
 * @haystack: where we're searching
 * Return: pointer to the first byte of match; 0 if no match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, l, m;
	char *p = haystack;

	if (haystack[0] == '\0' && needle[0] == '\0')
	{
		p = &haystack[0];
		return (p);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		m = 0;
		if (haystack[i] == needle[m])
		{
			for (l = i; haystack[l] == needle[m] ||
				     needle[m] == '\0'; l++, m++)
			{
				if (needle[m] == '\0')
				{
					p = &haystack[i];
					return (p);
				}
			}
		}
		if (needle[0] == '\0')
		{
			p = &haystack[0];
			return (p);
		}
	}

	return (0);
}

#include "holberton.h"

/**
 * _strchr - locates a char in a string
 * @s: string to search in
 * @c: char to find
 * Return: pointer to 1st occurence of c in s; null when no match
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *p = s;

	do {
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
		i++;
	} while (s[i] != '\0' || c == '\0');

		return (0);
}

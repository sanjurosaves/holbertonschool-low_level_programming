#include "holberton.h"

/**
 * _strlen - counts characters in a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;

	return (i);
}

/**
 * _strcat - concatenates two strings
 * @dest: destination string to add to
 * @src: source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	unsigned int i, l;
	unsigned short int end = 0;

	l = _strlen(dest);

	for (i = 0; end != 1; i++)
	{
		dest[l + i] = src[i];
		if (src[i] == '\0')
			end = 1;
	}

	return (dest);
}

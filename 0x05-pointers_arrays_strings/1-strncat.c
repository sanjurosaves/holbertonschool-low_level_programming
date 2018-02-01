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
 * _strncat - concatenates two strings
 * @dest: destination string to add to
 * @src: source string
 * @n: max num of bytes
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	unsigned int i, l;
	unsigned short int end = 0;

	l = _strlen(dest);

	for (i = 0; end != 1 && n > 0; i++)
	{
		dest[l + i] = src[i];
		if (src[i] == '\0' || src[i + 1] == src[n])
			end = 1;
	}

	return (dest);
}

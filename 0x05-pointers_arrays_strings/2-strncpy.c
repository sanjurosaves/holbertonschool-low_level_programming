#include "holberton.h"
#include <stdio.h>


/**
 * _strncpy - concatenates two strings
 * @dest: destination string to add to
 * @src: source string
 * @n: max num of bytes
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	unsigned short int end = 0;

	for (i = 0; end != 1 && n >= 0; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0' || src[i + 1] == src[n])
			end = 1;
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

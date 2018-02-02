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

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for ( ; n > i; i++)
		dest[i] = '\0';

	return (dest);
}

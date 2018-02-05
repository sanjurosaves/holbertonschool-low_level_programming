#include "holberton.h"

/**
 * _memset - fills memory with a contant byte
 * @n: number of bytes to fill
 * @b: constant byte with which to fill
 * @s: address to begin printing with
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

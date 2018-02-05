#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @n: bytes to copy
 * @src: memory to be copied
 * @dest: memory to copy to
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

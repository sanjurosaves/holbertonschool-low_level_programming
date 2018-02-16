#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @size: data type size per element
 * @nmemb: number of elements
 * Return: pointer to allocated memory or 0 on errors or bad input
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *vp;
	unsigned int i;

	if (nmemb == 0)
		return (0);

	if (size == 0)
		return (0);

	vp = malloc(nmemb * size);
	if (vp == 0)
		return (0);

	for (i = 0; i < nmemb; i++)
		vp[i] = 0;

	return (vp);
}

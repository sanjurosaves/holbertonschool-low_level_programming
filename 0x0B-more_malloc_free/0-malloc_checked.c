#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to the allocated memory
 * @b: amount of memory to be allocated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *be;

	be = malloc(b);
	if (be == NULL)
		exit(98);

	else
		return (be);
}

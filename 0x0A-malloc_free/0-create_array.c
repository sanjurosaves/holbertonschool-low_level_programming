#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes w-a specific char
 * @size: size of array
 * @c: char to repeat
 * Return: pointer to array or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (0);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (0);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);

}

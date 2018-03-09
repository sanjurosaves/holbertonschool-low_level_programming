#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: place at which to set bit
 * @n: pointer to the number whose bit we want to set
 * Return: 1 upon success, -1 upon failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	*n = (1 << index) | *n;

	return (1);
}

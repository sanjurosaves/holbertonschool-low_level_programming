#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: index at which to clear the bit
 * @n: pointer to the number
 * Return: 1 upon success, 0 upon failure;
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	*n = ~(1 << index) & *n;

	return (1);
}

#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index of binary value to find
 * @n: decimal number
 * Return: bit 1 or 0; or -1 in the event of failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1 << index;
	int masked_n = n & mask;
	int bit = masked_n >> index;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	return (bit);
}

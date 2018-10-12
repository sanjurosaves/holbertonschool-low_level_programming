#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index of binary value to find
 * @n: decimal number
 * Return: bit 1 or 0; or -1 in the event of failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if ((sizeof(n)) * 8 - 1 < index)
		return (-1);

	value = (n >> index) & 0x1;
	return (value);
}

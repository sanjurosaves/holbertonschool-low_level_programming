#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @m: first number
 * @n: second number
 * Return: number of bits we need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, count = 0;

	flip = n ^ m;

	while (flip)
	{
		count += flip & 1;
		flip >>= 1;
	}

	return (count);
}

#include "holberton.h"

/**
 * dec_to_bin - convert base10 to base2
 * @n: number to conver
 * Return: binary number
 */
unsigned long int dec_to_bin(unsigned long int n)
{
	int remainder;
	unsigned long int binary = 0, i = 1;

	while(n != 0)
	{
		remainder = n % 2;
		n = n / 2;
		binary += (remainder * i);
		i = i * 10;
	}

	return binary;
}

/**
 * count_dig - count digits in an integer
 * @n: number
 * Return: number of digits in n
 */
unsigned int count_dig(unsigned long int n)
{
	int len = 0;
	while(n != 0)
	{
		n /= 10;
		len++;
	}
	return len;
}

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

	if (count_dig(dec_to_bin(n)) < index)
		return (-1);

	return (bit);
}

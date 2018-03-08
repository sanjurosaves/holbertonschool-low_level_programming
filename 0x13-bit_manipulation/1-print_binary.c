#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned short int denom = 1;

	if (denom > n)
	{
		_putchar('0');
		return;
	}

	if (denom == n)
	{
		_putchar('1');
		return;
	}

	while (denom <= n)
		denom <<= 1;

	denom >>= 1;

	while (denom != 0)
	{
		if (n >= denom)
		{
			_putchar('1');
			n -= denom;
		}
		else
			_putchar('0');

		denom >>= 1;
	}
}

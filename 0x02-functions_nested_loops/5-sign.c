#include "holberton.h"

int _putchar(char c);

/**
 * print_sign - print number's sign amd return
 * @n: + for positive; 0 for zero; - for negative
 * Return: 1 for positive; 0 for zero; -1 for negative
 **/
int print_sign(int n)
{
	int numLinePos;

	if (n > 0)
	{
		_putchar('+');
		numLinePos = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		numLinePos = -1;
	}
	else
	{
		_putchar('0');
		numLinePos = 0;
	}

	return (numLinePos);
}

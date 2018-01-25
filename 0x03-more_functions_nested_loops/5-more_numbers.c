#include "holberton.h"

/**
 * more_numbers - print 0 - 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	short int i;
	short int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}

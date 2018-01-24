#include "holberton.h"

int _putchar(char c);

/**
 * times_table - prints the 9 times table starting w/zero
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int temp;

	for (i = 0; i < 10; i++)
	{
		temp = i;
		_putchar('0');
		_putchar(',');

		for (j = 0; j < 9; j++)
		{
			if (j != 0)
				i = i + temp;

			_putchar(' ');

			if (i < 10)
			{
				_putchar(' ');
				_putchar(i + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}

			if (j < 8)
				_putchar(',');
		}

		_putchar('\n');
		i = temp;
	}
}

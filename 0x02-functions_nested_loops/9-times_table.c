#include "holberton.h"

int _putchar(char c);

/**
 * times_table - prints the 9 times table starting w/zero
 * Return: void
 */
void times_table(void)
{
	int adder;
	int temp;
	int innerIter;

	for (adder = 0; adder < 10; adder++)
	{
		temp = adder;
		_putchar('0');
		_putchar(',');

		for (innerIter = 0; innerIter < 9; innerIter++)
		{
			if (innerIter == 0)
				;
			else
				adder = adder + temp;

			if (adder < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(adder + '0');
				if (innerIter < 8)
					_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar((adder / 10) + '0');
				_putchar((adder % 10) + '0');
				if (innerIter < 8)
					_putchar(',');
			}
		}

		_putchar('\n');
		adder = temp;
	}
}

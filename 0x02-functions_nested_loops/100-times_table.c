#include "holberton.h"

int _putchar(char c);

/**
 * print_times_table - prints the 9 times table starting w/zero
 * @n: number passed from main to specify width of times table
 * Return: void
 */
void print_times_table(int n)
{
	if (!(n > 15 || n < 0))
	{
		int i, j, temp;

		for (i = 0; i < (n + 1); i++)
		{
			temp = i; _putchar('0'); if (n > 0) _putchar(',');
			for (j = 0; j < n; j++)
			{
				if (j != 0)
					i = i + temp;
				if (i < 10)
				{
					_putchar(' '); _putchar(' ');
					_putchar(' '); _putchar(i + '0');
					if (j < (n - 1))
						_putchar(',');
				}
				else if (i < 100)
				{
					_putchar(' '); _putchar(' ');
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
					if (j < (n - 1))
						_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar((i / 100) + '0');
					_putchar((i % 100 / 10) + '0');
					_putchar((i % 100 % 10) + '0');
					if (j < (n - 1))
						_putchar(',');
				}
			}
			_putchar('\n');
			i = temp;
		}
	}
}

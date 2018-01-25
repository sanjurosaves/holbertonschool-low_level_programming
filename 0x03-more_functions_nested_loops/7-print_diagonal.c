#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line w backslashes
 * @n: number of time \ char is printed
 * Return: void
 */
void print_diagonal(int n)
{
	short int i;
	short int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
			_putchar('\n');
			if ((n - i) == 1)
				;
			else
			{
				for (j = 0; j < (i + 1); j++)
					_putchar(' ');
			}
		}
	}
	else
		_putchar('\n');
}

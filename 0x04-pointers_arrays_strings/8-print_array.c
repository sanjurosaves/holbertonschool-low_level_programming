#include "holberton.h"

/**
 * put5dig - prints 5 digit integer
 * @a: integer passed
 * Return: void
 */
void put5dig(int a)
{
	{
	_putchar((a / 10000) + '0');
	_putchar(((a / 1000) % 10) + '0');
	_putchar(((a / 100) % 10) + '0');
	_putchar(((a / 10) % 10) + '0');
	_putchar((a % 10) + '0');
	}
}

/**
 * put4dig - prints 4 digit integer
 * @a: integer passed
 * Return: void
 */
void put4dig(int a)
{
	{
	_putchar((a / 1000) + '0');
	_putchar(((a / 100) % 10) + '0');
	_putchar(((a / 10) % 10) + '0');
	_putchar((a % 10) + '0');
	}
}

/**
 * put3dig - prints 3 digit integer
 * @a: integer passed
 * Return: void
 */
void put3dig(int a)
{
	{
	_putchar((a / 100) + '0');
	_putchar(((a / 10) % 10) + '0');
	_putchar((a % 10) + '0');
	}
}

/**
 * put2dig - prints 2 digit integer
 * @a: integer passed
 * Return: void
 */
void put2dig(int a)
{
	{
	_putchar((a / 10) + '0');
	_putchar((a % 10) + '0');
	}
}

/**
 * print_array - prints array of ints separated by commasa
 * @a: array
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			a[i] = -a[i];
			_putchar('-');
		}

	if (a[i] > 9999)
		put5dig(a[i]);
	else if (a[i] > 999)
		put4dig(a[i]);
	else if (a[i] > 99)
		put3dig(a[i]);
	else if (a[i] > 9)
		put2dig(a[i]);
	else if (a[i] < 10)
		_putchar(a[i] + '0');

	if ((n - i) > 1)
	{
		_putchar(',');
		_putchar(' ');
	}


	}

	_putchar('\n');
}

#include "holberton.h"

/**
 * print_last_digit - prints last digit of number
 * @num: number to determine last digit of
 * Return: lastDigit
 */
int print_last_digit(int num)
{
	int lastDigit;

	if (num < 0)
		lastDigit = -num % 10;
	else
		lastDigit = num % 10;

	_putchar(lastDigit + '0');

	return (lastDigit);
}

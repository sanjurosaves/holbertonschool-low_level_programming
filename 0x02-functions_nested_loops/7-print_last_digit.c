#include "holberton.h"

/**
 * print_last_digit - prints last digit of number
 * @num: number to determine last digit of
 * Return: lastDigit
 */
int print_last_digit(int num)
{
	int lastDigit;

	lastDigit = num % 10;

	if (num < 0)
		_putchar(-lastDigit + '0');
	else
		_putchar(lastDigit + '0');

	if (num < 0)
		return (-lastDigit);
	else
		return (lastDigit);
}

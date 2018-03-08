#include "holberton.h"

/**
 * _strlen_recursion - returns the length of string
 * @s: pointer to string
 * Return: length
 */
int _strlen_recursion(const char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (i);

	return (1 + (_strlen_recursion(&s[i + 1])));
}
/**
 * _pow_recursion - retruns the values of x to the y power
 * @y: power
 * @x: base
 * Return: exponential expansion, unless y < 0, in which case -1 for error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_uint - converts binary string to an unsigned int
 * @b: character string
 * Return: converted number, or 0 upon invalid character string input
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, len, i, j;

	if (b == NULL)
		return (0);

	len = _strlen_recursion(b);

	for (i = 0, j = len; i < len; i++, j--)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		if (b[i] == '1')
			sum += _pow_recursion(2, j - 1);
	}

	return (sum);
}

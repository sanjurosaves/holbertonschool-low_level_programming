#include "holberton.h"

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

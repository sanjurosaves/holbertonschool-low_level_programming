#include "holberton.h"

/**
 * factorial - return factorial of n
 * @n: given number
 * Return: factorial of n; if n < 0 return -1 for error
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}

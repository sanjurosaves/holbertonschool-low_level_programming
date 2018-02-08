#include "holberton.h"

/**
 * squareroot - finds square root of perfect square
 * @s: potentialnatural  square root
 * @n: number
 * Return: natural square root or -1
 */
int squareroot(int n, int s)
{
	if (s * s == n)
		return (s);
	else if (s * s > n)
		return (-1);

	return (squareroot(n, s + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * Return: nat squareroot; if it doesn't exist return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (squareroot(n, 0));
}

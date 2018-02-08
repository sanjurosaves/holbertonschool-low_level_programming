#include "holberton.h"

/**
 * isPrime - finds square root of perfect square
 * @x: potentialnatural  square root
 * @n: number
 * Return: natural square root or -1
 */
int isPrime(int x, int n)
{
	if (x < 2)
		return (1);

	if (n % x == 0)
		return (0);

	return (isPrime(--x, n));
}

/**
 * _is_prime_number - checks if integer is prime
 * @n: number
 * Return: 1 if prime; 0 if not prime
 */
int is_prime_number(int n)
{
	int x = n - 1;

	if (n <= 1)
		return (0);

	return (isPrime(x, n));
}

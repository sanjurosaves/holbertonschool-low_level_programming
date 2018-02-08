#include "holberton.h"

/**
 * _abs - calculates and returns absolute value
 * @n: number
 * Return: n
 */
float _abs(float n)
{
	if (n < 0)
		n = -n;

	return (n);
}

/**
 * squareroot - finds squareroot of a number
 * @x: number
 * Return: guess once epsilon threshold is met
 */
float squareroot(float x)
{
	const float epsilon = .1;
	static float guess;

	if (guess == 0)
		guess = 1.0;
	else
	{
		if (_abs(guess * guess - x) >= epsilon)
			guess = (x / guess + guess) / 2.0;

	}


	if (_abs(guess * guess - x) < epsilon)
		return (guess);

	return (squareroot(x));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * Return: nat squareroot; if it doesn't exist return -1
 */
int _sqrt_recursion(int n)
{
	float sq;

	if (n < 0)
		return (-1);

	sq = squareroot((float)n);

	if ((int)sq * (int)sq != n)
		return (-1);

	return ((int)sq);
}

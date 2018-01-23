#include "holberton.h"

/**
 * _islower - checks within char and decimal ascii ranges
 * @c: value passed from main to be checked for lower case
 *
 * Return: 1 if c is lower, 0 if it is not
 */
int _islower(int c)
{
	_Bool isLower;

	if (c >= 'a' && c <= 'z')
		isLower = 1;
	else if (c >= 97 && c <= 122)
		isLower = 1;
	else
		isLower = 0;

	return (isLower);
}

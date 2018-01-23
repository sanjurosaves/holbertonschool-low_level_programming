#include "holberton.h"

/**
 * _isalpha - checks within char and decimal ascii ranges for alpha chars
 * @c: value passed from main to be checked for alpha char
 *
 * Return: 1 if c is alpha letter, 0 if it is not
 */
int _isalpha(int c)
{
	_Bool isAlpha;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		isAlpha = 1;
	else if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		isAlpha = 1;
	else
		isAlpha = 0;

	return (isAlpha);
}

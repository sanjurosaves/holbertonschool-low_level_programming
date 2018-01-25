#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * @c: char passed from main to be checked
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}

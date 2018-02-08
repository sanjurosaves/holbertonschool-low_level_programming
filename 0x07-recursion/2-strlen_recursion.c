#include "holberton.h"

/**
 * _strlen_recursion - returns the length of string
 * @s: pointer to string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (i);

	return (1 + (_strlen_recursion(&s[i + 1])));

}

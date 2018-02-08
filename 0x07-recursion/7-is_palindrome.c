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

/**
 * compare - compares each half of string against each other
 * @end: last letter in string
 * @start: first letter in string
 * @s: pointer to string
 * Return: 1 if strings match, 1 if string is 1 char, 0 otherwise
 */
int compare(char *s, int start, int end)
{
	if (start > end)
		return (1);
	else
	{
		if (s[start] != s[end])
			return (0);

		else if (s[start] != s[end])
			return (compare(s, start++, end--));
	}
	return (1);
}

/**
 * is_palindrome - determines if string is a palindrome
 * @s: pointer to the string
 * Return: 1 if so; 0 if not
 */
int is_palindrome(char *s)
{
	int end = _strlen_recursion(s);

	if (end == 0)
		return (1);

	return (compare(s, 0, end - 1));
}

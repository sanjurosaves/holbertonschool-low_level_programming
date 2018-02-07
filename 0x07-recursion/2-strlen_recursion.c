#include "holberton.h"

int _strlen_recursion(char *s)
{
	static int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(++s);
	}

	return (i);
}

#include "holberton.h"

/**
 * _strlen - counts characters in a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

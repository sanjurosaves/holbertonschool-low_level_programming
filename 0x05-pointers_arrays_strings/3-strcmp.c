#include "holberton.h"

/**
 * _strcmp - compares char arrays
 * @s1: string 1
 * @s2: string 2
 * Return: dif b/w s1 & s2
 */
int _strcmp(char *s1, char *s2)
{
	short int i = 0;

	do {
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] == '\0' && s2[i] == '\0')
			return (0);

		i++;
	} while (s1[i] != s2[i]);

	return (0);
}

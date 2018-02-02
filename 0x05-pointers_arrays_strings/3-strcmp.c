 #include "holberton.h"

/**
 * _strcmp - compares char arrays
 * @s1: string 1
 * @s2: string 2
 * Return: dif b/w s1 & s2
 */
int _strcmp(char *s1, char *s2)
{
	short int i;

	for (i = 0; s1[i] != '\0' && s1[i] == s2[i]; i++)
		;

	return (s1[i] - s2[i]);
}

#include "holberton.h"

/**
 * leet - encodes string into 1337
 * @str: string to be encodes
 * Return: str
 */
char *leet(char *str)
{
	int i;
	unsigned char crypt[256];

	for (i = 0; i < 256; i++)
	{
		crypt[i] = i;
	}

	crypt[97] = '4';
	crypt[65] = '4';
	crypt[101] = '3';
	crypt[69] = '3';
	crypt[108] = '1';
	crypt[76] = '1';
	crypt[116] = '7';
	crypt[84] = '7';
	crypt[111] = '0';
	crypt[79] = '0';

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == 97 || str[i] == 65 || str[i] == 101
		    || str[i] == 69 || str[i] == 108 || str[i] == 76
		    || str[i] == 116 || str[i] == 84 || str[i] == 111
		    || str[i] == 79)
			str[i] = crypt[(int)str[i]];

	return (str);
}

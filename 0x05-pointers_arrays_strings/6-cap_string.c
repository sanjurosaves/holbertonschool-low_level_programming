#include "holberton.h"

/**
 * cap_string - capitalizes all words of string
 * @str: pointer to character string
 * Return: str
 */
char *cap_string(char *str)
{
	unsigned short int s;
	unsigned int i;

	s = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ',' || str[i] == ';' || str[i] == '.'
		    || str[i] == '!' || str[i] == '?' || str[i] ==  '"'
		    || str[i] == '(' || str[i] == ')' || str[i] == '{'
		    || str[i] == '}' || str[i] == ' ' || str[i] == 9
		    || str[i] == 10)
			s = 1;

		if (str[i] >= '0' && str[i] <= '9')
			s = 0;

		if (str[i] >= 65 && str[i] <= 90)
			s = 0;

		if (s == 1 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			s = 0;
		}
	}

	return (str);

}

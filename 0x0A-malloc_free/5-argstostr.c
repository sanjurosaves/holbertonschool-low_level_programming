#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of program
 * @av: vector array of arguments
 * @ac: argument count
 * Return: pointer to the new string, or NULL upon failure, or NULL if
 * ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int charcount = 0;
	char *arr;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			charcount++;
	}

	charcount += ac;

	arr = malloc((charcount + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j] != '\0'; ++j, ++k)
		{
			arr[k] = av[i][j];
			if (av[i][j + 1] == '\0')
			{
				k++;
				arr[k] = '\n';
			}
		}

	}
	arr[k++] = '\0';

	return (arr);
}

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints sum
 * @argv: pointer to array of arguments
 * @argc: count of arguments
 * Return: 0 if successful, 1 if Error of != 2 arguments;
 */
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

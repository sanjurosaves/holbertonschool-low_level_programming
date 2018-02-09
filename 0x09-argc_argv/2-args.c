#include "holberton.h"
#include <stdio.h>

/**
 * main - prints each arguement on a new line
 * @argv: pointer to array of arguments
 * @argc: count of arguments
 * Return: 0;
 */
int main(int argc, char **argv)
{
	int i = argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

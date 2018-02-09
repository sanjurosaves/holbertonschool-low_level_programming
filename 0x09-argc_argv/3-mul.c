#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints product
 * @argv: pointer to array of arguments
 * @argc: count of arguments
 * Return: 0 if successful, 1 if Error of != 2 arguments;
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);

}

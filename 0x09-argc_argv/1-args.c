#include "holberton.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints number of arguments passed in
 * @argv: pointer to array of arguments
 * @argc: count of arguments
 * Return: 0;
 */
int main(int argc, char **argv)
{
	UNUSED(argv);

	printf("%d\n", argc - 1);

	return (0);
}

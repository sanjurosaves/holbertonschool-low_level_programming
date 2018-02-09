#include "holberton.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints programs file name
 * @argv: pointer to array of arguments
 * @argc: count of arguments
 * Return: 0;
 */
int main(int argc, char **argv)
{
	UNUSED(argc);

	printf("%s\n", argv[0]);

	return (0);
}

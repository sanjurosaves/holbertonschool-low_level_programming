#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int int1, int2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' &&
	    *argv[2] != '/'  && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if (((*argv[2] == '/') || (*argv[2] == '%')) && (argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}

	int1 = atoi(argv[1]);
	int2 = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(int1, int2));

	return (0);
}

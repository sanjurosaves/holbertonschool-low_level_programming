#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - redirects integers to correct arithmetic function
 * @s: operator
 * Return: pointer to correct function, NULL if invalid operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

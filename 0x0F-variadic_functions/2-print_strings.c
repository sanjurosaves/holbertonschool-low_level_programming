#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @n: number of parameters
 * @separator: pointer to a char containing first char of separator string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list items;
	char *tmp;

	va_start(items, n);

	for (i = 0; i < (n - 1); i++)
	{
		tmp = va_arg(items, char *);

		if (tmp == NULL)
			printf("(nil)");
		else
			printf("%s", tmp);

		if (separator != NULL)
			printf("%s", separator);
	}

	tmp = va_arg(items, char *);
	if (tmp == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", tmp);

	va_end(items);
}

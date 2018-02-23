#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by new line
 * @n: number of parameters
 * @separator: pointer to separator sting
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list items;

	va_start(items, n);

	for (i = 0; i < (n - 1); i++)
	{
		if (separator != NULL)
			printf("%d%s", va_arg(items, int), separator);
		else
			printf("%d", va_arg(items, int));
	}

	printf("%d\n", va_arg(items, int));

	va_end(items);
}

#include "variadic_functions.h"
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list items;

	va_start(items, n);

	for (i = 0; i < (n - 1); i++)
	{
		if ((separator != NULL) && (va_arg(items, char *) == NULL))
			printf("(nil)%s", separator);
		else if ((separator == NULL) && (va_arg(items, char *) == NULL))
			printf("(nil)");
		else if (separator != NULL)
			printf("%s%s", va_arg(items, char *), separator);
		else if (separator == NULL)
			printf("%s", va_arg(items, char *));

	}

	if ((va_arg(items, char *) == NULL))
		printf("(nil)\n");
	else
		printf("%s\n", va_arg(items, char *));

	va_end(items);
}

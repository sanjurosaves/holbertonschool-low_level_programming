#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all parameters
 * @n: number of arguments passed to this variadic function
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list el;

	if (n == 0)
		return (0);

	va_start(el, n);

	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(el, int);

	va_end(el);

	return (sum);
}

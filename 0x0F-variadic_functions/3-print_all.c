#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_str - prints string
 * @s: string to print
 * Return: void
 */
void print_str(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "nil";
	printf("%s", str);
}

/**
 * print_float - prints float
 * @d: double to print (all floats upgraded)
 * Return: void
 */
void print_float(va_list d)
{
	printf("%f", va_arg(d, double));
}

/**
 * print_int - prints integer
 * @i: int to print
 * Return: void
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_char - prints character
 * @c: char to print
 * Return: void;
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_all - prints anything
 * @format: type of argument passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	data_t type[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	unsigned int i = 0, j;
	char *sep = "";

	va_start(valist, format);
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *type[j].a)
			{
				printf("%s", sep);
				type[j].f(valist);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(valist);

	printf("\n");

}

#ifndef VARIADIC_H_
#define VARIADIC_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct type - data type
 *
 * @a: single char abreviation
 * @f: The function associated
 */
typedef struct type
{
	char *a;
	void (*f)(va_list a);
} data_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

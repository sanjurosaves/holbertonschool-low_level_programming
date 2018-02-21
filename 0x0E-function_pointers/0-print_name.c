#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f: function pointer specifying which function to use
 * @name: pointer to first char of name to print
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name == 0) | (f == 0))
		return;

	f(name);
}

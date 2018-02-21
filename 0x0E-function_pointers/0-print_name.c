#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f: function pointer specifying which function to use
 * @name: pointer to first char of name to print
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == print_name_as_is)
		print_name_as_is(name);
	else if (f == print_name_uppercase)
		print_name_uppercase(name);

}

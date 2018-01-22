#include "holberton.h"

int _putchar(char c);

/**
 * main - function to send chars to _putchar
 * Return: 0 if no error
 */
int main(void)
{
	char string[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	int i;

	for (i = 0; i < 9; i++)
		_putchar(string[i]);

	_putchar('\n');

	return (0);
}

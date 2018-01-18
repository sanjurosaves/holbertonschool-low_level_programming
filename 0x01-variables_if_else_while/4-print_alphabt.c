#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, excluding q & e,
 * followed by a new line
 * Return: 0 when no errors
 */
int main(void)
{
	int i;
	char lowerAlpha[24] = {'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j',
			       'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't',
			       'u', 'v', 'w', 'x', 'y', 'z'};

	for (i = 0; i < 24; i++)
		putchar(lowerAlpha[i]);

	putchar('\n');

	return (0);
}

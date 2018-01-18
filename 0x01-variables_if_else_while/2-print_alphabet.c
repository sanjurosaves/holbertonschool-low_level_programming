#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 0 when no errors
 */
int main(void)
{
	int i;
	char lowerAlpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
			       'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
			       'u', 'v', 'w', 'x', 'y', 'z'};

	for (i = 0; i < 26; i++)
		putchar(lowerAlpha[i]);

	putchar('\n');

	return (0);
}

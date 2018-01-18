#include <stdio.h>

/**
 * main - prints base 16 chars followed by a new line
 * Return: 0 when no errors
 */
int main(void)
{
	int i;
	char base16[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
			   'a', 'b', 'c', 'd', 'e', 'f'};

	for (i = 0; i < 16; i++)
		putchar(base16[i]);

	putchar('\n');

	return (0);
}

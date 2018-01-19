#include <stdio.h>

/**
 * main -  prints all two digit numbers of base 10
 * Return: 0 when no errors
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');
			if ((i * 10 + j) < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

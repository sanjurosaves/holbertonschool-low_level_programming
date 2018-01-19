#include <stdio.h>

/**
 * main -  prints two digit nums in all possible cominations
 * omits reverse combinations and all duplicate digits
 * Return: 0 when no errors
 */
int main(void)
{
	int i;
	int j;
	_Bool eligible[100];

	for (i = 0; i < 100; i++)
		eligible[i] = i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
				;
			else if (eligible[i * 10 + j] == 1 && (i * 10 + j) < 99)
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				eligible[j * 10 + i] = 0;

				if ((i * 10 + j) < 89)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

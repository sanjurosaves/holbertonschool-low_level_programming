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
	int k;
	_Bool eligible[1000];

	for (i = 0; i < 1000; i++)
		eligible[i] = 1;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i == j || i == k || j == k)
					;
				else if (eligible[(i * 100) + (j * 10) + k]
					 == 1 &&
					 ((i * 100) + (j * 10) + k) < 999)
				{
					putchar(i % 10 + '0');
					putchar(j % 10 + '0');
					putchar(k % 10 + '0');
					eligible[(j * 100) + (i * 10) + k] = 0;
					eligible[(j * 100) + (k * 10) + i] = 0;
					eligible[(k * 100) + (i * 10) + j] = 0;
					eligible[(k * 100) + (j * 10) + i] = 0;
					eligible[(i * 100) + (k * 10) + j] = 0;
					eligible[(i * 100) + (j * 10) + k] = 0;
					if (((i * 100) + (j * 10) + k) < 789)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

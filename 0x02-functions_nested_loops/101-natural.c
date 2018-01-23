#include <stdio.h>

/**
 * main - sums multiples of 3 & 5 of all nums belows 1024
 * Return: 0
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 1; i < 1024; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;

	printf("%d\n", sum);

	return (0);
}

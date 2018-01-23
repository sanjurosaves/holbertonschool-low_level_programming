#include <stdio.h>

/**
 * main - generates first 50 Fibonacci nums
 * Return: 0
 */
int main(void)
{
	float fib1;
	float fib2;
	float fibCurrent;
	int i;

	fib1 = 1;
	fib2 = 2;

	printf("%.0f, ", fib1);
	printf("%.0f, ", fib2);

	for (i = 2; i < 50; ++i)
	{
		fibCurrent = fib1 + fib2;
		if (i < 49)
			printf("%.0f, ", fibCurrent);
		else
			printf("%.0f\n", fibCurrent);
		fib1 = fib2;
		fib2 = fibCurrent;
	}

	return (0);
}
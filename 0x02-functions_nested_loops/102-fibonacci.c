#include <stdio.h>

/**
 * main - generates first 50 Fibonacci nums
 * Return: 0
 */
int main(void)
{
	unsigned long fib1;
	unsigned long fib2;
	unsigned long fibCurrent;
	int i;

	fib1 = 1;
	fib2 = 2;

	printf("%lu, ", fib1);
	printf("%lu, ", fib2);

	for (i = 2; i < 50; ++i)
	{
		fibCurrent = fib1 + fib2;
		if (i < 49)
			printf("%lu, ", fibCurrent);
		else
			printf("%lu\n", fibCurrent);
		fib1 = fib2;
		fib2 = fibCurrent;
	}

	return (0);
}

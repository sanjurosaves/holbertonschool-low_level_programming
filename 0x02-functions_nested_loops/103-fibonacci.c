#include <stdio.h>
#include <math.h>

/**
 * main - generates first 50 Fibonacci nums
 * Return: 0
 */
int main(void)
{
	unsigned long fib1;
	unsigned long fib2;
	unsigned long fibCurrent;
	unsigned long sum;
	int i;

	fib1 = 1;
	fib2 = 2;
	sum = fib2;

	for (i = 2; i < 32; ++i)
	{
		fibCurrent = fib1 + fib2;

		if (fibCurrent % 2 == 0)
			sum += fibCurrent;
		fib1 = fib2;
		fib2 = fibCurrent;
	}

	printf("%lu\n", sum);

	return (0);
}

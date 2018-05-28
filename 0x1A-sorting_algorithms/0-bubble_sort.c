#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t n = size;
	unsigned short swapped, i;
	int tmp;

	do
	{
		swapped = 0;
		for (i = 0; i < n; i++)
		{
			if (array[i] < array[i - 1])
			{
				tmp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		}
	}
	while (swapped == 1);
}

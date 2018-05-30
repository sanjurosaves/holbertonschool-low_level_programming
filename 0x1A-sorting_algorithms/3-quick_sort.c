#include "sort.h"
/**
 * swap - swap the values of two array indexes
 *
 * @xp: a pointer to the first array index
 * @yp: a pointer to the second array index
 *
 * Return: none
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
 * lomuto - lomuto partitioning scheme
 *
 * @array: array to partition
 * @beg: beginning of array
 * @pivot: pivot index, always the end of array
 * @size: size of array, for printing
 *
 *
 * Return: index of integer that was swapped for new pivot
 */
int lomuto(int *array, int beg, int pivot, size_t size)
{
	int i, j;

	j = beg;
	i = beg - 1;

	while (j <= pivot)
	{
		if (array[j] <= array[pivot])
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
		j++;
	}
	return (i);
}

/**
 * sort - recursive sort function applying lomuto partitioning scheme
 *
 * @array: pointer to array
 * @beg: beginning of array
 * @end: end of array
 * @size: size of array
 *
 * Return: none/void
 */
void sort(int *array, int beg, int end, size_t size)
{
	int pivot;

	if ((size <= 1) || ((end - beg) < 1))
		return;

	pivot = lomuto(array, beg, end, size);

	if (pivot > beg)
		sort(array, beg, pivot - 1, size);

	if (pivot < end)
		sort(array, pivot + 1, end, size);
}

/**
 * quick_sort - apply quick sort algorithm to array
 *
 * @array: array to be sorted
 * @size: size of array
 *
 * Return:none/void
 */
void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}

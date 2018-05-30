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
 * selection_sort -  apply selection sort algorithm to array
 *
 *@array: pointer to array to be sorted
 *@size: size of array being sorted
 *
 *Return: None/void
 */
void selection_sort(int *array, size_t size)
{
	size_t outer, inner, smallindex;
	int small;

	if ((array == NULL) || (size < 2))
		return;

	outer = 0, inner = 0, smallindex = 0;
	small = array[0];

	for (outer = 0; outer < size - 1; outer++)
	{
		small = array[outer];
		for (inner = outer; inner < size; inner++)
		{
			if ((small > array[inner]) && (outer < size - 1))
			{
				small = array[inner];
				smallindex = inner;
			}
		}
		if (small < array[outer])
		{
			swap(&array[smallindex], &array[outer]);
			print_array(array, size);
		}
	}
}

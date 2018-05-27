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
 * bubble_sort - use bubble sort algorhithm to sort array of integers
 *
 * @array: pointer to the array to be sorted
 * @size: length of the array
 *
 * Return: none/void
 */
void bubble_sort(int *array, size_t size)
{
	size_t outer, inner;

	for (outer = 0; outer < size - 1; outer++)
		for (inner = 0; inner < size - outer - 1; inner++)
			if (array[inner] > array[inner + 1])
			{
				swap(&array[inner], &array[inner + 1]);
				print_array(array, size);
			}

}

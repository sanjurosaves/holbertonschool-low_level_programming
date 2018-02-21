#include "function_pointers.h"

/**
 * array_iterator - executes function given as param on each element of array
 * @action: function pointer to given address
 * @size: size of array
 * @array: pointer to array of integers
 * Return: void;
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array == 0) | (size < 1) | (action == 0))
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);

}

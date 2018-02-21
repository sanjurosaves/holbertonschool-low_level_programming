#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @cmp: pointer to function
 * @size: size of array
 * @array: array of integers
 * Return: -1 if size <= zero or if no match, return array index of 1st match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp == is_98)
		{
			if (is_98(array[i]) != 0)
				return (i);
		}
		else if (cmp == abs_is_98)
		{
			if (abs_is_98(array[i]) != 0)
				return (i);
		}
		else if (cmp == is_strictly_positive)
		{
			if (is_strictly_positive(array[i]) != 0)
				return (i);
		}
		;
	}
	return (-1);
}

#include "holberton.h"

/**
 * _abs - computes absolute value of integer
 * @blah: integer provided from main
 * Return: int
 */
int _abs(int blah)
{
	if (blah < 0)
		blah = -blah;

	return (blah);
}

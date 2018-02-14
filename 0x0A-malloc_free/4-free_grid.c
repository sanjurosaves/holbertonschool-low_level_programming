#include "holberton.h"
#include <stdlib.h>

void free_grid(int **grid, int height)
{
	int i;

	if ((height == 0) || (grid == NULL))
		;
	else
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}

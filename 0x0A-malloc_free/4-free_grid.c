#include "holberton.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid from memory
* @height: number of rows
* @grid: pointer to a pointer to 2d array
* Return: void
*/
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

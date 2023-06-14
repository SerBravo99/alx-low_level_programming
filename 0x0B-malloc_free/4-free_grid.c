#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees 2D array
 * @grid: 2D grid
 * @height: height of grid
 * Description: frees memory of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}

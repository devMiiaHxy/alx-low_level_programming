#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - 2d array structure freed
 * @grid: two-dimensional grid
 * @height: grid height measurement
 * Description: grid memory released
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

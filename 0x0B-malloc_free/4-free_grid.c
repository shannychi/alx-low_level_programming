#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: pointer to grid
 * @height: type int
 * Return: Always 0 (success)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

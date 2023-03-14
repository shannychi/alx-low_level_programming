#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - function to allocate a grid
 * @width: int type
 * @height: int type
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **pt;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pt = malloc(height * sizeof(int));
	if (pt == NULL)
	{
		free(pt);
		return (NULL);	
	}
	for (x = 0; x < height; x++)
	{
		pt[x] = malloc(width * sizeof(int));
		if (pt[x] == NULL)
		{
			free(pt);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			pt[x][y] = 0;
		}
	}
	return (pt);
}

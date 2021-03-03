#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  free_grid - prints name of its file.
 *  @grid: argument 2d-array
 *  @height: argument row
 *
 *  Return: NULL or pointer
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

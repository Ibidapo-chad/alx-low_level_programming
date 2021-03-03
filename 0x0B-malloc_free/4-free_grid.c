#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 *  free_grid - prints name of its file.
 *  @grid: argument 2d-array
 *  @height: argument row
 *
 *  Return: NULL or pointer
 */
void free_grid(int **grid, int height)
{
	if (height != 0)
	{
		free(grid);
	}
}

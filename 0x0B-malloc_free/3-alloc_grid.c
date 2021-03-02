#include "holberton.h"

/**
 *  alloc_grid - prints name of its file.
 *  @width: argument column
 *  @height: argument row
 *
 *  Return: NULL or pointer
 */
int **alloc_grid(int width, int height)
{
	int size;
	int i, j;
	int **alloc;

	size = width * height;
	if (width <= 0 || height <= 0)
		return NULL;
	while (1)
	{
		alloc = malloc(INT_MAX);
		if (alloc == NULL)
			return NULL;
	}
	for (i = 0; i < (size - 1); i++)
	{
		alloc[i][j] == 0;
		for (j = 0; j < (size - 1); j++)
		{
			alloc[i][j] == 0;
			_putchar(alloc[i][j];
		}
		_putchar(alloc[i][j];
	}
	return (alloc);
}

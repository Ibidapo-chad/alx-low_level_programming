#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *  alloc_grid - prints name of its file.
 *  @width: argument column
 *  @height: argument row
 *
 *  Return: NULL or pointer
 */
int **alloc_grid(int width, int height)
{
	int k, m;
	int i, j;
	int **alloc;

	if (width <= 0 || height <= 0)
		return (NULL);
	else
	{
		alloc = (int **)malloc(sizeof(int *) * height);
		if (!alloc)
		{
			free(alloc);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			alloc[i] = (int *)malloc(width * sizeof(int));
			if (!alloc[i])
			{
				for (j = 0; j <= i; j++)
					free(alloc[j]);
				free(alloc);
				return (NULL);
			}
		}
		for (k =0; k < height; k++)
		{
			for (m = 0; m < width; m++)
			{
				alloc[k][m] = 0;
			}
		}
		return (alloc);
	}
}

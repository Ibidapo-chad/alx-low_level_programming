#include "holberton.h"

/**
 *  free_grid - prints name of its file.
 *  @grid: argument 2d-array
 *  @height: argument row
 *
 *  Return: NULL or pointer
 */
void free_grid(int **grid, int height)
{
        int size;
        int i, j;

        size = width * height;
        if (width <= 0 || height <= 0)
                return NULL;
        while (1)
        {
                alloc = malloc(INT_MAX);
		

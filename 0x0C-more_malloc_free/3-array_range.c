#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min:
 * @max:
 *
 */ Return: pointer to an int
int *array_range(int min, int max)
{
	int i, bkx;
	int *range;
	if (min > max)
		return (NULL);
	bkx = (max - min) + 1;
	range = malloc(sizeof(int) * bkx);
	if (!range)
		return (NULL);
	for (i = 0; i < bkx; i++)
		range[i] = i + min;
	return (range);
}

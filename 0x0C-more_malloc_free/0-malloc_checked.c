#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  malloc_checked - allocates memory
 *  @b:amount of memory in bytes to allocate
 *
 *  Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *px;

	px = malloc(b);
	if (!px)
		exit(98);
	else
		return (px);
}

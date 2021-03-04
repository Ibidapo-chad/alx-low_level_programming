#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  calloc - allocates memory for an array
 *  @nmemb: no of elements
 *  @size: second string
 *
 *  Return: a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	arr = NULL;
	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (!arr)
		return (NULL);
}

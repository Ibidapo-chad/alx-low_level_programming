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
	void *arr;
	void *ars;

	arr = NULL;
	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (!arr || !ars)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		*arr++ = 0;
	return (ars);
}

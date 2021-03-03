#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *  create_array - prints name of its file.
 *  @size: argument count
 *  @c: argument vector
 *
 *  Return: 0 to terminate program.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char)malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	else if (c)
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
	}
	else
		return (NULL);
	return (arr);
}

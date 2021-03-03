#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


/**
 *  create_array - prints name of its file.
 *  @size: argument count
 *  @c: argument vector
 *
 *  Return: 0 to terminate program.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	else if (c)
	{
		arr = malloc(sizeof(char) * 2);
		arr[0] = 'k';
		arr[1] = c;
	}
	else
		return (NULL);
	return (arr);
}
